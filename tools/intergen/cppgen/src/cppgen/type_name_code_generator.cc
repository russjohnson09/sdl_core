/**
 * Copyright (c) 2014, Ford Motor Company
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the Ford Motor Company nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "cppgen/type_name_code_generator.h"

#include <algorithm>
#include <cassert>
#include <limits>

#include "model/builtin_type.h"
#include "model/composite_type.h"
#include "utils/safeformat.h"

using typesafe_format::strmfmt;

namespace codegen {

namespace {
const char* StdIntTypeFromRagne(const Integer::Range& range) {
  if (range.min() < 0) {
    Integer::Range int8_t_range(-128, 127);
    Integer::Range int16_t_range(-32768, 32767);
    Integer::Range int32_t_range(-2147483648, 2147483647);
    if (int8_t_range.Includes(range)) {
      return "int8_t";
    } else if (int16_t_range.Includes(range)) {
      return "int16_t";
    } else if (int32_t_range.Includes(range)) {
      return "int32_t";
    }
  } else {
    Integer::Range uint8_t_range(0, 255);
    Integer::Range uint16_t_range(0, 65535);
    Integer::Range uint32_t_range(0, 4294967295);
    if (uint8_t_range.Includes(range)) {
      return "uint8_t";
    } else if (uint16_t_range.Includes(range)) {
      return "uint16_t";
    } else if (uint32_t_range.Includes(range)) {
      return "uint32_t";
    }
  }
  return "int64_t";
}
}  // namespace

TypeNameGenerator::TypeNameGenerator(const Type* type)
    : prefer_reference_type_(true) {
  type->Apply(this);
}

TypeNameGenerator::~TypeNameGenerator() {
}

std::string TypeNameGenerator::result() const {
  return os_.str();
}

void TypeNameGenerator::GenerateCodeForBoolean(const Boolean* boolean) {
  os_ << "bool";
}

void TypeNameGenerator::GenerateCodeForInteger(const Integer* integer) {
  os_ << StdIntTypeFromRagne(integer->range());
}

void TypeNameGenerator::GenerateCodeForFloat(const Float* flt) {
  os_ << "double";
}

void TypeNameGenerator::GenerateCodeForString(const String* string) {
  os_ << (prefer_reference_type_ ? "const std::string&" : "std::string");
}

void TypeNameGenerator::GenerateCodeForEnum(const Enum* enm) {
  os_ << enm->name();
}

void TypeNameGenerator::GenerateCodeForArray(const Array* array) {
  const char* vect_decl_begin =
      prefer_reference_type_ ? "const std::vector<" : "std::vector<";
  const char* vect_decl_end = prefer_reference_type_ ? ">&" : ">";
  // Vector can not contain references
  prefer_reference_type_ = false;
  os_ << vect_decl_begin;
  array->type()->Apply(this);
  os_ << vect_decl_end;
}

void TypeNameGenerator::GenerateCodeForMap(const Map* map) {
  const char* map_decl_begin =
      prefer_reference_type_ ?
          "const std::map<std::string, " : "std::map<std::string, ";
  const char* map_decl_end = prefer_reference_type_ ? ">&" : ">";
  // Map can not contain references too
  prefer_reference_type_ = false;
  os_ << map_decl_begin;
  map->type()->Apply(this);
  os_ << map_decl_end;
}

void TypeNameGenerator::GenerateCodeForStruct(const Struct* strct) {
  const char* struct_decl_begin = prefer_reference_type_ ? "const " : "";
  const char* struct_decl_end = prefer_reference_type_ ? "&" : "";
  os_ << struct_decl_begin << strct->name() << struct_decl_end;
}

void TypeNameGenerator::GenerateCodeForTypedef(const Typedef* tdef) {
  const char* typedef_decl_begin = prefer_reference_type_ ? "const " : "";
  const char* typedef_decl_end = prefer_reference_type_ ? "&" : "";
  os_ << typedef_decl_begin << tdef->name() << typedef_decl_end;
}

RpcTypeNameGenerator::RpcTypeNameGenerator(const Type* type, Availability availability)
    : skip_availaiblity_specifier_(availability == kUnspecified),
      mandatory_(availability == kMandatory) {
  if (!skip_availaiblity_specifier_) {
    // Arrays, map and typedefs of arrays and maps doesn't need to be marked as
    // optional or mandatory because their minimal size indicates whether
    // container contents is optional
    skip_availaiblity_specifier_ = TypeProperties(type).is_container();
  }
  type->Apply(this);
}

RpcTypeNameGenerator::~RpcTypeNameGenerator() {
}

std::string RpcTypeNameGenerator::result() const {
  return os_.str();
}

void RpcTypeNameGenerator::GenerateCodeForBoolean(const Boolean* boolean) {
  if (MaybeWrapWithAvailabilitySpecifier(boolean)) {
  } else {
    os_ << "Boolean";
  }
}

void RpcTypeNameGenerator::GenerateCodeForInteger(const Integer* integer) {
  if (!MaybeWrapWithAvailabilitySpecifier(integer)) {
    const char* int_type = StdIntTypeFromRagne(integer->range());
    strmfmt(os_, "Integer<{0}, {1}, {2}>", int_type, integer->range().min(),
            integer->range().max());
  }
}

void RpcTypeNameGenerator::GenerateCodeForFloat(const Float* flt) {
  if (!MaybeWrapWithAvailabilitySpecifier(flt)) {
    const Fraction& minval = flt->range().min_fract();
    const Fraction& maxval = flt->range().max_fract();
    strmfmt(os_, "Float<{0}, {1}", minval.numer(), maxval.numer());
    if (minval.denumer() == 1 && maxval.denumer() == 1) {
      os_ << ">";
    } else {
      strmfmt(os_, ", {0}, {1}>", minval.denumer(), maxval.denumer());
    }
  }
}

void RpcTypeNameGenerator::GenerateCodeForString(const String* string) {
  if (!MaybeWrapWithAvailabilitySpecifier(string)) {
    strmfmt(os_, "String<{0}>", string->max_length());
  }
}

void RpcTypeNameGenerator::GenerateCodeForEnum(const Enum* enm) {
  if (!MaybeWrapWithAvailabilitySpecifier(enm)) {
    strmfmt(os_, "Enum<{0}>", enm->name());
  }
}

void RpcTypeNameGenerator::GenerateCodeForArray(const Array* array) {
  os_ << "Array    < ";
  array->type()->Apply(this);
  strmfmt(os_, ", {0}, {1} >", array->range().min(), array->range().max());
}

void RpcTypeNameGenerator::GenerateCodeForMap(const Map* map) {
  os_ << "Map      < ";
  map->type()->Apply(this);
  strmfmt(os_, ", {0}, {1} >", map->range().min(), map->range().max());
}

void RpcTypeNameGenerator::GenerateCodeForStruct(const Struct* strct) {
  if (!MaybeWrapWithAvailabilitySpecifier(strct)) {
    os_ << strct->name();
  }
}

void RpcTypeNameGenerator::GenerateCodeForTypedef(const Typedef* tdef) {
  if (!MaybeWrapWithAvailabilitySpecifier(tdef)) {
    os_ << tdef->name();
  }
}

bool RpcTypeNameGenerator::MaybeWrapWithAvailabilitySpecifier(const Type* type) {
  if (skip_availaiblity_specifier_) {
    return false;
  } else {
    skip_availaiblity_specifier_ = true;
    os_ << (mandatory_ ? "Mandatory< " : "Optional < ");
    type->Apply(this);
    os_ << " >";
    return true;
  }
}

TypeProperties::TypeProperties(const Type* type)
  : container_(false) {
  type->Apply(this);
}

bool TypeProperties::is_container() const {
  return container_;
}

void TypeProperties::GenerateCodeForBoolean(const Boolean* boolean) {
}

void TypeProperties::GenerateCodeForInteger(const Integer* integer) {
}

void TypeProperties::GenerateCodeForFloat(const Float* flt) {
}

void TypeProperties::GenerateCodeForString(const String* string) {
}

void TypeProperties::GenerateCodeForEnum(const Enum* enm) {
}

void TypeProperties::GenerateCodeForArray(const Array* array) {
  container_ = true;
}

void TypeProperties::GenerateCodeForMap(const Map* map) {
  container_ = true;
}

void TypeProperties::GenerateCodeForStruct(const Struct* strct) {
}

void TypeProperties::GenerateCodeForTypedef(const Typedef* tdef) {
  tdef->type()->Apply(this);
}

}  // namespace codegen

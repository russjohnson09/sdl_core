/**
 * @file MOBILE_API.h
 * @brief Generated class MOBILE_API header file.
 *
 * This class is a part of SmartObjects solution. It provides
 * factory functionallity which allows client to use SmartSchemas
 * in accordance with definitions from MOBILE_API.xml file
 */
// Copyright (c) 2013, Ford Motor Company
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following
// disclaimer in the documentation and/or other materials provided with the
// distribution.
//
// Neither the name of the Ford Motor Company nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef __CSMARTFACTORY_MOBILE_API_0a67cd8faa4511e9b65f60f81dc21830_HPP__
#define __CSMARTFACTORY_MOBILE_API_0a67cd8faa4511e9b65f60f81dc21830_HPP__

#include "formatters/CSmartFactory.h"
#include "smart_objects/smart_schema.h"
#include "smart_objects/schema_item.h"
#include "MOBILE_API.h"

namespace mobile_apis {


/**
 * @brief Class MOBILE_API.
 *
 * Params:
 *     date - 2019-03-19
 *     minVersion - 1.0
 *     version - 6.0.0
 */
class MOBILE_API : public ns_smart_device_link::ns_json_handler::CSmartFactory<FunctionID::eType, messageType::eType, StructIdentifiers::eType> {
 public:
  /**
   * @brief Constructor.
   */
  MOBILE_API();

 protected:
  /**
   * @brief Type that maps of struct IDs to schema items.
   */
  typedef std::map<const StructIdentifiers::eType, std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> > TStructsSchemaItems;

  /**
   * @brief Helper that allows to make reference to struct
   *
   * @param struct_schema_items Struct schema items.
   * @param struct_id ID of structure to provide.
   *
   * @return std::shared_ptr of strucute
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> ProvideObjectSchemaItemForStruct(
        const TStructsSchemaItems &struct_schema_items,
        const StructIdentifiers::eType struct_id);

  /**
   * @brief Initializes all struct schemes.
   */
  void InitStructSchemes(TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Initializes all function schemes.
   *
   * @param struct_schema_items Struct schema items.
   * @param function_id_items Set of all elements of FunctionID enum.
   * @param message_type_items Set of all elements of messageType enum.
   */
  void InitFunctionSchemes(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RegisterAppInterface.
   *
   * 
   *             Establishes an interface with a mobile application.
   *             Before registerAppInterface no other commands will be accepted/executed.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RegisterAppInterfaceID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RegisterAppInterface.
   *
   * The response to registerAppInterface
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RegisterAppInterfaceID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnregisterAppInterface.
   *
   * 
   *             Closes an interface from a mobile application.
   *             After unregisterAppInterface, no commands other than registerAppInterface will be accepted/executed.
   *             Will fail, if no registerAppInterface was completed successfully before.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnregisterAppInterfaceID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnregisterAppInterface.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnregisterAppInterfaceID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetGlobalProperties.
   *
   * Allows setting global properties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetGlobalPropertiesID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetGlobalPropertiesID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ResetGlobalProperties.
   *
   * Allows resetting global properties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ResetGlobalPropertiesID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ResetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ResetGlobalPropertiesID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddCommand.
   *
   * 
   *             Adds a command to the in application menu.
   *             Either menuParams or vrCommands must be provided.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddCommandID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddCommandID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteCommand.
   *
   * Deletes all commands from the in-application menu with the specified command id.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteCommandID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteCommandID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddSubMenu.
   *
   * Adds a sub menu to the in-application menu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddSubMenuID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddSubMenuID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteSubMenu.
   *
   * Deletes a submenu from the in-application menu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteSubMenuID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteSubMenuID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function CreateInteractionChoiceSet.
   *
   * creates interaction choice set to be used later by performInteraction
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CreateInteractionChoiceSetID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function CreateInteractionChoiceSet.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CreateInteractionChoiceSetID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformInteraction.
   *
   * Triggers an interaction (e.g. "Permit GPS?" - Yes, no, Always Allow).
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformInteractionID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformInteractionID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteInteractionChoiceSet.
   *
   * Deletes interaction choice set that has been created with "CreateInteractionChoiceSet".
   * The interaction may only be deleted when not currently in use by a "performInteraction".
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteInteractionChoiceSetID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteInteractionChoiceSet.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteInteractionChoiceSetID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Alert.
   *
   * Shows an alert which typically consists of text-to-speech message and text on the display. At least either alertText1, alertText2 or TTSChunks need to be provided.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AlertID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Alert.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AlertID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Show.
   *
   * Updates the persistent display. Supported fields depend on display capabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ShowID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Show.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ShowID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Speak.
   *
   * Speaks a text.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SpeakID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Speak.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SpeakID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetMediaClockTimer.
   *
   * Sets the initial media clock value and automatic update method.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetMediaClockTimerID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetMediaClockTimer.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetMediaClockTimerID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformAudioPassThru.
   *
   * Starts audio pass thru session 
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformAudioPassThruID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformAudioPassThru.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformAudioPassThruID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EndAudioPassThru.
   *
   * When this request is invoked, the audio capture stops.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EndAudioPassThruID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EndAudioPassThru.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EndAudioPassThruID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeButton.
   *
   * 
   *             Subscribes to built-in HMI buttons.
   *             The application will be notified by the OnButtonEvent and OnButtonPress.
   *             To unsubscribe the notifications, use unsubscribeButton.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeButtonID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeButton.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeButtonID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeButton.
   *
   * Unsubscribes from built-in HMI buttons.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeButtonID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeButton.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeButtonID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeVehicleData.
   *
   * 
   *             Subscribes for specific published data items.
   *             The data will be only sent if it has changed.
   *             The application will be notified by the onVehicleData notification whenever new data is available.
   *             To unsubscribe the notifications, use unsubscribe with the same subscriptionType.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeVehicleDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeVehicleDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeVehicleData.
   *
   * This function is used to unsubscribe the notifications from the subscribeVehicleData function.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeVehicleDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeVehicleDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetVehicleData.
   *
   * Non periodic vehicle data read request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetVehicleDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetVehicleDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ReadDID.
   *
   * Non periodic vehicle data read request
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ReadDIDID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ReadDID.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ReadDIDID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetDTCs.
   *
   * Vehicle module diagnostic trouble code request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetDTCsID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetDTCs.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetDTCsID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DiagnosticMessage.
   *
   * Non periodic vehicle diagnostic request
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DiagnosticMessageID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DiagnosticMessage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DiagnosticMessageID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ScrollableMessage.
   *
   * Creates a full screen overlay containing a large block of formatted text that can be scrolled with up to 8 SoftButtons defined
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ScrollableMessageID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ScrollableMessage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ScrollableMessageID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Slider.
   *
   * Creates a full screen or pop-up overlay (depending on platform) with a single user controlled slider.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SliderID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Slider.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SliderID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ShowConstantTBT.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ShowConstantTBTID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ShowConstantTBT.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ShowConstantTBTID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AlertManeuver.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AlertManeuverID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AlertManeuver.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AlertManeuverID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UpdateTurnList.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UpdateTurnListID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UpdateTurnList.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UpdateTurnListID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ChangeRegistration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ChangeRegistrationID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ChangeRegistration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ChangeRegistrationID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GenericResponse.
   *
   * 
   *             Generic Response is sent, when the name of a received msg cannot be retrieved. Only used in case of an error.
   *             Currently, only resultCode INVALID_DATA is used.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GenericResponseID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PutFile.
   *
   * 
   *             Used to push a binary data onto the module from a mobile device, such as icons and album art
   *             Not supported on first generation of SDL enabled modules.
   *             Binary data is in binary part of hybrid msg.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PutFileID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PutFile.
   *
   * Response is sent, when the file data was copied (success case). Or when an error occurred.
   * Not supported on first generation SDL enabled vehicles. 
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PutFileID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetFile.
   *
   * This request is sent to the module to retrieve a file
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetFileID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetFile.
   *
   * This response includes the data that is requested from the specific service
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetFileID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteFile.
   *
   * 
   *             Used to delete a file resident on the module in the app's local cache.
   *             Not supported on first generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteFileID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteFile.
   *
   * 
   *             Response is sent, when the file data was deleted (success case). Or when an error occurred.
   *             Not supported on First generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteFileID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ListFiles.
   *
   * 
   *             Requests the current list of resident filenames for the registered app.
   *             Not supported on first generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ListFilesID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ListFiles.
   *
   * 
   *             Returns the current list of resident filenames for the registered app along with the current space available
   *             Not supported on First generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ListFilesID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetAppIcon.
   *
   * 
   *             Used to set existing local file on the module as the app's icon
   *             Not supported on first generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetAppIconID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetAppIcon.
   *
   * 
   *             Response is sent, when the file data was copied (success case). Or when an error occurred.
   *             Not supported on First generation SDL enabled vehicles.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetAppIconID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetDisplayLayout.
   *
   * 
   *             Used to set an alternate display layout.
   *             If not sent, default screen for given platform will be shown
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetDisplayLayoutID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetDisplayLayout.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetDisplayLayoutID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SystemRequest.
   *
   * An asynchronous request from the device; binary data can be included in hybrid part of message for some requests (such as HTTP, Proprietary, or Authentication requests)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SystemRequestID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SystemRequest.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SystemRequestID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SendLocation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SendLocationID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SendLocation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SendLocationID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DialNumber.
   *
   * Dials a phone number and switches to phone application.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DialNumberID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DialNumber.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DialNumberID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ButtonPress.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ButtonPressID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ButtonPress.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ButtonPressID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetInteriorVehicleDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetInteriorVehicleDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetInteriorVehicleDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetInteriorVehicleData.
   *
   * Used to set the values of one remote control module 
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetInteriorVehicleDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeWayPoints.
   *
   * To subscribe in getting changes for Waypoints/destinations
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeWayPointsID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeWayPointsID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetWayPoints.
   *
   * Request for getting waypoint/destination data.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetWayPointsID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetWayPointsID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeWayPoints.
   *
   * Request to unsubscribe from WayPoints and Destination
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeWayPointsID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeWayPointsID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetSystemCapability.
   *
   * Request for expanded information about a supported system/HMI capability
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetSystemCapabilityID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetSystemCapability.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetSystemCapabilityID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SendHapticData.
   *
   * Send the spatial data gathered from SDLCarWindow or VirtualDisplayEncoder to the HMI. This data will be utilized by the HMI to determine how and when haptic events should occur
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SendHapticDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SendHapticData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SendHapticDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetCloudAppProperties.
   *
   * 
   *             RPC used to enable/disable a cloud application and set its cloud-related policy properties
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetCloudAppPropertiesID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetCloudAppProperties.
   *
   * The response to SetCloudAppProperties
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetCloudAppPropertiesID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetCloudAppProperties.
   *
   * 
   *             RPC used to get the current properties of a cloud application
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetCloudAppPropertiesID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetCloudAppProperties.
   *
   * The response to GetCloudAppProperties
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetCloudAppPropertiesID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PublishAppService.
   *
   * Registers a service offered by this app on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PublishAppServiceID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PublishAppService.
   *
   * Response to the request to register a service offered by this app on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PublishAppServiceID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetAppServiceData.
   *
   *  This request asks the module for current data related to the specific service. It also includes an option to subscribe to that service for future updates
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetAppServiceDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GetAppServiceData.
   *
   *  This response includes the data that was requested from the specific service
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GetAppServiceDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformAppServiceInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformAppServiceInteractionID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformAppServiceInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformAppServiceInteractionID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function CloseApplication.
   *
   * Request from the application to exit the foreground and enter HMI_NONE.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CloseApplicationID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function CloseApplication.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CloseApplicationID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnHMIStatus.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnHMIStatusID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnAppInterfaceUnregistered.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnAppInterfaceUnregisteredID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnButtonEvent.
   *
   * Notifies application of UP/DOWN events for buttons to which the application is subscribed.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnButtonEventID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnButtonPress.
   *
   * Notifies application of LONG/SHORT press events for buttons to which the application is subscribed.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnButtonPressID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnVehicleData.
   *
   * Callback for the periodic and non periodic vehicle data read function.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnVehicleDataID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnCommandID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnTBTClientState.
   *
   * Provides applications with notifications specific to the current TBT client status on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnTBTClientStateID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnDriverDistraction.
   *
   * Provides driver distraction state to mobile applications
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnDriverDistractionID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnPermissionsChange.
   *
   * Provides update to app of which policy-table-enabled functions are available
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnPermissionsChangeID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnAudioPassThru.
   *
   * Binary data is in binary part of hybrid msg
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnAudioPassThruID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnLanguageChange.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnLanguageChangeID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnKeyboardInput.
   *
   * On-screen keyboard event.
   * Can be full string or individual keypresses depending on keyboard mode.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnKeyboardInputID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnTouchEvent.
   *
   * Notifies about touch events on the screen's prescribed area
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnTouchEventID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnSystemRequest.
   *
   * 
   *             An asynchronous request from the system for specific data from the device or the cloud or response to a request from the device or cloud
   *             Binary data can be included in hybrid part of message for some requests (such as Authentication request responses)
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnSystemRequestID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnHashChange.
   *
   * 
   *             Notification containing an updated hashID which can be used over connection cycles (i.e. loss of connection, ignition cycles, etc.).
   *             Sent after initial registration and subsequently after any change in the calculated hash of all persisted app data.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnHashChangeID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnWayPointChange.
   *
   * Notification which provides the entire LocationDetails when there is a change to any waypoints or destination.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnWayPointChangeID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnInteriorVehicleDataID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnRCStatus.
   *
   * Issued by SDL to notify the application about remote control status change on SDL
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnRCStatusID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnAppServiceData.
   *
   * This notification includes the data that is updated from the specific service
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnAppServiceDataID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnSystemCapabilityUpdated.
   *
   * A notification to inform the connected device that a specific system capability has changed.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnSystemCapabilityUpdatedID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EncodedSyncPData.
   *
   * 
   *             Allows encoded data in the form of SyncP packets to be sent to the SYNC module.
   *             Legacy / v1 Protocol implementation; use SyncPData instead.
   *             *** DEPRECATED ***
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EncodedSyncPDataID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EncodedSyncPData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EncodedSyncPDataID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnEncodedSyncPData.
   *
   * 
   *             Callback including encoded data of any SyncP packets that SYNC needs to send back to the mobile device.
   *             Legacy / v1 Protocol implementation; responds to EncodedSyncPData.
   *             *** DEPRECATED ***
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnEncodedSyncPDataID_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema item for structure AudioPassThruCapabilities.
   *
   * 
   *             Describes different audio type configurations for PerformAudioPassThru.
   *             e.g. {8kHz,8-bit,PCM}
   *             The audio is recorded in monaural.
   *         
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AudioPassThruCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure CloudAppProperties.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_CloudAppProperties(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Image.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Image(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SoftButton.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SoftButton(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Choice.
   *
   * A choice is an option given to the user, which can be selected either by menu, or through voice recognition system.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Choice(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure VrHelpItem.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_VrHelpItem(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SyncMsgVersion.
   *
   * Specifies the version number of the SmartDeviceLink protocol that is supported by the mobile application
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SyncMsgVersion(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure FuelRange.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_FuelRange(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SingleTireStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SingleTireStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure BeltStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_BeltStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure BodyInformation.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_BodyInformation(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure DeviceStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DeviceStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HeadLampStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HeadLampStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppInfo.
   *
   * Contains detailed information about the registered application.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ECallInfo.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ECallInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AirbagStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AirbagStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure EmergencyEvent.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_EmergencyEvent(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ClusterModeStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ClusterModeStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MyKey.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MyKey(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TireStatus.
   *
   * The status and pressure of the tires.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TireStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure GPSData.
   *
   * Struct with the GPS data.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_GPSData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure VehicleDataResult.
   *
   * Individual published data request result
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_VehicleDataResult(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure DIDResult.
   *
   * Individual requested DID result and data
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DIDResult(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure StartTime.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_StartTime(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TextField.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TextField(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ImageResolution.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ImageResolution(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ImageField.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ImageField(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TouchCoord.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TouchCoord(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TouchEvent.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TouchEvent(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TouchEventCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TouchEventCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ScreenParams.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ScreenParams(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HMIPermissions.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HMIPermissions(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ParameterPermissions.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ParameterPermissions(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure PermissionItem.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_PermissionItem(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure DisplayCapabilities.
   *
   * Contains information about the display capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DisplayCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ButtonCapabilities.
   *
   * Contains information about a button's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ButtonCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SoftButtonCapabilities.
   *
   * Contains information about a SoftButton's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SoftButtonCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure PresetBankCapabilities.
   *
   * Contains information about on-screen preset capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_PresetBankCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HMICapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HMICapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MenuParams.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MenuParams(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TTSChunk.
   *
   * A TTS chunk, that consists of text/phonemes to speak or the name of a file to play, and a TTS type (like text or SAPI)
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TTSChunk(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Turn.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Turn(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure VehicleType.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_VehicleType(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure KeyboardProperties.
   *
   * Configuration of on-screen keyboard (if available).
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_KeyboardProperties(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure DeviceInfo.
   *
   * Various information about connecting device.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DeviceInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure DateTime.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DateTime(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Coordinate.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Coordinate(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure OASISAddress.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_OASISAddress(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure LocationDetails.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_LocationDetails(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure NavigationCapability.
   *
   * Extended capabilities for an onboard navigation system
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_NavigationCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure PhoneCapability.
   *
   * Extended capabilities of the module's phone feature
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_PhoneCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure VideoStreamingFormat.
   *
   * Video streaming formats and their specifications.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_VideoStreamingFormat(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure VideoStreamingCapability.
   *
   * Contains information about this system's video streaming capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_VideoStreamingCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure RGBColor.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_RGBColor(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TemplateColorScheme.
   *
   * 
   *             A color scheme for all display layout templates.
   *         
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TemplateColorScheme(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MassageModeData.
   *
   * Specify the mode of a massage zone.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MassageModeData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MassageCushionFirmness.
   *
   * The intensity or firmness of a cushion.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MassageCushionFirmness(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SeatMemoryAction.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SeatMemoryAction(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SeatControlData.
   *
   * Seat control data corresponds to "SEAT" ModuleType. 
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SeatControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SeatControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SeatControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Temperature.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Temperature(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure RdsData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_RdsData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure StationIDNumber.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_StationIDNumber(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SisData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SisData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure RadioControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_RadioControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ClimateControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ClimateControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure RadioControlCapabilities.
   *
   * Contains information about a radio control module's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_RadioControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ClimateControlCapabilities.
   *
   * Contains information about a climate control module's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ClimateControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure EqualizerSettings.
   *
   * Defines the each Equalizer channel settings.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_EqualizerSettings(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AudioControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AudioControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AudioControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AudioControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure LightCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_LightCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure LightControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_LightControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure LightState.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_LightState(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure LightControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_LightControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HMISettingsControlData.
   *
   * Corresponds to "HMI_SETTINGS" ModuleType
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HMISettingsControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HMISettingsControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HMISettingsControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ModuleData.
   *
   * The moduleType indicates which type of data should be changed and identifies which data object exists in this struct. For example, if the moduleType is CLIMATE then a "climateControlData" should exist
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ModuleData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure RemoteControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_RemoteControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MetadataTags.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MetadataTags(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Rectangle.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Rectangle(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure HapticRect.
   *
   * Defines haptic data for each user control object for video streaming application
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_HapticRect(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MediaServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MediaServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MediaServiceData.
   *
   * This data is related to what a media service should provide
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MediaServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure WeatherServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_WeatherServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure WeatherAlert.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_WeatherAlert(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure WeatherData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_WeatherData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure WeatherServiceData.
   *
   *  This data is related to what a weather service would provide
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_WeatherServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure NavigationServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_NavigationServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure NavigationInstruction.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_NavigationInstruction(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure NavigationServiceData.
   *
   *  This data is related to what a navigation service would provide.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_NavigationServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppServiceManifest.
   *
   *  This manifest contains all the information necessary for the service to be published, activated, and consumers able to interact with it 
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppServiceRecord.
   *
   *  This is the record of an app service publisher that the module has. It should contain the most up to date information including the service's active state
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppServiceRecord(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppServiceData.
   *
   *  Contains all the current data of the app service. The serviceType will link to which of the service data objects are included in this object (e.g. if the service type is MEDIA, the mediaServiceData param should be included).
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppServiceCapability.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppServiceCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure AppServicesCapabilities.
   *
   * Capabilities of app services including what service types are supported and the current state of services.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_AppServicesCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SystemCapability.
   *
   * The systemCapabilityType identifies which data object exists in this struct. For example, if the SystemCapability Type is NAVIGATION then a "navigationCapability" should exist
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SystemCapability(
      const TStructsSchemaItems &struct_schema_items);
};

} // mobile_apis

#endif //__CSMARTFACTORY_MOBILE_API_0a67cd8faa4511e9b65f60f81dc21830_HPP__


/**
 * @file v4_protocol_v1_2_no_extra.h
 * @brief Generated class v4_protocol_v1_2_no_extra header file.
 *
 * This class is a part of SmartObjects solution. It provides
 * factory functionallity which allows client to use SmartSchemas
 * in accordance with definitions from v4_protocol_v1_2_no_extra.xml file
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

#ifndef __CSMARTFACTORY_V4_PROTOCOL_V1_2_NO_EXTRA_23040e85aa4511e9ab9660f81dc21830_HPP__
#define __CSMARTFACTORY_V4_PROTOCOL_V1_2_NO_EXTRA_23040e85aa4511e9ab9660f81dc21830_HPP__

#include "formatters/CSmartFactory.h"
#include "smart_objects/smart_schema.h"
#include "smart_objects/schema_item.h"
#include "v4_protocol_v1_2_no_extra.h"

namespace ns_smart_device_link_rpc {
namespace V1 {


/**
 * @brief Class v4_protocol_v1_2_no_extra.
 *
 * Params:
 *     date - 2011-05-17
 *     version - 1.2
 */
class v4_protocol_v1_2_no_extra : public ns_smart_device_link::ns_json_handler::CSmartFactory<FunctionID::eType, messageType::eType, StructIdentifiers::eType> {
 public:
  /**
   * @brief Constructor.
   */
  v4_protocol_v1_2_no_extra();

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
   * Establishes an interface with a mobile application.
   * Before registerAppInterface no other commands will be accepted/executed.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RegisterAppInterface_request(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RegisterAppInterface_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnregisterAppInterface.
   *
   * Closes an interface from a mobile application.
   * After unregisterAppInterface, no commands other than registerAppInterface will be accepted/executed.
   * Will fail, if no registerAppInterface was completed successfully before.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnregisterAppInterface_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnregisterAppInterface.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnregisterAppInterface_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetGlobalProperties.
   *
   * Allows setting global properties.
   *
   * @note Do we want to add VR threshold params?
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetGlobalProperties_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetGlobalProperties_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ResetGlobalProperties_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function ResetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_ResetGlobalProperties_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddCommand.
   *
   * Adds a command to the in application menu.
   * Either menuParams or vrCommands must be provided.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddCommand_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteCommand_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddSubMenu_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AddSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AddSubMenu_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteSubMenu_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteSubMenu_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CreateInteractionChoiceSet_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function CreateInteractionChoiceSet.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_CreateInteractionChoiceSet_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformInteraction_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function PerformInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_PerformInteraction_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteInteractionChoiceSet_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function DeleteInteractionChoiceSet.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_DeleteInteractionChoiceSet_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Alert_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Alert.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Alert_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Show_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Show.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Show_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Speak_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Speak.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Speak_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetMediaClockTimer_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SetMediaClockTimer.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SetMediaClockTimer_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EncodedSyncPData.
   *
   * Allows encoded data in the form of SyncP packets to be sent to the SYNC module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EncodedSyncPData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function EncodedSyncPData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_EncodedSyncPData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeButton.
   *
   * Subscribes to built-in HMI buttons.
   * The application will be notified by the OnButtonEvent and OnButtonPress.
   * To unsubscribe the notifications, use unsubscribeButton.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeButton_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SubscribeButton.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SubscribeButton_response(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeButton_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UnsubscribeButton.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UnsubscribeButton_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function GenericResponse.
   *
   * Generic Response is sent, when the name of a received msg cannot be retrieved. Only used in case of an error.
   * Currently, only resultCode INVALID_DATA is used.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_GenericResponse_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnHMIStatus.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnHMIStatus_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnAppInterfaceUnregistered.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnAppInterfaceUnregistered_notification(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnButtonEvent_notification(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnButtonPress_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnCommand_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function OnEncodedSyncPData.
   *
   * Callback including encoded data of any SyncP packets that SYNC needs to send back to the mobile device.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnEncodedSyncPData_notification(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnTBTClientState_notification(
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
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_OnDriverDistraction_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema item for structure Choice.
   *
   * A choice is an option given to the user, which can be selected either by menu, or through voice recognition system.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Choice(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure SyncMsgVersion.
   *
   * Specifies the version number of the SYNC V4 protocol, that is supported by the mobile application
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_SyncMsgVersion(
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
   * @brief Method that generates schema item for structure DisplayCapabilities.
   *
   * Contains information about the display capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_DisplayCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure ButtonCapabilities.
   *
   * Contains information about a buttons capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_ButtonCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure MenuParams.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_MenuParams(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure TTSChunk.
   *
   * A TTS chunk, that consists of the text/phonemes to speak and the type (like text or SAPI)
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_TTSChunk(
      const TStructsSchemaItems &struct_schema_items);
};

} // ns_smart_device_link_rpc
} // V1

#endif //__CSMARTFACTORY_V4_PROTOCOL_V1_2_NO_EXTRA_23040e85aa4511e9ab9660f81dc21830_HPP__


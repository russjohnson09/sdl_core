/**
 * @file HMI_API.h
 * @brief Generated class HMI_API header file.
 *
 * This class is a part of SmartObjects solution. It provides
 * factory functionallity which allows client to use SmartSchemas
 * in accordance with definitions from HMI_API.xml file
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

#ifndef __CSMARTFACTORY_HMI_API_Ed437938aa4411e9a05360f81dc21830_HPP__
#define __CSMARTFACTORY_HMI_API_Ed437938aa4411e9a05360f81dc21830_HPP__

#include "formatters/CSmartFactory.h"
#include "smart_objects/smart_schema.h"
#include "smart_objects/schema_item.h"
#include "HMI_API.h"

namespace hmi_apis {


/**
 * @brief Class HMI_API.
 *
 * Params:
 *     VR_date - 2017-04-27
 *     AppService_version - 1.0.0
 *     BasicCommunication_date - 2019-03-18
 *     UI_version - 1.3.0
 *     Navigation_version - 1.5.0
 *     VehicleInfo_version - 2.1.0
 *     AppService_description - Interface used for interacting with app services as a producer or consumer
 *     Buttons_version - 1.3.0
 *     TTS_description - RPCs for communication between TTS and SDL.
 *     RC_version - 2.0.0
 *     TTS_date - 2018-09-05
 *     VehicleInfo_date - 2019-03-18
 *     Buttons_date - 2017-07-18
 *     UI_date - 2018-09-05
 *     TTS_version - 2.0.0
 *     RC_date - 2018-09-05
 *     BasicCommunication_version - 2.1.0
 *     name - SmartDeviceLink HMI API
 *     SDL_version - 1.2.0
 *     AppService_date - 2019-03-18
 *     SDL_date - 2018-09-05
 *     Common_version - 2.1.0
 *     Common_date - 2019-03-18
 *     Navigation_date - 2017-08-15
 *     VR_version - 1.1.0
 */
class HMI_API : public ns_smart_device_link::ns_json_handler::CSmartFactory<FunctionID::eType, messageType::eType, StructIdentifiers::eType> {
 public:
  /**
   * @brief Constructor.
   */
  HMI_API();

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
   * @brief Method that generates schema for function Buttons_GetCapabilities.
   *
   * Method is invoked at system start-up. SDL requests the information about all supported hardware buttons and their capabilities
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_GetCapabilities_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_GetCapabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_GetCapabilities_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_ButtonPress.
   *
   * Method is invoked when the application tries to press a button
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_ButtonPress_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_ButtonPress.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_ButtonPress_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_OnButtonEvent.
   *
   * HU system must notify about every UP/DOWN event for buttons
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_OnButtonEvent_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_OnButtonPress.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_OnButtonPress_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Buttons_OnButtonSubscription.
   *
   * 
   *         Sender: SDL->HMI. Purpose: to notify about button subscription state is changed for the named application
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Buttons_OnButtonSubscription_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetSystemTime.
   *
   * Request from SDL to HMI to obtain current UTC time.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetSystemTime_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetSystemTime.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetSystemTime_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSystemTimeReady.
   *
   * HMI must notify SDL about readiness to provide system time.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSystemTimeReady_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnReady.
   *
   * HMI must notify SDL about its readiness to start communication. In fact, this has to be the first message between SDL and HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnReady_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnStartDeviceDiscovery.
   *
   * Initiated by HMI user for getting the list of connected devices.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnStartDeviceDiscovery_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnUpdateDeviceList.
   *
   * Notification from HMI to SDL sent when HMI requires update of device list (i.e. when user clicks 'Change Device' button)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnUpdateDeviceList_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnResumeAudioSource.
   *
   * This method must be invoked by SDL to update audio state.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnResumeAudioSource_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSDLPersistenceComplete.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSDLPersistenceComplete_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_UpdateAppList.
   *
   * Issued by SDL to notify HMI about new applications registered.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_UpdateAppList_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_UpdateAppList.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_UpdateAppList_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_UpdateDeviceList.
   *
   * Request from SmartDeviceLink to HMI to change device list.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_UpdateDeviceList_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_UpdateDeviceList.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_UpdateDeviceList_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnFileRemoved.
   *
   * Notifies HMI in case some application file has been removed
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnFileRemoved_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnDeviceChosen.
   *
   * Notification must be initiated by HMI on user selecting device in the list of devices.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnDeviceChosen_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnFindApplications.
   *
   * This method must be invoked by HMI to get list of registered apps.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnFindApplications_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_ActivateApp.
   *
   * Request from SDL to HMI to bring specified application to front on UI e.g make it HMI status 'FULL'.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_ActivateApp_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_ActivateApp.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_ActivateApp_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_CloseApplication.
   *
   * Request from the application to exit the foreground.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_CloseApplication_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_CloseApplication.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_CloseApplication_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnAppActivated.
   *
   * Must be sent by HU system when the user clicks on app in the list of registered apps or on soft button with 'STEAL_FOCUS' action.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnAppActivated_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnAppDeactivated.
   *
   * Must be sent by HU system when the user switches to any functionality which is not other mobile application.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnAppDeactivated_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnAppRegistered.
   *
   * Issued by SDL to notify HMI about new application registered.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnAppRegistered_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnAppUnregistered.
   *
   * 
   *         Issued by SDL to notify HMI about application unregistered.
   *         Application then to be removed from application list; all data connected with application has to be cleared up.
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnAppUnregistered_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnExitApplication.
   *
   * Must be sent by HMI when the User chooses to exit the application..
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnExitApplication_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnExitAllApplications.
   *
   * Sent by HMI to SDL to close all registered applications.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnExitAllApplications_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnAwakeSDL.
   *
   * 
   *             Sender: HMI->SDL. Must be sent to return SDL to normal operation after 'Suspend' or 'LowVoltage' events
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnAwakeSDL_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_MixingAudioSupported.
   *
   * Request from SDL to HMI to find out if the last one supports mixing audio (i.e. recording TTS command and playing audio).
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_MixingAudioSupported_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_MixingAudioSupported.
   *
   * If no response received SDL supposes that mixing audio is not supported
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_MixingAudioSupported_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_DialNumber.
   *
   * Request from SDL to call a specific number.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_DialNumber_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_DialNumber.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_DialNumber_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSystemRequest.
   *
   * 
   *         An asynchronous request from the system for specific data from the device or the cloud or response to a request from the device or cloud
   *         Binary data can be included in hybrid part of message for some requests (such as Authentication request responses)
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSystemRequest_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_SystemRequest.
   *
   * An asynchronous request from the device; binary data can be included in hybrid part of message for some requests (such as Authentication requests)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_SystemRequest_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_SystemRequest.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_SystemRequest_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_PolicyUpdate.
   *
   * 
   *         From: SDL
   *         To: SYNCP Manager
   *         Asks SYNCP Manager to send given Policy Table snapshot to the backend
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_PolicyUpdate_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_PolicyUpdate.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_PolicyUpdate_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSDLClose.
   *
   * SDL must notify HMI about finish working application
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSDLClose_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnPutFile.
   *
   * 
   *         Notification that is sent to HMI when a mobile application uploads a file
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnPutFile_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetFilePath.
   *
   * This request is sent to retrieve a file path from the HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetFilePath_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetFilePath.
   *
   *  HMI handles the request internally and returns the file path with the response.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetFilePath_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetSystemInfo.
   *
   * Request from SDL to HMI to obtain information about head unit system.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetSystemInfo_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_GetSystemInfo.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_GetSystemInfo_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSystemInfoChanged.
   *
   * Issued by system to SDL to notify that some system param has changed. Currently applied for Sync Language.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSystemInfoChanged_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnIgnitionCycleOver.
   *
   * Notification from system to SDL to let it know that ignition cycle is over.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnIgnitionCycleOver_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_DecryptCertificate.
   *
   * Sender: SDL->HMI. Purpose: to decrypt the certificate received via the Updated Policy Table. 
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_DecryptCertificate_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_DecryptCertificate.
   *
   * SUCCESS - in case the certificate is decrypted and placed to the same file from request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_DecryptCertificate_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnEventChanged.
   *
   * Sender: HMI->SDL. When event is become active
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnEventChanged_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function BasicCommunication_OnSystemCapabilityUpdated.
   *
   * A notification to inform the HMI that a specific system capability has changed.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_BasicCommunication_OnSystemCapabilityUpdated_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_IsReady.
   *
   * Method is invoked at system startup. Response provides information about presence of VR module and its readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_Started.
   *
   * Must be initiated  by VR module to let SDL know that VR session has started.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_Started_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_Stopped.
   *
   * Must be initiated by VR module to let SDL know that VR session has stopped.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_Stopped_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_AddCommand.
   *
   * Request from SDL to add a command(string with associated id) to VR.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_AddCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_AddCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_AddCommand_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_DeleteCommand.
   *
   * Request from SDL to delete a command from VR.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_DeleteCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_DeleteCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_DeleteCommand_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_PerformInteraction.
   *
   * 
   *       Sets some properties for the application initiated request.
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_PerformInteraction_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_PerformInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_PerformInteraction_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_OnCommand.
   *
   * Notifies SDL about command trigerred via VR
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_OnCommand_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_ChangeRegistration.
   *
   * Request from SmartDeviceLink to HMI to change language of VR.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_ChangeRegistration_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_ChangeRegistration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_ChangeRegistration_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_OnLanguageChange.
   *
   * Notification from HMI to SmartDeviceLink about change of  language.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_OnLanguageChange_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetSupportedLanguages.
   *
   * Method is invoked at system start-up. Response must provide the information about VR supported languages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetSupportedLanguages_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetSupportedLanguages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetSupportedLanguages_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetLanguage.
   *
   * Request from SmartDeviceLink to HMI to get currently active  VR language
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetLanguage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetLanguage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetLanguage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetCapabilities.
   *
   * Method is invoked at system startup by SDL to request information about VR capabilities of HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetCapabilities_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VR_GetCapabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VR_GetCapabilities_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetCapabilities.
   *
   * Method is invoked at system start-up. SDL requests the information about all supported hardware and their capabilities
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetCapabilities_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetCapabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetCapabilities_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_Started.
   *
   * Must be initiated  by TTS module to let SDL know that TTS session has started.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_Started_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_Stopped.
   *
   * Must be initiated by TTS module to let SDL know that TTS session has stopped.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_Stopped_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_IsReady.
   *
   * Method is invoked at system start-up. Response must provide the information about presence of TTS module and its readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_Speak.
   *
   * RPC from SDL to TTS for speaking the text.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_Speak_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_Speak.
   *
   * Provides information about success of operation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_Speak_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_StopSpeaking.
   *
   * Initiated by SDL to stop speaking the text.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_StopSpeaking_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_StopSpeaking.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_StopSpeaking_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_ChangeRegistration.
   *
   * Request from SmartDeviceLink to HMI to change language of TTS.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_ChangeRegistration_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_ChangeRegistration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_ChangeRegistration_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_OnLanguageChange.
   *
   * Notification from HMI to SmartDeviceLink about change of  language.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_OnLanguageChange_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetSupportedLanguages.
   *
   * Method is invoked at system start-up by SDL. Response must provide the information about TTS supported languages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetSupportedLanguages_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetSupportedLanguages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetSupportedLanguages_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetLanguage.
   *
   * Request from SmartDeviceLink to HMI to get currently active  TTS language
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetLanguage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_GetLanguage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_GetLanguage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_SetGlobalProperties.
   *
   * Sets some properties for the application initiated request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_SetGlobalProperties_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_SetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_SetGlobalProperties_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function TTS_OnResetTimeout.
   *
   * 
   *       Sender: HMI->SDL. HMI must send this notification every 10 sec. in case the 'methodName'
   *       results long processing on HMI
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_TTS_OnResetTimeout_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Alert.
   *
   * Request from SDL to show an alert message on the display.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Alert_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Alert.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Alert_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Show.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Show_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Show.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Show_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_AddCommand.
   *
   * Request from SDL to add a command to the application menu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_AddCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_AddCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_AddCommand_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_DeleteCommand.
   *
   * Request from SDL to delete a command from the in-application menu with the specified command id.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_DeleteCommand_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_DeleteCommand.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_DeleteCommand_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_AddSubMenu.
   *
   * Request from SDL to add a sub menu to the in-application menu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_AddSubMenu_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_AddSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_AddSubMenu_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_DeleteSubMenu.
   *
   * Request from SDL to delete a submenu from the in-application menu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_DeleteSubMenu_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_DeleteSubMenu.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_DeleteSubMenu_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_PerformInteraction.
   *
   * Request from SDL for triggering an interaction (e.g. "Permit GPS?" - Yes, no, Always Allow).
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_PerformInteraction_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_PerformInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_PerformInteraction_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetMediaClockTimer.
   *
   * Sets the initial media clock value and automatic update method.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetMediaClockTimer_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetMediaClockTimer.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetMediaClockTimer_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetGlobalProperties.
   *
   * Request from SDL to set some properties for VR help.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetGlobalProperties_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetGlobalProperties.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetGlobalProperties_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnCommand.
   *
   * Notification must be initiated by HMI on user choosing menu item.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnCommand_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnSystemContext.
   *
   * 
   *       Notification must be initiated by HMI when the user changes the context of application: goes to menu (in-application menu or system menu);
   *       switches to VR; pop-up appears on screen etc.
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnSystemContext_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetCapabilities.
   *
   * Method is invoked at system startup by SDL to request information about UI capabilities of HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetCapabilities_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetCapabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetCapabilities_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ChangeRegistration.
   *
   * Request from SmartDeviceLink to HMI to change language for app.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ChangeRegistration_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ChangeRegistration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ChangeRegistration_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnLanguageChange.
   *
   * Notification from HMI to SmartDeviceLink about change of  language.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnLanguageChange_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetSupportedLanguages.
   *
   * Method should be invoked at system startup. Response provides information about UI supported languages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetSupportedLanguages_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetSupportedLanguages.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetSupportedLanguages_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetLanguage.
   *
   * Request from SmartDeviceLink to HMI to get currently active  UI language
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetLanguage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_GetLanguage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_GetLanguage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnDriverDistraction.
   *
   * Notification must be sent from HMI to SDL when driver distraction state is changed. Driver distraction rules are defined by the platform.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnDriverDistraction_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetAppIcon.
   *
   * Used to set existing local file on SYNC as the app's icon.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetAppIcon_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetAppIcon.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetAppIcon_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetDisplayLayout.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetDisplayLayout_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SetDisplayLayout.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SetDisplayLayout_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ShowCustomForm.
   *
   * Used to show a custom form; it can be a parent or child screen. If no parent screen is designated, it is set as a parent screen.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ShowCustomForm_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ShowCustomForm.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ShowCustomForm_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnKeyboardInput.
   *
   * On-screen keyboard event.
   * Can be full string or individual keypresses depending on keyboard mode.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnKeyboardInput_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnTouchEvent.
   *
   * Notifies about touch events on the screen's prescribed area
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnTouchEvent_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Slider.
   *
   * Creates a full screen or pop-up overlay (depending on platform) with a single user controlled slider.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Slider_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_Slider.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_Slider_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ScrollableMessage.
   *
   * Creates a full screen overlay containing a large block of formatted text that can be scrolled with up to 8 SoftButtons defined
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ScrollableMessage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ScrollableMessage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ScrollableMessage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_PerformAudioPassThru.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_PerformAudioPassThru_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_PerformAudioPassThru.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_PerformAudioPassThru_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_EndAudioPassThru.
   *
   * Request is sent by SDL to stop the audio capturing.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_EndAudioPassThru_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_EndAudioPassThru.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_EndAudioPassThru_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_IsReady.
   *
   * Method is invoked at system startup. Response provides information about presence of UI module and its readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ClosePopUp.
   *
   * Initiated by SDL to close currently active pop-up on HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ClosePopUp_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_ClosePopUp.
   *
   * Provides the result of operation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_ClosePopUp_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnResetTimeout.
   *
   * HMI must provide SDL with notifications specific to the current Turn-By-Turn client status on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnResetTimeout_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_OnRecordStart.
   *
   * Issued by SDL to notify HMI about capturing mic data should be started
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_OnRecordStart_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SendHapticData.
   *
   * Send the UI spatial data from MOBILE. This data will be utilized by the HMI to determine how and when haptic events should occur
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SendHapticData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function UI_SendHapticData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_UI_SendHapticData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_IsReady.
   *
   * Method is invoked at system startup. Response must provide the information about presence of UI Navigation module and its readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SendLocation.
   *
   * That allows the app to send a destination to the embedded nav system.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SendLocation_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SendLocation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SendLocation_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_ShowConstantTBT.
   *
   * Request from SmartDeviceLinkCore to HMI to show info about navigation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_ShowConstantTBT_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_ShowConstantTBT.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_ShowConstantTBT_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_AlertManeuver.
   *
   * Request from SmartDeviceLinkCore to HMI to announce navigation maneuver
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_AlertManeuver_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_AlertManeuver.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_AlertManeuver_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_UpdateTurnList.
   *
   * Request from SmartDeviceLinkCore to HMI to update turn list.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_UpdateTurnList_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_UpdateTurnList.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_UpdateTurnList_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_OnTBTClientState.
   *
   * HMI must provide SDL with notifications specific to the current Turn-By-Turn client status on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_OnTBTClientState_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SetVideoConfig.
   *
   * Request from SDL to HMI to ask whether HMI accepts a video stream with given configuration.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SetVideoConfig_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SetVideoConfig.
   *
   * 
   *       Response from HMI to SDL whether the configuration is accepted.
   *       In a negative response, a list of rejected parameters are supplied.
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SetVideoConfig_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StartStream.
   *
   * Request from SmartDeviceLinkCore to HMI to start playing video streaming.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StartStream_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StartStream.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StartStream_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StopStream.
   *
   * Request from SmartDeviceLinkCore to HMI to stop playing video streaming.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StopStream_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StopStream.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StopStream_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StartAudioStream.
   *
   * Request from SmartDeviceLinkCore to HMI to start playing audio streaming.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StartAudioStream_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StartAudioStream.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StartAudioStream_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StopAudioStream.
   *
   * Request from SmartDeviceLinkCore to HMI to stop playing audio streaming.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StopAudioStream_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_StopAudioStream.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_StopAudioStream_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_OnAudioDataStreaming.
   *
   * Sender: SDL->HMI. Purpose: notify about raw audio data presence over the URL provided via StartAudioStream SDL's request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_OnAudioDataStreaming_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_OnVideoDataStreaming.
   *
   * Sender: SDL->HMI. Purpose: notify about raw video data presence over the URL provided via StartStream SDL's request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_OnVideoDataStreaming_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_GetWayPoints.
   *
   * Request for getting waypoint/destination data.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_GetWayPoints_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_GetWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_GetWayPoints_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_OnWayPointChange.
   *
   * Notification which provides the entire LocationDetails when there is a change to any waypoints or destination.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_OnWayPointChange_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SubscribeWayPoints.
   *
   * To subscribe in getting changes for Waypoints/destinations
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SubscribeWayPoints_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_SubscribeWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_SubscribeWayPoints_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_UnsubscribeWayPoints.
   *
   * Request to unsubscribe from WayPoints and Destination
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_UnsubscribeWayPoints_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function Navigation_UnsubscribeWayPoints.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_Navigation_UnsubscribeWayPoints_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_IsReady.
   *
   * Method is invoked at system startup. Response should provide information about presence of any of vehicle information modules (ECU, GPS, etc) and their readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetVehicleType.
   *
   * Request from SmartDeviceLinkCore to HMI to get info about the vehicle (type, model, etc.).
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetVehicleType_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetVehicleType.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetVehicleType_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_ReadDID.
   *
   * Request from SDL for vehicle data reading.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_ReadDID_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_ReadDID.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_ReadDID_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetDTCs.
   *
   * Vehicle module diagnostic trouble code request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetDTCs_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetDTCs.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetDTCs_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_DiagnosticMessage.
   *
   * Non periodic vehicle diagnostic request
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_DiagnosticMessage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_DiagnosticMessage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_DiagnosticMessage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_SubscribeVehicleData.
   *
   * 
   *         Subscribes for specific published data items.
   *         The data will be only sent if it has changed.
   *         The application will be notified by the onVehicleData notification whenever new data is available.
   *         To unsubscribe the notifications, use unsubscribe with the same subscriptionType.
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_SubscribeVehicleData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_SubscribeVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_SubscribeVehicleData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_UnsubscribeVehicleData.
   *
   * 
   *       This function is used to unsubscribe the notifications from the subscribeVehicleData function.
   *     
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_UnsubscribeVehicleData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_UnsubscribeVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_UnsubscribeVehicleData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetVehicleData.
   *
   * Non periodic vehicle data read request.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetVehicleData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_GetVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_GetVehicleData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function VehicleInfo_OnVehicleData.
   *
   * Callback for the periodic and non periodic vehicle data read function.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_VehicleInfo_OnVehicleData_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_ActivateApp.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_ActivateApp_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_ActivateApp.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_ActivateApp_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetUserFriendlyMessage.
   *
   * Request from HMI to SDL to get user friendly messages for UI/TTS info boxes/texts (i.e. for help/dialogs etc) from Policy Table.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetUserFriendlyMessage_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetUserFriendlyMessage.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetUserFriendlyMessage_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnAllowSDLFunctionality.
   *
   * Initiated by HMI. Notifies about user/HMI allowing SDL functionality or disallowing access to all mobile apps. Needed if HMI has additional ways of asking user about this (i.e. Settings etc)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnAllowSDLFunctionality_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnReceivedPolicyUpdate.
   *
   * 
   *         From: SYNCP Manager
   *         To: SDL
   *         Notification sent to SDL when SYNCP Manager receives and decrypts updated policy table
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnReceivedPolicyUpdate_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnPolicyUpdate.
   *
   * 
   *         From: SYNCP Manager
   *         To: SDL
   *         Notifies SDL to supply a new "PolicyUpdate" request with more recent snapshot data
   *       
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnPolicyUpdate_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetListOfPermissions.
   *
   * Request from HMI to SDL to get list of permissions for app. If no app specified - list of permissions for all apps.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetListOfPermissions_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetListOfPermissions.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetListOfPermissions_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnAppPermissionConsent.
   *
   * Initiated by HMI for specifying the allowance for the application to perform some functionality. Duplicates functionality of the request, needed if HMI has specific ways to allow/disallow functionality (i.e.Setting Menu)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnAppPermissionConsent_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnAppPermissionChanged.
   *
   * Notification from SDL to HMI. Occurs when app permissions were reduced. If no permission specified means that app was dissallowed and has to be unregitstered.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnAppPermissionChanged_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnSDLConsentNeeded.
   *
   * Send from SDL to HMI to notify that data consent is needed for device either because PT update or Retry strategy.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnSDLConsentNeeded_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_UpdateSDL.
   *
   * Request from HMI to SDL to start update of Policy Table.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_UpdateSDL_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_UpdateSDL.
   *
   * Specify result: no update needed, update was successful/unsuccessful etc
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_UpdateSDL_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetStatusUpdate.
   *
   * Request from HMI to SDL to find out current status of PT exchange process.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetStatusUpdate_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetStatusUpdate.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetStatusUpdate_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnStatusUpdate.
   *
   * Notification from SDL to HMI when current status of PT exchange changed (i.e. it Succeded or Failed etc)
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnStatusUpdate_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnSystemError.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnSystemError_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_AddStatisticsInfo.
   *
   * Sent by system to record statiscs and error counts. Increases statistics specified by statisticType by one.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_AddStatisticsInfo_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetURLS.
   *
   * Sent by system to SDL to get list of URL for specified service type and optionally policy's application id.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetURLS_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_GetURLS.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_GetURLS_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function SDL_OnDeviceStateChanged.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_SDL_OnDeviceStateChanged_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_IsReady.
   *
   * Method is invoked at system startup. Response should provide information about presence of any of remote controllable module and its readiness to cooperate with SDL.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_IsReady_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_IsReady.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_IsReady_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetCapabilities.
   *
   * Method is invoked at system startup by SDL to request information about Remote Control capabilities of HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetCapabilities_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetCapabilities.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetCapabilities_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_SetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_SetInteriorVehicleData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_SetInteriorVehicleData.
   *
   * Used to set the values of one zone and one data type within that zone
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_SetInteriorVehicleData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetInteriorVehicleData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetInteriorVehicleData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetInteriorVehicleDataConsent.
   *
   * Sender: SDL->HMI. 
   * HMI is expected to display a permission prompt to the driver showing the RC module and app details (for example, app's name).
   *     The driver is expected to have an ability to grant or deny the permission.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetInteriorVehicleDataConsent_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_GetInteriorVehicleDataConsent.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_GetInteriorVehicleDataConsent_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_OnInteriorVehicleData.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_OnInteriorVehicleData_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_OnRemoteControlSettings.
   *
   * Sender: vehicle -> RSDL. Notification about remote-control settings changed. Sent after User`s choice through HMI.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_OnRemoteControlSettings_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function RC_OnRCStatus.
   *
   * Issued by SDL to notify HMI about remote control status change on SDL
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_RC_OnRCStatus_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_PublishAppService.
   *
   * Registers a service offered by this app on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_PublishAppService_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_PublishAppService.
   *
   * Response to the request to register a service offered by this app on the module
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_PublishAppService_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_OnAppServiceData.
   *
   * This notification includes the data that is updated from the specific service. HMI->SDL if the HMI is a producer, SDL->HMI if the HMI is a consumer
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_OnAppServiceData_notification(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetAppServiceData.
   *
   *  This request asks the module for current data related to the specific service. It also includes an option to subscribe to that service for future updates
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetAppServiceData_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetAppServiceData.
   *
   *  This response includes the data that was requested from the specific service
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetAppServiceData_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_PerformAppServiceInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_PerformAppServiceInteraction_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_PerformAppServiceInteraction.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_PerformAppServiceInteraction_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetAppServiceRecords.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetAppServiceRecords_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetAppServiceRecords.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetAppServiceRecords_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_AppServiceActivation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_AppServiceActivation_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_AppServiceActivation.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_AppServiceActivation_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetActiveServiceConsent.
   *
   * 
   *             SDL->HMI. HMI is expected to prompt the user for permission for the app service to take over as the active service.
   *         
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetActiveServiceConsent_request(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema for function AppService_GetActiveServiceConsent.
   *
   * @return ns_smart_device_link::ns_smart_objects::CSmartSchema
   */
  static ns_smart_device_link::ns_smart_objects::CSmartSchema InitFunction_AppService_GetActiveServiceConsent_response(
      const TStructsSchemaItems &struct_schema_items,
      const std::set<FunctionID::eType> &function_id_items,
      const std::set<messageType::eType> &message_type_items);

  /**
   * @brief Method that generates schema item for structure Common_Coordinate.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Coordinate(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_FuelRange.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_FuelRange(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_UserFriendlyMessage.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_UserFriendlyMessage(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_PermissionItem.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_PermissionItem(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ServiceInfo.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ServiceInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ExternalConsentStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ExternalConsentStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MassageModeData.
   *
   * Specify the mode of a massage zone.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MassageModeData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MassageCushionFirmness.
   *
   * The intensity or firmness of a cushion.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MassageCushionFirmness(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SeatMemoryAction.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SeatMemoryAction(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SeatControlData.
   *
   * Seat control data corresponds to "SEAT" ModuleType. 
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SeatControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SeatControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SeatControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_RdsData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_RdsData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_StationIDNumber.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_StationIDNumber(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_GPSData.
   *
   * Struct with the GPS data.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_GPSData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SisData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SisData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_RadioControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_RadioControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_RadioControlCapabilities.
   *
   * Contains information about a radio control module's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_RadioControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_Temperature.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Temperature(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ClimateControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ClimateControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ClimateControlCapabilities.
   *
   * Contains information about a climate control module's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ClimateControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_EqualizerSettings.
   *
   * Defines the each Equalizer channel settings.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_EqualizerSettings(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AudioControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AudioControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AudioControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AudioControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_RGBColor.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_RGBColor(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_LightCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_LightCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_LightControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_LightControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_LightState.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_LightState(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_LightControlData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_LightControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HMISettingsControlData.
   *
   * Corresponds to "HMI_SETTINGS" ModuleType
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HMISettingsControlData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HMISettingsControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HMISettingsControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ModuleData.
   *
   * The moduleType indicates which type of data should be changed and identifies which data object exists in this struct. For example, if the moduleType is CLIMATE then a "climateControlData" should exist
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ModuleData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TextField.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TextField(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ButtonCapabilities.
   *
   * Contains the information about capabilities of a button.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ButtonCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VehicleDataResult.
   *
   * Individual published data request result
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VehicleDataResult(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TouchCoord.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TouchCoord(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TouchEvent.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TouchEvent(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_PresetBankCapabilities.
   *
   * Contains information about on-screen preset capabilities (whether the HW preset buttons could be duplicated with onscreen buttons).
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_PresetBankCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_Image.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Image(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_DeviceInfo.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_DeviceInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SoftButton.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SoftButton(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TTSChunk.
   *
   * A TTS chunk, that consists of text/phonemes to speak or the name of a file to play, and a TTS type (like text or SAPI)
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TTSChunk(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TemplateColorScheme.
   *
   * 
   *     A color scheme for all display layout templates.
   *   
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TemplateColorScheme(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HMIApplication.
   *
   * Data type containing information about application needed by HMI.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HMIApplication(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MenuParams.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MenuParams(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_Choice.
   *
   * A choice is an option given to the user which can be selected either by menu, or through voice recognition system.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Choice(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VrHelpItem.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VrHelpItem(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TimeFormat.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TimeFormat(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TouchEventCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TouchEventCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ImageResolution.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ImageResolution(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ScreenParams.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ScreenParams(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ImageField.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ImageField(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VideoStreamingFormat.
   *
   * Video streaming formats and their specifications.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VideoStreamingFormat(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VideoConfig.
   *
   * Configuration of a video stream.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VideoConfig(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_DisplayCapabilities.
   *
   * Contains information about the display capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_DisplayCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SoftButtonCapabilities.
   *
   * Contains information about a SoftButton's capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SoftButtonCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HMICapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HMICapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AudioPassThruCapabilities.
   *
   * 
   *     Describes different audio type configurations for PerformAudioPassThru.
   *     e.g. 8kHz,8-bit,PCM
   *     The audio is recorded in monaural.
   *   
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AudioPassThruCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TextFieldStruct.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TextFieldStruct(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_KeyboardProperties.
   *
   * Configuration of on-screen keyboard (if available).
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_KeyboardProperties(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_Turn.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Turn(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VehicleType.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VehicleType(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SingleTireStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SingleTireStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_DIDResult.
   *
   * Individual requested DID result and data
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_DIDResult(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HeadLampStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HeadLampStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_TireStatus.
   *
   * The status and pressure of the tires.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_TireStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_BeltStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_BeltStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_BodyInformation.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_BodyInformation(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_DeviceStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_DeviceStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ECallInfo.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ECallInfo(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AirbagStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AirbagStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_EmergencyEvent.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_EmergencyEvent(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_ClusterModeStatus.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_ClusterModeStatus(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MyKey.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MyKey(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_DateTime.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_DateTime(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_OASISAddress.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_OASISAddress(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_LocationDetails.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_LocationDetails(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_NavigationCapability.
   *
   * Extended capabilities for an onboard navigation system
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_NavigationCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_PhoneCapability.
   *
   * Extended capabilities of the module's phone feature
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_PhoneCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_VideoStreamingCapability.
   *
   * Contains information about this system's video streaming capabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_VideoStreamingCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SystemCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SystemCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_RemoteControlCapabilities.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_RemoteControlCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_Rectangle.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_Rectangle(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_HapticRect.
   *
   * Defines haptic rectangle data for each user control object for video streaming application
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_HapticRect(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SyncMsgVersion.
   *
   * Specifies the version number of the SmartDeviceLink protocol that is supported by the mobile application or app service
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SyncMsgVersion(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MediaServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MediaServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_MediaServiceData.
   *
   * This data is related to what a media service should provide
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_MediaServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_WeatherServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_WeatherServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_WeatherAlert.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_WeatherAlert(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_WeatherData.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_WeatherData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_WeatherServiceData.
   *
   *  This data is related to what a weather service would provide
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_WeatherServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_NavigationServiceManifest.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_NavigationServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_NavigationInstruction.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_NavigationInstruction(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_NavigationServiceData.
   *
   *  This data is related to what a navigation service would provide.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_NavigationServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AppServiceManifest.
   *
   *  This manifest contains all the information necessary for the service to be published, activated, and consumers able to interact with it 
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AppServiceManifest(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AppServiceRecord.
   *
   *  This is the record of an app service publisher that the module has. It should contain the most up to date information including the service's active state
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AppServiceRecord(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AppServiceData.
   *
   *  Contains all the current data of the app service. The serviceType will link to which of the service data objects are included in this object (e.g. if the service type is MEDIA, the mediaServiceData param should be included).
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AppServiceData(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AppServiceCapability.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AppServiceCapability(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_AppServicesCapabilities.
   *
   * Capabilities of app services including what service types are supported and the current state of services.
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_AppServicesCapabilities(
      const TStructsSchemaItems &struct_schema_items);

  /**
   * @brief Method that generates schema item for structure Common_SystemCapability.
   *
   * The systemCapabilityType identifies which data object exists in this struct. For example, if the SystemCapability Type is NAVIGATION then a "navigationCapability" should exist
   */
  static std::shared_ptr<ns_smart_device_link::ns_smart_objects::ISchemaItem> InitStructSchemaItem_Common_SystemCapability(
      const TStructsSchemaItems &struct_schema_items);
};

} // hmi_apis

#endif //__CSMARTFACTORY_HMI_API_Ed437938aa4411e9a05360f81dc21830_HPP__


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

#ifndef __CSMARTFACTORY_HMI_API_Ed35110faa4411e9af3c60f81dc21830_H__
#define __CSMARTFACTORY_HMI_API_Ed35110faa4411e9af3c60f81dc21830_H__

namespace hmi_apis {
namespace StructIdentifiers {
/**
 * @brief Enumeration StructIdentifiers.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief Common_Coordinate.
   */
  Common_Coordinate,

  /**
   * @brief Common_FuelRange.
   */
  Common_FuelRange,

  /**
   * @brief Common_UserFriendlyMessage.
   */
  Common_UserFriendlyMessage,

  /**
   * @brief Common_PermissionItem.
   */
  Common_PermissionItem,

  /**
   * @brief Common_ServiceInfo.
   */
  Common_ServiceInfo,

  /**
   * @brief Common_ExternalConsentStatus.
   */
  Common_ExternalConsentStatus,

  /**
   * @brief Common_MassageModeData.
   */
  Common_MassageModeData,

  /**
   * @brief Common_MassageCushionFirmness.
   */
  Common_MassageCushionFirmness,

  /**
   * @brief Common_SeatMemoryAction.
   */
  Common_SeatMemoryAction,

  /**
   * @brief Common_SeatControlData.
   */
  Common_SeatControlData,

  /**
   * @brief Common_SeatControlCapabilities.
   */
  Common_SeatControlCapabilities,

  /**
   * @brief Common_RdsData.
   */
  Common_RdsData,

  /**
   * @brief Common_StationIDNumber.
   */
  Common_StationIDNumber,

  /**
   * @brief Common_GPSData.
   */
  Common_GPSData,

  /**
   * @brief Common_SisData.
   */
  Common_SisData,

  /**
   * @brief Common_RadioControlData.
   */
  Common_RadioControlData,

  /**
   * @brief Common_RadioControlCapabilities.
   */
  Common_RadioControlCapabilities,

  /**
   * @brief Common_Temperature.
   */
  Common_Temperature,

  /**
   * @brief Common_ClimateControlData.
   */
  Common_ClimateControlData,

  /**
   * @brief Common_ClimateControlCapabilities.
   */
  Common_ClimateControlCapabilities,

  /**
   * @brief Common_EqualizerSettings.
   */
  Common_EqualizerSettings,

  /**
   * @brief Common_AudioControlData.
   */
  Common_AudioControlData,

  /**
   * @brief Common_AudioControlCapabilities.
   */
  Common_AudioControlCapabilities,

  /**
   * @brief Common_RGBColor.
   */
  Common_RGBColor,

  /**
   * @brief Common_LightCapabilities.
   */
  Common_LightCapabilities,

  /**
   * @brief Common_LightControlCapabilities.
   */
  Common_LightControlCapabilities,

  /**
   * @brief Common_LightState.
   */
  Common_LightState,

  /**
   * @brief Common_LightControlData.
   */
  Common_LightControlData,

  /**
   * @brief Common_HMISettingsControlData.
   */
  Common_HMISettingsControlData,

  /**
   * @brief Common_HMISettingsControlCapabilities.
   */
  Common_HMISettingsControlCapabilities,

  /**
   * @brief Common_ModuleData.
   */
  Common_ModuleData,

  /**
   * @brief Common_TextField.
   */
  Common_TextField,

  /**
   * @brief Common_ButtonCapabilities.
   */
  Common_ButtonCapabilities,

  /**
   * @brief Common_VehicleDataResult.
   */
  Common_VehicleDataResult,

  /**
   * @brief Common_TouchCoord.
   */
  Common_TouchCoord,

  /**
   * @brief Common_TouchEvent.
   */
  Common_TouchEvent,

  /**
   * @brief Common_PresetBankCapabilities.
   */
  Common_PresetBankCapabilities,

  /**
   * @brief Common_Image.
   */
  Common_Image,

  /**
   * @brief Common_DeviceInfo.
   */
  Common_DeviceInfo,

  /**
   * @brief Common_SoftButton.
   */
  Common_SoftButton,

  /**
   * @brief Common_TTSChunk.
   */
  Common_TTSChunk,

  /**
   * @brief Common_TemplateColorScheme.
   */
  Common_TemplateColorScheme,

  /**
   * @brief Common_HMIApplication.
   */
  Common_HMIApplication,

  /**
   * @brief Common_MenuParams.
   */
  Common_MenuParams,

  /**
   * @brief Common_Choice.
   */
  Common_Choice,

  /**
   * @brief Common_VrHelpItem.
   */
  Common_VrHelpItem,

  /**
   * @brief Common_TimeFormat.
   */
  Common_TimeFormat,

  /**
   * @brief Common_TouchEventCapabilities.
   */
  Common_TouchEventCapabilities,

  /**
   * @brief Common_ImageResolution.
   */
  Common_ImageResolution,

  /**
   * @brief Common_ScreenParams.
   */
  Common_ScreenParams,

  /**
   * @brief Common_ImageField.
   */
  Common_ImageField,

  /**
   * @brief Common_VideoStreamingFormat.
   */
  Common_VideoStreamingFormat,

  /**
   * @brief Common_VideoConfig.
   */
  Common_VideoConfig,

  /**
   * @brief Common_DisplayCapabilities.
   */
  Common_DisplayCapabilities,

  /**
   * @brief Common_SoftButtonCapabilities.
   */
  Common_SoftButtonCapabilities,

  /**
   * @brief Common_HMICapabilities.
   */
  Common_HMICapabilities,

  /**
   * @brief Common_AudioPassThruCapabilities.
   */
  Common_AudioPassThruCapabilities,

  /**
   * @brief Common_TextFieldStruct.
   */
  Common_TextFieldStruct,

  /**
   * @brief Common_KeyboardProperties.
   */
  Common_KeyboardProperties,

  /**
   * @brief Common_Turn.
   */
  Common_Turn,

  /**
   * @brief Common_VehicleType.
   */
  Common_VehicleType,

  /**
   * @brief Common_SingleTireStatus.
   */
  Common_SingleTireStatus,

  /**
   * @brief Common_DIDResult.
   */
  Common_DIDResult,

  /**
   * @brief Common_HeadLampStatus.
   */
  Common_HeadLampStatus,

  /**
   * @brief Common_TireStatus.
   */
  Common_TireStatus,

  /**
   * @brief Common_BeltStatus.
   */
  Common_BeltStatus,

  /**
   * @brief Common_BodyInformation.
   */
  Common_BodyInformation,

  /**
   * @brief Common_DeviceStatus.
   */
  Common_DeviceStatus,

  /**
   * @brief Common_ECallInfo.
   */
  Common_ECallInfo,

  /**
   * @brief Common_AirbagStatus.
   */
  Common_AirbagStatus,

  /**
   * @brief Common_EmergencyEvent.
   */
  Common_EmergencyEvent,

  /**
   * @brief Common_ClusterModeStatus.
   */
  Common_ClusterModeStatus,

  /**
   * @brief Common_MyKey.
   */
  Common_MyKey,

  /**
   * @brief Common_DateTime.
   */
  Common_DateTime,

  /**
   * @brief Common_OASISAddress.
   */
  Common_OASISAddress,

  /**
   * @brief Common_LocationDetails.
   */
  Common_LocationDetails,

  /**
   * @brief Common_NavigationCapability.
   */
  Common_NavigationCapability,

  /**
   * @brief Common_PhoneCapability.
   */
  Common_PhoneCapability,

  /**
   * @brief Common_VideoStreamingCapability.
   */
  Common_VideoStreamingCapability,

  /**
   * @brief Common_SystemCapabilities.
   */
  Common_SystemCapabilities,

  /**
   * @brief Common_RemoteControlCapabilities.
   */
  Common_RemoteControlCapabilities,

  /**
   * @brief Common_Rectangle.
   */
  Common_Rectangle,

  /**
   * @brief Common_HapticRect.
   */
  Common_HapticRect,

  /**
   * @brief Common_SyncMsgVersion.
   */
  Common_SyncMsgVersion,

  /**
   * @brief Common_MediaServiceManifest.
   */
  Common_MediaServiceManifest,

  /**
   * @brief Common_MediaServiceData.
   */
  Common_MediaServiceData,

  /**
   * @brief Common_WeatherServiceManifest.
   */
  Common_WeatherServiceManifest,

  /**
   * @brief Common_WeatherAlert.
   */
  Common_WeatherAlert,

  /**
   * @brief Common_WeatherData.
   */
  Common_WeatherData,

  /**
   * @brief Common_WeatherServiceData.
   */
  Common_WeatherServiceData,

  /**
   * @brief Common_NavigationServiceManifest.
   */
  Common_NavigationServiceManifest,

  /**
   * @brief Common_NavigationInstruction.
   */
  Common_NavigationInstruction,

  /**
   * @brief Common_NavigationServiceData.
   */
  Common_NavigationServiceData,

  /**
   * @brief Common_AppServiceManifest.
   */
  Common_AppServiceManifest,

  /**
   * @brief Common_AppServiceRecord.
   */
  Common_AppServiceRecord,

  /**
   * @brief Common_AppServiceData.
   */
  Common_AppServiceData,

  /**
   * @brief Common_AppServiceCapability.
   */
  Common_AppServiceCapability,

  /**
   * @brief Common_AppServicesCapabilities.
   */
  Common_AppServicesCapabilities,

  /**
   * @brief Common_SystemCapability.
   */
  Common_SystemCapability
};
} // StructIdentifiers

namespace FunctionID {
/**
 * @brief Enumeration FunctionID.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief Buttons_GetCapabilities.
   */
  Buttons_GetCapabilities,

  /**
   * @brief Buttons_ButtonPress.
   */
  Buttons_ButtonPress,

  /**
   * @brief Buttons_OnButtonEvent.
   */
  Buttons_OnButtonEvent,

  /**
   * @brief Buttons_OnButtonPress.
   */
  Buttons_OnButtonPress,

  /**
   * @brief Buttons_OnButtonSubscription.
   */
  Buttons_OnButtonSubscription,

  /**
   * @brief BasicCommunication_GetSystemTime.
   */
  BasicCommunication_GetSystemTime,

  /**
   * @brief BasicCommunication_OnSystemTimeReady.
   */
  BasicCommunication_OnSystemTimeReady,

  /**
   * @brief BasicCommunication_OnReady.
   */
  BasicCommunication_OnReady,

  /**
   * @brief BasicCommunication_OnStartDeviceDiscovery.
   */
  BasicCommunication_OnStartDeviceDiscovery,

  /**
   * @brief BasicCommunication_OnUpdateDeviceList.
   */
  BasicCommunication_OnUpdateDeviceList,

  /**
   * @brief BasicCommunication_OnResumeAudioSource.
   */
  BasicCommunication_OnResumeAudioSource,

  /**
   * @brief BasicCommunication_OnSDLPersistenceComplete.
   */
  BasicCommunication_OnSDLPersistenceComplete,

  /**
   * @brief BasicCommunication_UpdateAppList.
   */
  BasicCommunication_UpdateAppList,

  /**
   * @brief BasicCommunication_UpdateDeviceList.
   */
  BasicCommunication_UpdateDeviceList,

  /**
   * @brief BasicCommunication_OnFileRemoved.
   */
  BasicCommunication_OnFileRemoved,

  /**
   * @brief BasicCommunication_OnDeviceChosen.
   */
  BasicCommunication_OnDeviceChosen,

  /**
   * @brief BasicCommunication_OnFindApplications.
   */
  BasicCommunication_OnFindApplications,

  /**
   * @brief BasicCommunication_ActivateApp.
   */
  BasicCommunication_ActivateApp,

  /**
   * @brief BasicCommunication_CloseApplication.
   */
  BasicCommunication_CloseApplication,

  /**
   * @brief BasicCommunication_OnAppActivated.
   */
  BasicCommunication_OnAppActivated,

  /**
   * @brief BasicCommunication_OnAppDeactivated.
   */
  BasicCommunication_OnAppDeactivated,

  /**
   * @brief BasicCommunication_OnAppRegistered.
   */
  BasicCommunication_OnAppRegistered,

  /**
   * @brief BasicCommunication_OnAppUnregistered.
   */
  BasicCommunication_OnAppUnregistered,

  /**
   * @brief BasicCommunication_OnExitApplication.
   */
  BasicCommunication_OnExitApplication,

  /**
   * @brief BasicCommunication_OnExitAllApplications.
   */
  BasicCommunication_OnExitAllApplications,

  /**
   * @brief BasicCommunication_OnAwakeSDL.
   */
  BasicCommunication_OnAwakeSDL,

  /**
   * @brief BasicCommunication_MixingAudioSupported.
   */
  BasicCommunication_MixingAudioSupported,

  /**
   * @brief BasicCommunication_DialNumber.
   */
  BasicCommunication_DialNumber,

  /**
   * @brief BasicCommunication_OnSystemRequest.
   */
  BasicCommunication_OnSystemRequest,

  /**
   * @brief BasicCommunication_SystemRequest.
   */
  BasicCommunication_SystemRequest,

  /**
   * @brief BasicCommunication_PolicyUpdate.
   */
  BasicCommunication_PolicyUpdate,

  /**
   * @brief BasicCommunication_OnSDLClose.
   */
  BasicCommunication_OnSDLClose,

  /**
   * @brief BasicCommunication_OnPutFile.
   */
  BasicCommunication_OnPutFile,

  /**
   * @brief BasicCommunication_GetFilePath.
   */
  BasicCommunication_GetFilePath,

  /**
   * @brief BasicCommunication_GetSystemInfo.
   */
  BasicCommunication_GetSystemInfo,

  /**
   * @brief BasicCommunication_OnSystemInfoChanged.
   */
  BasicCommunication_OnSystemInfoChanged,

  /**
   * @brief BasicCommunication_OnIgnitionCycleOver.
   */
  BasicCommunication_OnIgnitionCycleOver,

  /**
   * @brief BasicCommunication_DecryptCertificate.
   */
  BasicCommunication_DecryptCertificate,

  /**
   * @brief BasicCommunication_OnEventChanged.
   */
  BasicCommunication_OnEventChanged,

  /**
   * @brief BasicCommunication_OnSystemCapabilityUpdated.
   */
  BasicCommunication_OnSystemCapabilityUpdated,

  /**
   * @brief VR_IsReady.
   */
  VR_IsReady,

  /**
   * @brief VR_Started.
   */
  VR_Started,

  /**
   * @brief VR_Stopped.
   */
  VR_Stopped,

  /**
   * @brief VR_AddCommand.
   */
  VR_AddCommand,

  /**
   * @brief VR_DeleteCommand.
   */
  VR_DeleteCommand,

  /**
   * @brief VR_PerformInteraction.
   */
  VR_PerformInteraction,

  /**
   * @brief VR_OnCommand.
   */
  VR_OnCommand,

  /**
   * @brief VR_ChangeRegistration.
   */
  VR_ChangeRegistration,

  /**
   * @brief VR_OnLanguageChange.
   */
  VR_OnLanguageChange,

  /**
   * @brief VR_GetSupportedLanguages.
   */
  VR_GetSupportedLanguages,

  /**
   * @brief VR_GetLanguage.
   */
  VR_GetLanguage,

  /**
   * @brief VR_GetCapabilities.
   */
  VR_GetCapabilities,

  /**
   * @brief TTS_GetCapabilities.
   */
  TTS_GetCapabilities,

  /**
   * @brief TTS_Started.
   */
  TTS_Started,

  /**
   * @brief TTS_Stopped.
   */
  TTS_Stopped,

  /**
   * @brief TTS_IsReady.
   */
  TTS_IsReady,

  /**
   * @brief TTS_Speak.
   */
  TTS_Speak,

  /**
   * @brief TTS_StopSpeaking.
   */
  TTS_StopSpeaking,

  /**
   * @brief TTS_ChangeRegistration.
   */
  TTS_ChangeRegistration,

  /**
   * @brief TTS_OnLanguageChange.
   */
  TTS_OnLanguageChange,

  /**
   * @brief TTS_GetSupportedLanguages.
   */
  TTS_GetSupportedLanguages,

  /**
   * @brief TTS_GetLanguage.
   */
  TTS_GetLanguage,

  /**
   * @brief TTS_SetGlobalProperties.
   */
  TTS_SetGlobalProperties,

  /**
   * @brief TTS_OnResetTimeout.
   */
  TTS_OnResetTimeout,

  /**
   * @brief UI_Alert.
   */
  UI_Alert,

  /**
   * @brief UI_Show.
   */
  UI_Show,

  /**
   * @brief UI_AddCommand.
   */
  UI_AddCommand,

  /**
   * @brief UI_DeleteCommand.
   */
  UI_DeleteCommand,

  /**
   * @brief UI_AddSubMenu.
   */
  UI_AddSubMenu,

  /**
   * @brief UI_DeleteSubMenu.
   */
  UI_DeleteSubMenu,

  /**
   * @brief UI_PerformInteraction.
   */
  UI_PerformInteraction,

  /**
   * @brief UI_SetMediaClockTimer.
   */
  UI_SetMediaClockTimer,

  /**
   * @brief UI_SetGlobalProperties.
   */
  UI_SetGlobalProperties,

  /**
   * @brief UI_OnCommand.
   */
  UI_OnCommand,

  /**
   * @brief UI_OnSystemContext.
   */
  UI_OnSystemContext,

  /**
   * @brief UI_GetCapabilities.
   */
  UI_GetCapabilities,

  /**
   * @brief UI_ChangeRegistration.
   */
  UI_ChangeRegistration,

  /**
   * @brief UI_OnLanguageChange.
   */
  UI_OnLanguageChange,

  /**
   * @brief UI_GetSupportedLanguages.
   */
  UI_GetSupportedLanguages,

  /**
   * @brief UI_GetLanguage.
   */
  UI_GetLanguage,

  /**
   * @brief UI_OnDriverDistraction.
   */
  UI_OnDriverDistraction,

  /**
   * @brief UI_SetAppIcon.
   */
  UI_SetAppIcon,

  /**
   * @brief UI_SetDisplayLayout.
   */
  UI_SetDisplayLayout,

  /**
   * @brief UI_ShowCustomForm.
   */
  UI_ShowCustomForm,

  /**
   * @brief UI_OnKeyboardInput.
   */
  UI_OnKeyboardInput,

  /**
   * @brief UI_OnTouchEvent.
   */
  UI_OnTouchEvent,

  /**
   * @brief UI_Slider.
   */
  UI_Slider,

  /**
   * @brief UI_ScrollableMessage.
   */
  UI_ScrollableMessage,

  /**
   * @brief UI_PerformAudioPassThru.
   */
  UI_PerformAudioPassThru,

  /**
   * @brief UI_EndAudioPassThru.
   */
  UI_EndAudioPassThru,

  /**
   * @brief UI_IsReady.
   */
  UI_IsReady,

  /**
   * @brief UI_ClosePopUp.
   */
  UI_ClosePopUp,

  /**
   * @brief UI_OnResetTimeout.
   */
  UI_OnResetTimeout,

  /**
   * @brief UI_OnRecordStart.
   */
  UI_OnRecordStart,

  /**
   * @brief UI_SendHapticData.
   */
  UI_SendHapticData,

  /**
   * @brief Navigation_IsReady.
   */
  Navigation_IsReady,

  /**
   * @brief Navigation_SendLocation.
   */
  Navigation_SendLocation,

  /**
   * @brief Navigation_ShowConstantTBT.
   */
  Navigation_ShowConstantTBT,

  /**
   * @brief Navigation_AlertManeuver.
   */
  Navigation_AlertManeuver,

  /**
   * @brief Navigation_UpdateTurnList.
   */
  Navigation_UpdateTurnList,

  /**
   * @brief Navigation_OnTBTClientState.
   */
  Navigation_OnTBTClientState,

  /**
   * @brief Navigation_SetVideoConfig.
   */
  Navigation_SetVideoConfig,

  /**
   * @brief Navigation_StartStream.
   */
  Navigation_StartStream,

  /**
   * @brief Navigation_StopStream.
   */
  Navigation_StopStream,

  /**
   * @brief Navigation_StartAudioStream.
   */
  Navigation_StartAudioStream,

  /**
   * @brief Navigation_StopAudioStream.
   */
  Navigation_StopAudioStream,

  /**
   * @brief Navigation_OnAudioDataStreaming.
   */
  Navigation_OnAudioDataStreaming,

  /**
   * @brief Navigation_OnVideoDataStreaming.
   */
  Navigation_OnVideoDataStreaming,

  /**
   * @brief Navigation_GetWayPoints.
   */
  Navigation_GetWayPoints,

  /**
   * @brief Navigation_OnWayPointChange.
   */
  Navigation_OnWayPointChange,

  /**
   * @brief Navigation_SubscribeWayPoints.
   */
  Navigation_SubscribeWayPoints,

  /**
   * @brief Navigation_UnsubscribeWayPoints.
   */
  Navigation_UnsubscribeWayPoints,

  /**
   * @brief VehicleInfo_IsReady.
   */
  VehicleInfo_IsReady,

  /**
   * @brief VehicleInfo_GetVehicleType.
   */
  VehicleInfo_GetVehicleType,

  /**
   * @brief VehicleInfo_ReadDID.
   */
  VehicleInfo_ReadDID,

  /**
   * @brief VehicleInfo_GetDTCs.
   */
  VehicleInfo_GetDTCs,

  /**
   * @brief VehicleInfo_DiagnosticMessage.
   */
  VehicleInfo_DiagnosticMessage,

  /**
   * @brief VehicleInfo_SubscribeVehicleData.
   */
  VehicleInfo_SubscribeVehicleData,

  /**
   * @brief VehicleInfo_UnsubscribeVehicleData.
   */
  VehicleInfo_UnsubscribeVehicleData,

  /**
   * @brief VehicleInfo_GetVehicleData.
   */
  VehicleInfo_GetVehicleData,

  /**
   * @brief VehicleInfo_OnVehicleData.
   */
  VehicleInfo_OnVehicleData,

  /**
   * @brief SDL_ActivateApp.
   */
  SDL_ActivateApp,

  /**
   * @brief SDL_GetUserFriendlyMessage.
   */
  SDL_GetUserFriendlyMessage,

  /**
   * @brief SDL_OnAllowSDLFunctionality.
   */
  SDL_OnAllowSDLFunctionality,

  /**
   * @brief SDL_OnReceivedPolicyUpdate.
   */
  SDL_OnReceivedPolicyUpdate,

  /**
   * @brief SDL_OnPolicyUpdate.
   */
  SDL_OnPolicyUpdate,

  /**
   * @brief SDL_GetListOfPermissions.
   */
  SDL_GetListOfPermissions,

  /**
   * @brief SDL_OnAppPermissionConsent.
   */
  SDL_OnAppPermissionConsent,

  /**
   * @brief SDL_OnAppPermissionChanged.
   */
  SDL_OnAppPermissionChanged,

  /**
   * @brief SDL_OnSDLConsentNeeded.
   */
  SDL_OnSDLConsentNeeded,

  /**
   * @brief SDL_UpdateSDL.
   */
  SDL_UpdateSDL,

  /**
   * @brief SDL_GetStatusUpdate.
   */
  SDL_GetStatusUpdate,

  /**
   * @brief SDL_OnStatusUpdate.
   */
  SDL_OnStatusUpdate,

  /**
   * @brief SDL_OnSystemError.
   */
  SDL_OnSystemError,

  /**
   * @brief SDL_AddStatisticsInfo.
   */
  SDL_AddStatisticsInfo,

  /**
   * @brief SDL_GetURLS.
   */
  SDL_GetURLS,

  /**
   * @brief SDL_OnDeviceStateChanged.
   */
  SDL_OnDeviceStateChanged,

  /**
   * @brief RC_IsReady.
   */
  RC_IsReady,

  /**
   * @brief RC_GetCapabilities.
   */
  RC_GetCapabilities,

  /**
   * @brief RC_SetInteriorVehicleData.
   */
  RC_SetInteriorVehicleData,

  /**
   * @brief RC_GetInteriorVehicleData.
   */
  RC_GetInteriorVehicleData,

  /**
   * @brief RC_GetInteriorVehicleDataConsent.
   */
  RC_GetInteriorVehicleDataConsent,

  /**
   * @brief RC_OnInteriorVehicleData.
   */
  RC_OnInteriorVehicleData,

  /**
   * @brief RC_OnRemoteControlSettings.
   */
  RC_OnRemoteControlSettings,

  /**
   * @brief RC_OnRCStatus.
   */
  RC_OnRCStatus,

  /**
   * @brief AppService_PublishAppService.
   */
  AppService_PublishAppService,

  /**
   * @brief AppService_OnAppServiceData.
   */
  AppService_OnAppServiceData,

  /**
   * @brief AppService_GetAppServiceData.
   */
  AppService_GetAppServiceData,

  /**
   * @brief AppService_PerformAppServiceInteraction.
   */
  AppService_PerformAppServiceInteraction,

  /**
   * @brief AppService_GetAppServiceRecords.
   */
  AppService_GetAppServiceRecords,

  /**
   * @brief AppService_AppServiceActivation.
   */
  AppService_AppServiceActivation,

  /**
   * @brief AppService_GetActiveServiceConsent.
   */
  AppService_GetActiveServiceConsent
};
} // FunctionID

namespace messageType {
/**
 * @brief Enumeration messageType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief request.
   */
  request,

  /**
   * @brief response.
   */
  response,

  /**
   * @brief notification.
   */
  notification,

  /**
   * @brief error_response.
   */
  error_response
};
} // messageType

namespace Common_Result {
/**
 * @brief Enumeration Common_Result.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SUCCESS.
   */
  SUCCESS = 0,

  /**
   * @brief UNSUPPORTED_REQUEST.
   */
  UNSUPPORTED_REQUEST = 1,

  /**
   * @brief UNSUPPORTED_RESOURCE.
   */
  UNSUPPORTED_RESOURCE = 2,

  /**
   * @brief DISALLOWED.
   */
  DISALLOWED = 3,

  /**
   * @brief REJECTED.
   */
  REJECTED = 4,

  /**
   * @brief ABORTED.
   */
  ABORTED = 5,

  /**
   * @brief IGNORED.
   */
  IGNORED = 6,

  /**
   * @brief RETRY.
   */
  RETRY = 7,

  /**
   * @brief IN_USE.
   */
  IN_USE = 8,

  /**
   * @brief DATA_NOT_AVAILABLE.
   */
  DATA_NOT_AVAILABLE = 9,

  /**
   * @brief TIMED_OUT.
   */
  TIMED_OUT = 10,

  /**
   * @brief INVALID_DATA.
   */
  INVALID_DATA = 11,

  /**
   * @brief CHAR_LIMIT_EXCEEDED.
   */
  CHAR_LIMIT_EXCEEDED = 12,

  /**
   * @brief INVALID_ID.
   */
  INVALID_ID = 13,

  /**
   * @brief DUPLICATE_NAME.
   */
  DUPLICATE_NAME = 14,

  /**
   * @brief APPLICATION_NOT_REGISTERED.
   */
  APPLICATION_NOT_REGISTERED = 15,

  /**
   * @brief WRONG_LANGUAGE.
   */
  WRONG_LANGUAGE = 16,

  /**
   * @brief OUT_OF_MEMORY.
   */
  OUT_OF_MEMORY = 17,

  /**
   * @brief TOO_MANY_PENDING_REQUESTS.
   */
  TOO_MANY_PENDING_REQUESTS = 18,

  /**
   * @brief NO_APPS_REGISTERED.
   */
  NO_APPS_REGISTERED = 19,

  /**
   * @brief NO_DEVICES_CONNECTED.
   */
  NO_DEVICES_CONNECTED = 20,

  /**
   * @brief WARNINGS.
   */
  WARNINGS = 21,

  /**
   * @brief GENERIC_ERROR.
   */
  GENERIC_ERROR = 22,

  /**
   * @brief USER_DISALLOWED.
   */
  USER_DISALLOWED = 23,

  /**
   * @brief TRUNCATED_DATA.
   */
  TRUNCATED_DATA = 24,

  /**
   * @brief SAVED.
   */
  SAVED = 25,

  /**
   * @brief READ_ONLY.
   */
  READ_ONLY = 26
};
} // Common_Result

namespace Common_TransportType {
/**
 * @brief Enumeration Common_TransportType.
 *
 * Lists of the transport types used for device connection to HU.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief BLUETOOTH.
   */
  BLUETOOTH,

  /**
   * @brief USB_IOS.
   */
  USB_IOS,

  /**
   * @brief USB_AOA.
   */
  USB_AOA,

  /**
   * @brief WIFI.
   */
  WIFI,

  /**
   * @brief CLOUD_WEBSOCKET.
   */
  CLOUD_WEBSOCKET
};
} // Common_TransportType

namespace Common_ButtonName {
/**
 * @brief Enumeration Common_ButtonName.
 *
 * Defines the hard (physical) and soft (touchscreen) buttons available from SYNC
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief OK.
   */
  OK,

  /**
   * @brief PLAY_PAUSE.
   */
  PLAY_PAUSE,

  /**
   * @brief SEEKLEFT.
   */
  SEEKLEFT,

  /**
   * @brief SEEKRIGHT.
   */
  SEEKRIGHT,

  /**
   * @brief TUNEUP.
   */
  TUNEUP,

  /**
   * @brief TUNEDOWN.
   */
  TUNEDOWN,

  /**
   * @brief PRESET_0.
   */
  PRESET_0,

  /**
   * @brief PRESET_1.
   */
  PRESET_1,

  /**
   * @brief PRESET_2.
   */
  PRESET_2,

  /**
   * @brief PRESET_3.
   */
  PRESET_3,

  /**
   * @brief PRESET_4.
   */
  PRESET_4,

  /**
   * @brief PRESET_5.
   */
  PRESET_5,

  /**
   * @brief PRESET_6.
   */
  PRESET_6,

  /**
   * @brief PRESET_7.
   */
  PRESET_7,

  /**
   * @brief PRESET_8.
   */
  PRESET_8,

  /**
   * @brief PRESET_9.
   */
  PRESET_9,

  /**
   * @brief CUSTOM_BUTTON.
   */
  CUSTOM_BUTTON,

  /**
   * @brief SEARCH.
   */
  SEARCH,

  /**
   * @brief AC_MAX.
   */
  AC_MAX,

  /**
   * @brief AC.
   */
  AC,

  /**
   * @brief RECIRCULATE.
   */
  RECIRCULATE,

  /**
   * @brief FAN_UP.
   */
  FAN_UP,

  /**
   * @brief FAN_DOWN.
   */
  FAN_DOWN,

  /**
   * @brief TEMP_UP.
   */
  TEMP_UP,

  /**
   * @brief TEMP_DOWN.
   */
  TEMP_DOWN,

  /**
   * @brief DEFROST_MAX.
   */
  DEFROST_MAX,

  /**
   * @brief DEFROST.
   */
  DEFROST,

  /**
   * @brief DEFROST_REAR.
   */
  DEFROST_REAR,

  /**
   * @brief UPPER_VENT.
   */
  UPPER_VENT,

  /**
   * @brief LOWER_VENT.
   */
  LOWER_VENT,

  /**
   * @brief VOLUME_UP.
   */
  VOLUME_UP,

  /**
   * @brief VOLUME_DOWN.
   */
  VOLUME_DOWN,

  /**
   * @brief EJECT.
   */
  EJECT,

  /**
   * @brief SOURCE.
   */
  SOURCE,

  /**
   * @brief SHUFFLE.
   */
  SHUFFLE,

  /**
   * @brief REPEAT.
   */
  REPEAT
};
} // Common_ButtonName

namespace Common_ButtonEventMode {
/**
 * @brief Enumeration Common_ButtonEventMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief BUTTONUP.
   *
   * A button has been released up
   */
  BUTTONUP,

  /**
   * @brief BUTTONDOWN.
   *
   * A button has been pressed down
   */
  BUTTONDOWN
};
} // Common_ButtonEventMode

namespace Common_ButtonPressMode {
/**
 * @brief Enumeration Common_ButtonPressMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief LONG.
   *
   * A button was released, after it was pressed for a long time. Actual timing is defined by head unit and may vary
   */
  LONG,

  /**
   * @brief SHORT.
   *
   * A button was released, after it was pressed for a short time. Actual timing is defined by head unit and may vary
   */
  SHORT
};
} // Common_ButtonPressMode

namespace Common_Language {
/**
 * @brief Enumeration Common_Language.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief EN_US.
   *
   * English - US
   */
  EN_US,

  /**
   * @brief ES_MX.
   *
   * Spanish - Mexico
   */
  ES_MX,

  /**
   * @brief FR_CA.
   *
   * French - Canada
   */
  FR_CA,

  /**
   * @brief DE_DE.
   *
   * German - Germany
   */
  DE_DE,

  /**
   * @brief ES_ES.
   *
   * Spanish - Spain
   */
  ES_ES,

  /**
   * @brief EN_GB.
   *
   * English - GB
   */
  EN_GB,

  /**
   * @brief RU_RU.
   *
   * Russian - Russia
   */
  RU_RU,

  /**
   * @brief TR_TR.
   *
   * Turkish - Turkey
   */
  TR_TR,

  /**
   * @brief PL_PL.
   *
   * Polish - Poland
   */
  PL_PL,

  /**
   * @brief FR_FR.
   *
   * French - France
   */
  FR_FR,

  /**
   * @brief IT_IT.
   *
   * Italian - Italy
   */
  IT_IT,

  /**
   * @brief SV_SE.
   *
   * Swedish - Sweden
   */
  SV_SE,

  /**
   * @brief PT_PT.
   *
   * Portuguese - Portugal
   */
  PT_PT,

  /**
   * @brief NL_NL.
   *
   * Dutch (Standard) - Netherlands
   */
  NL_NL,

  /**
   * @brief EN_AU.
   *
   * English - Australia
   */
  EN_AU,

  /**
   * @brief ZH_CN.
   *
   * Mandarin - China
   */
  ZH_CN,

  /**
   * @brief ZH_TW.
   *
   * Mandarin - Taiwan
   */
  ZH_TW,

  /**
   * @brief JA_JP.
   *
   * Japanese - Japan
   */
  JA_JP,

  /**
   * @brief AR_SA.
   *
   * Arabic - Saudi Arabia
   */
  AR_SA,

  /**
   * @brief KO_KR.
   *
   * Korean - South Korea
   */
  KO_KR,

  /**
   * @brief PT_BR.
   *
   * Portuguese - Brazil
   */
  PT_BR,

  /**
   * @brief CS_CZ.
   *
   * Czech - Czech Republic
   */
  CS_CZ,

  /**
   * @brief DA_DK.
   *
   * Danish - Denmark
   */
  DA_DK,

  /**
   * @brief NO_NO.
   *
   * Norwegian - Norway
   */
  NO_NO,

  /**
   * @brief NL_BE.
   *
   * Dutch (Flemish) - Belgium
   */
  NL_BE,

  /**
   * @brief EL_GR.
   *
   * Greek - Greece
   */
  EL_GR,

  /**
   * @brief HU_HU.
   *
   * Hungarian - Hungary
   */
  HU_HU,

  /**
   * @brief FI_FI.
   *
   * Finnish - Finland
   */
  FI_FI,

  /**
   * @brief SK_SK.
   *
   * Slovak - Slovakia
   */
  SK_SK,

  /**
   * @brief EN_IN.
   *
   * English - India
   */
  EN_IN,

  /**
   * @brief TH_TH.
   *
   * Thai - Thailand
   */
  TH_TH,

  /**
   * @brief EN_SA.
   *
   * English - Middle East
   */
  EN_SA,

  /**
   * @brief HE_IL.
   *
   * Hebrew - Israel
   */
  HE_IL,

  /**
   * @brief RO_RO.
   *
   * Romanian - Romania
   */
  RO_RO,

  /**
   * @brief UK_UA.
   *
   * Ukrainian - Ukraine
   */
  UK_UA,

  /**
   * @brief ID_ID.
   *
   * Indonesian - Indonesia
   */
  ID_ID,

  /**
   * @brief VI_VN.
   *
   * Vietnamese - Vietnam
   */
  VI_VN,

  /**
   * @brief MS_MY.
   *
   * Malay - Malaysia
   */
  MS_MY,

  /**
   * @brief HI_IN.
   *
   * Hindi - India
   */
  HI_IN
};
} // Common_Language

namespace Common_SoftButtonType {
/**
 * @brief Enumeration Common_SoftButtonType.
 *
 * Contains information about the SoftButton capabilities.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SBT_TEXT.
   */
  SBT_TEXT,

  /**
   * @brief SBT_IMAGE.
   */
  SBT_IMAGE,

  /**
   * @brief SBT_BOTH.
   */
  SBT_BOTH
};
} // Common_SoftButtonType

namespace Common_SystemAction {
/**
 * @brief Enumeration Common_SystemAction.
 *
 * Enumeration that describes system actions that can be triggered.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DEFAULT_ACTION.
   *
   * Default action occurs.  Standard behavior (e.g. SoftButton clears overlay).
   */
  DEFAULT_ACTION,

  /**
   * @brief STEAL_FOCUS.
   *
   * The calling app's dialog or related event should clear and the app should be brought into HMI_FULL.
   */
  STEAL_FOCUS,

  /**
   * @brief KEEP_CONTEXT.
   *
   * Current system context is maintained.  An overlay is persisted even though a SoftButton has been pressed and the notification sent.
   */
  KEEP_CONTEXT
};
} // Common_SystemAction

namespace Common_AppHMIType {
/**
 * @brief Enumeration Common_AppHMIType.
 *
 * Enumeration listing possible app types.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DEFAULT.
   */
  DEFAULT,

  /**
   * @brief COMMUNICATION.
   */
  COMMUNICATION,

  /**
   * @brief MEDIA.
   */
  MEDIA,

  /**
   * @brief MESSAGING.
   */
  MESSAGING,

  /**
   * @brief NAVIGATION.
   */
  NAVIGATION,

  /**
   * @brief INFORMATION.
   */
  INFORMATION,

  /**
   * @brief SOCIAL.
   */
  SOCIAL,

  /**
   * @brief BACKGROUND_PROCESS.
   */
  BACKGROUND_PROCESS,

  /**
   * @brief TESTING.
   */
  TESTING,

  /**
   * @brief SYSTEM.
   */
  SYSTEM,

  /**
   * @brief PROJECTION.
   */
  PROJECTION,

  /**
   * @brief REMOTE_CONTROL.
   */
  REMOTE_CONTROL
};
} // Common_AppHMIType

namespace Common_CloudConnectionStatus {
/**
 * @brief Enumeration Common_CloudConnectionStatus.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief NOT_CONNECTED.
   *
   * No active websocket session or ongoing connection attempts
   */
  NOT_CONNECTED,

  /**
   * @brief CONNECTED.
   *
   * Websocket is active
   */
  CONNECTED,

  /**
   * @brief RETRY.
   *
   * Websocket connection failed and retry attempts are ongoing
   */
  RETRY
};
} // Common_CloudConnectionStatus

namespace Common_WayPointType {
/**
 * @brief Enumeration Common_WayPointType.
 *
 * Describes what kind of waypoint is requested/provided.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ALL.
   */
  ALL,

  /**
   * @brief DESTINATION.
   */
  DESTINATION
};
} // Common_WayPointType

namespace Common_LayoutMode {
/**
 * @brief Enumeration Common_LayoutMode.
 *
 * For touchscreen interactions, the mode of how the choices are presented.
 * This mode causes the interaction to display the previous set of choices as icons.
 * This mode causes the interaction to display the previous set of choices as icons along with a search field in the HMI.
 * This mode causes the interaction to display the previous set of choices as a list.
 * This mode causes the interaction to display the previous set of choices as a list along with a search field in the HMI.
 * This mode causes the interaction to immediately display a keyboard entry through the HMI.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ICON_ONLY.
   */
  ICON_ONLY,

  /**
   * @brief ICON_WITH_SEARCH.
   */
  ICON_WITH_SEARCH,

  /**
   * @brief LIST_ONLY.
   */
  LIST_ONLY,

  /**
   * @brief LIST_WITH_SEARCH.
   */
  LIST_WITH_SEARCH,

  /**
   * @brief KEYBOARD.
   */
  KEYBOARD
};
} // Common_LayoutMode

namespace Common_ClockUpdateMode {
/**
 * @brief Enumeration Common_ClockUpdateMode.
 *
 * Describes how the media clock timer should behave on the platform
 * Starts the media clock timer counting upwards, as in time elapsed.
 * Starts the media clock timer counting downwards, as in time remaining.
 * Pauses the media clock timer
 * Resume the media clock timer
 * Clears the media clock timer (previously done through Show->mediaClock)
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief COUNTUP.
   */
  COUNTUP,

  /**
   * @brief COUNTDOWN.
   */
  COUNTDOWN,

  /**
   * @brief PAUSE.
   */
  PAUSE,

  /**
   * @brief RESUME.
   */
  RESUME,

  /**
   * @brief CLEAR.
   */
  CLEAR
};
} // Common_ClockUpdateMode

namespace Common_AudioStreamingIndicator {
/**
 * @brief Enumeration Common_AudioStreamingIndicator.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PLAY_PAUSE.
   *
   * Default playback indicator.
   */
  PLAY_PAUSE,

  /**
   * @brief PLAY.
   *
   * Indicates that a button press of the Play/Pause button would start the playback.
   */
  PLAY,

  /**
   * @brief PAUSE.
   *
   * Indicates that a button press of the Play/Pause button would pause the current playback.
   */
  PAUSE,

  /**
   * @brief STOP.
   *
   * Indicates that a button press of the Play/Pause button would stop the current playback.
   */
  STOP
};
} // Common_AudioStreamingIndicator

namespace Common_SystemContext {
/**
 * @brief Enumeration Common_SystemContext.
 *
 * Enumeration that describes possible contexts the application might be in on HU.
 * Communicated to whichever app is in HMI FULL, except Alert.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SYSCTXT_MAIN.
   *
   * The app's persistent display (whether media/non-media/navigation) is fully visible onscreen.
   *  There is currently no user interaction (user-initiated or app-initiated) with the head-unit
   */
  SYSCTXT_MAIN,

  /**
   * @brief SYSCTXT_VRSESSION.
   *
   * The system is currently in a VR session (with whatever dedicated VR screen being overlaid onscreen).
   */
  SYSCTXT_VRSESSION,

  /**
   * @brief SYSCTXT_MENU.
   *
   * The system is currently displaying a system or in-App menu onscreen.
   */
  SYSCTXT_MENU,

  /**
   * @brief SYSCTXT_HMI_OBSCURED.
   *
   * The app's display HMI is currently obscuring with either a system or other app's overlay (except of Alert element).
   */
  SYSCTXT_HMI_OBSCURED,

  /**
   * @brief SYSCTXT_ALERT.
   *
   * Broadcast only to whichever app has an alert currently being displayed.
   */
  SYSCTXT_ALERT
};
} // Common_SystemContext

namespace Common_HmiZoneCapabilities {
/**
 * @brief Enumeration Common_HmiZoneCapabilities.
 *
 * Contains information about the HMI zone capabilities.
 * For future use.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FRONT.
   */
  FRONT,

  /**
   * @brief BACK.
   */
  BACK
};
} // Common_HmiZoneCapabilities

namespace Common_SpeechCapabilities {
/**
 * @brief Enumeration Common_SpeechCapabilities.
 *
 * Contains information about the TTS capabilities.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SC_TEXT.
   */
  SC_TEXT,

  /**
   * @brief SAPI_PHONEMES.
   */
  SAPI_PHONEMES,

  /**
   * @brief LHPLUS_PHONEMES.
   */
  LHPLUS_PHONEMES,

  /**
   * @brief PRE_RECORDED.
   */
  PRE_RECORDED,

  /**
   * @brief SILENCE.
   */
  SILENCE,

  /**
   * @brief FILE.
   */
  FILE
};
} // Common_SpeechCapabilities

namespace Common_VrCapabilities {
/**
 * @brief Enumeration Common_VrCapabilities.
 *
 * Contains information about the VR capabilities.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VR_TEXT.
   */
  VR_TEXT
};
} // Common_VrCapabilities

namespace Common_PrerecordedSpeech {
/**
 * @brief Enumeration Common_PrerecordedSpeech.
 *
 * Contains a list of prerecorded speech items present on the platform.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief HELP_JINGLE.
   */
  HELP_JINGLE,

  /**
   * @brief INITIAL_JINGLE.
   */
  INITIAL_JINGLE,

  /**
   * @brief LISTEN_JINGLE.
   */
  LISTEN_JINGLE,

  /**
   * @brief POSITIVE_JINGLE.
   */
  POSITIVE_JINGLE,

  /**
   * @brief NEGATIVE_JINGLE.
   */
  NEGATIVE_JINGLE
};
} // Common_PrerecordedSpeech

namespace Common_TBTState {
/**
 * @brief Enumeration Common_TBTState.
 *
 * Enumeration that describes possible states of turn-by-turn client or SmartDeviceLink app.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ROUTE_UPDATE_REQUEST.
   */
  ROUTE_UPDATE_REQUEST,

  /**
   * @brief ROUTE_ACCEPTED.
   */
  ROUTE_ACCEPTED,

  /**
   * @brief ROUTE_REFUSED.
   */
  ROUTE_REFUSED,

  /**
   * @brief ROUTE_CANCELLED.
   */
  ROUTE_CANCELLED,

  /**
   * @brief ETA_REQUEST.
   */
  ETA_REQUEST,

  /**
   * @brief NEXT_TURN_REQUEST.
   */
  NEXT_TURN_REQUEST,

  /**
   * @brief ROUTE_STATUS_REQUEST.
   */
  ROUTE_STATUS_REQUEST,

  /**
   * @brief ROUTE_SUMMARY_REQUEST.
   */
  ROUTE_SUMMARY_REQUEST,

  /**
   * @brief TRIP_STATUS_REQUEST.
   */
  TRIP_STATUS_REQUEST,

  /**
   * @brief ROUTE_UPDATE_REQUEST_TIMEOUT.
   */
  ROUTE_UPDATE_REQUEST_TIMEOUT
};
} // Common_TBTState

namespace Common_ApplicationsCloseReason {
/**
 * @brief Enumeration Common_ApplicationsCloseReason.
 *
 * Describes the reasons for exiting all of applications.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief IGNITION_OFF.
   */
  IGNITION_OFF,

  /**
   * @brief MASTER_RESET.
   */
  MASTER_RESET,

  /**
   * @brief FACTORY_DEFAULTS.
   */
  FACTORY_DEFAULTS,

  /**
   * @brief SUSPEND.
   */
  SUSPEND
};
} // Common_ApplicationsCloseReason

namespace Common_DisplayType {
/**
 * @brief Enumeration Common_DisplayType.
 *
 * The possible types of HU display.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CID.
   *
   *  A 2-line x 20 character "dot matrix" display 
   */
  CID,

  /**
   * @brief TYPE2.
   *
   *  1 line older radio head unit.
   */
  TYPE2,

  /**
   * @brief TYPE5.
   *
   *  Old radio head unit.
   */
  TYPE5,

  /**
   * @brief NGN.
   *
   *  Next Generation Navigation display.
   */
  NGN,

  /**
   * @brief GEN2_8_DMA.
   *
   *  GEN-2, 8 inch display.
   */
  GEN2_8_DMA,

  /**
   * @brief GEN2_6_DMA.
   *
   *  GEN-2, 6 inch display.
   */
  GEN2_6_DMA,

  /**
   * @brief MFD3.
   *
   *  3 inch GEN1.1 display 
   */
  MFD3,

  /**
   * @brief MFD4.
   *
   *  4 inch GEN1.1 display 
   */
  MFD4,

  /**
   * @brief MFD5.
   *
   *  5 inch GEN1.1 display 
   */
  MFD5,

  /**
   * @brief GEN3_8_INCH.
   */
  GEN3_8_INCH,

  /**
   * @brief SDL_GENERIC.
   */
  SDL_GENERIC
};
} // Common_DisplayType

namespace Common_ImageType {
/**
 * @brief Enumeration Common_ImageType.
 *
 * Contains information about the type of image.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief STATIC.
   */
  STATIC,

  /**
   * @brief DYNAMIC.
   */
  DYNAMIC
};
} // Common_ImageType

namespace Common_ApplicationExitReason {
/**
 * @brief Enumeration Common_ApplicationExitReason.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DRIVER_DISTRACTION_VIOLATION.
   *
   * By getting this value, SDL puts the named app to NONE HMILevel
   */
  DRIVER_DISTRACTION_VIOLATION,

  /**
   * @brief USER_EXIT.
   *
   * By getting this value, SDL puts the named app to NONE HMILevel
   */
  USER_EXIT,

  /**
   * @brief UNAUTHORIZED_TRANSPORT_REGISTRATION.
   *
   * By getting this value, SDL unregisters the named application
   */
  UNAUTHORIZED_TRANSPORT_REGISTRATION,

  /**
   * @brief UNSUPPORTED_HMI_RESOURCE.
   *
   * By getting this value, SDL unregisters the named application
   */
  UNSUPPORTED_HMI_RESOURCE,

  /**
   * @brief CLOSE_CLOUD_CONNECTION.
   *
   * By getting this value, SDL puts the named app to NONE HMILevel. Used by the HMI to close a cloud app connection.
   */
  CLOSE_CLOUD_CONNECTION
};
} // Common_ApplicationExitReason

namespace Common_TextFieldName {
/**
 * @brief Enumeration Common_TextFieldName.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief mainField1.
   *
   * The first line of first set of main fields of the persistent display; applies to "Show"
   */
  mainField1,

  /**
   * @brief mainField2.
   *
   * The second line of first set of main fields of the persistent display; applies to "Show"
   */
  mainField2,

  /**
   * @brief mainField3.
   *
   * The first line of second set of main fields of persistent display; applies to "Show"
   */
  mainField3,

  /**
   * @brief mainField4.
   *
   * The second line of second set of main fields of the persistent display; applies to "Show"
   */
  mainField4,

  /**
   * @brief statusBar.
   *
   * The status bar on NGN; applies to "Show"
   */
  statusBar,

  /**
   * @brief mediaClock.
   *
   * Text value for MediaClock field; applies to "Show"
   */
  mediaClock,

  /**
   * @brief mediaTrack.
   *
   * The track field of NGN and GEN1.1 MFD displays. This field is only available for media applications; applies to "Show"
   */
  mediaTrack,

  /**
   * @brief alertText1.
   *
   * The first line of the alert text field; applies to "Alert"
   */
  alertText1,

  /**
   * @brief alertText2.
   *
   * The second line of the alert text field; applies to "Alert"
   */
  alertText2,

  /**
   * @brief alertText3.
   *
   * The third line of the alert text field; applies to "Alert"
   */
  alertText3,

  /**
   * @brief scrollableMessageBody.
   *
   * Long form body of text that can include newlines and tabs; applies to "ScrollableMessage"
   */
  scrollableMessageBody,

  /**
   * @brief initialInteractionText.
   *
   *  First line suggestion for a user response (in the case of VR enabled interaction
   */
  initialInteractionText,

  /**
   * @brief navigationText1.
   *
   *  First line of navigation text
   */
  navigationText1,

  /**
   * @brief navigationText2.
   *
   *  Second line of navigation text
   */
  navigationText2,

  /**
   * @brief ETA.
   *
   *  Estimated Time of Arrival time for navigation
   */
  ETA,

  /**
   * @brief totalDistance.
   *
   *  Total distance to destination for navigation
   */
  totalDistance,

  /**
   * @brief audioPassThruDisplayText1.
   *
   *  First line of text for audio pass thru
   */
  audioPassThruDisplayText1,

  /**
   * @brief audioPassThruDisplayText2.
   *
   *  Second line of text for audio pass thru
   */
  audioPassThruDisplayText2,

  /**
   * @brief sliderHeader.
   *
   *  Header text for slider
   */
  sliderHeader,

  /**
   * @brief sliderFooter.
   *
   *  Footer text for slider
   */
  sliderFooter,

  /**
   * @brief menuName.
   *
   *  Primary text for Choice
   */
  menuName,

  /**
   * @brief secondaryText.
   *
   *  Secondary text for Choice
   */
  secondaryText,

  /**
   * @brief tertiaryText.
   *
   *  Tertiary text for Choice
   */
  tertiaryText,

  /**
   * @brief menuTitle.
   *
   *  Optional text to label an app menu button (for certain touchscreen platforms).
   */
  menuTitle,

  /**
   * @brief navigationText.
   *
   * Navigation text for UpdateTurnList.
   */
  navigationText,

  /**
   * @brief notificationText.
   *
   * Text of notification to be displayed on screen.
   */
  notificationText,

  /**
   * @brief locationName.
   *
   *  Optional name / title of intended location for SendLocation.
   */
  locationName,

  /**
   * @brief locationDescription.
   *
   *  Optional description of intended location / establishment (if applicable) for SendLocation.
   */
  locationDescription,

  /**
   * @brief addressLines.
   *
   *  Optional location address (if applicable) for SendLocation.
   */
  addressLines,

  /**
   * @brief phoneNumber.
   *
   *  Optional hone number of intended location / establishment (if applicable) for SendLocation.
   */
  phoneNumber,

  /**
   * @brief timeToDestination.
   */
  timeToDestination,

  /**
   * @brief turnText.
   */
  turnText
};
} // Common_TextFieldName

namespace Common_MetadataType {
/**
 * @brief Enumeration Common_MetadataType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief mediaTitle.
   *
   * The data in this field contains the title of the currently playing audio track.
   */
  mediaTitle,

  /**
   * @brief mediaArtist.
   *
   * The data in this field contains the artist or creator of the currently playing audio track.
   */
  mediaArtist,

  /**
   * @brief mediaAlbum.
   *
   * The data in this field contains the album title of the currently playing audio track.
   */
  mediaAlbum,

  /**
   * @brief mediaYear.
   *
   * The data in this field contains the creation year of the currently playing audio track.
   */
  mediaYear,

  /**
   * @brief mediaGenre.
   *
   * The data in this field contains the genre of the currently playing audio track.
   */
  mediaGenre,

  /**
   * @brief mediaStation.
   *
   * The data in this field contains the name of the current source for the media.
   */
  mediaStation,

  /**
   * @brief rating.
   *
   * The data in this field is a rating.
   */
  rating,

  /**
   * @brief currentTemperature.
   *
   * The data in this field is the current temperature.
   */
  currentTemperature,

  /**
   * @brief maximumTemperature.
   *
   * The data in this field is the maximum temperature for the day.
   */
  maximumTemperature,

  /**
   * @brief minimumTemperature.
   *
   * The data in this field is the minimum temperature for the day.
   */
  minimumTemperature,

  /**
   * @brief weatherTerm.
   *
   * The data in this field describes the current weather (ex. cloudy, clear, etc.).
   */
  weatherTerm,

  /**
   * @brief humidity.
   *
   * The data in this field describes the current humidity value.
   */
  humidity
};
} // Common_MetadataType

namespace Common_ImageFieldName {
/**
 * @brief Enumeration Common_ImageFieldName.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief softButtonImage.
   *
   * The image field for SoftButton
   */
  softButtonImage,

  /**
   * @brief choiceImage.
   *
   * The first image field for Choice
   */
  choiceImage,

  /**
   * @brief choiceSecondaryImage.
   *
   * The secondary image field for Choice
   */
  choiceSecondaryImage,

  /**
   * @brief vrHelpItem.
   *
   * The image field for vrHelpItem
   */
  vrHelpItem,

  /**
   * @brief turnIcon.
   *
   * The image field for Turn
   */
  turnIcon,

  /**
   * @brief menuIcon.
   *
   * The image field for the menu icon in SetGlobalProperties
   */
  menuIcon,

  /**
   * @brief cmdIcon.
   *
   * The image field for AddCommand
   */
  cmdIcon,

  /**
   * @brief appIcon.
   *
   * The image field for the app icon (set by setAppIcon)
   */
  appIcon,

  /**
   * @brief graphic.
   *
   * The primary image field for Show
   */
  graphic,

  /**
   * @brief secondaryGraphic.
   *
   * The secondary image field for Show
   */
  secondaryGraphic,

  /**
   * @brief showConstantTBTIcon.
   *
   * The primary image field for ShowConstantTBT
   */
  showConstantTBTIcon,

  /**
   * @brief showConstantTBTNextTurnIcon.
   *
   * The secondary image field for ShowConstantTBT
   */
  showConstantTBTNextTurnIcon,

  /**
   * @brief locationImage.
   *
   * The optional image of a destination / location
   */
  locationImage
};
} // Common_ImageFieldName

namespace Common_TextAlignment {
/**
 * @brief Enumeration Common_TextAlignment.
 *
 * The list of possible alignments, left, right, or centered
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief LEFT_ALIGNED.
   */
  LEFT_ALIGNED,

  /**
   * @brief RIGHT_ALIGNED.
   */
  RIGHT_ALIGNED,

  /**
   * @brief CENTERED.
   */
  CENTERED
};
} // Common_TextAlignment

namespace Common_DriverDistractionState {
/**
 * @brief Enumeration Common_DriverDistractionState.
 *
 * Enumeration that describes possible states of driver distraction.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DD_ON.
   */
  DD_ON,

  /**
   * @brief DD_OFF.
   */
  DD_OFF
};
} // Common_DriverDistractionState

namespace Common_EmergencyState {
/**
 * @brief Enumeration Common_EmergencyState.
 *
 * Enumeration that describes possible states of emergency event.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief EMERGENCY_ON.
   */
  EMERGENCY_ON,

  /**
   * @brief EMERGENCY_OFF.
   */
  EMERGENCY_OFF
};
} // Common_EmergencyState

namespace Common_MediaClockFormat {
/**
 * @brief Enumeration Common_MediaClockFormat.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CLOCK1.
   *
   * 
   *       minutesFieldWidth = 2;minutesFieldMax = 19;secondsFieldWidth = 2;secondsFieldMax = 99;maxHours = 19;maxMinutes = 59;maxSeconds = 59;
   *       Is used for Type II, NGN and CID head units.
   *     
   */
  CLOCK1,

  /**
   * @brief CLOCK2.
   *
   * 
   *       minutesFieldWidth = 3;minutesFieldMax = 199;secondsFieldWidth = 2;secondsFieldMax = 99;maxHours = 59;maxMinutes = 59;maxSeconds = 59;
   *     Is used for Type V head units.
   *     
   */
  CLOCK2,

  /**
   * @brief CLOCK3.
   *
   * 
   *       minutesFieldWidth = 2;minutesFieldMax = 59;secondsFieldWidth = 2;secondsFieldMax = 59;maxHours = 9;maxMinutes = 59;maxSeconds = 59;
   *     Is used for GEN1.1 (i.e. MFD3/4/5) head units.
   *     
   */
  CLOCK3,

  /**
   * @brief CLOCKTEXT1.
   *
   * 
   *       5 characters possible
   *       Format:      1|sp   c   :|sp   c   c
   *       1|sp : digit "1" or space
   *       c    : character out of following character set: sp|0-9|[letters
   *       :|sp : colon or space
   *     Is used for Type II head unit
   *     
   */
  CLOCKTEXT1,

  /**
   * @brief CLOCKTEXT2.
   *
   * 
   *       5 chars possible
   *       Format:      1|sp   c   :|sp   c   c
   *       1|sp : digit "1" or space
   *       c    : character out of following character set: sp|0-9|[letters
   *       :|sp : colon or space
   *     Is used for CID and NGN head unit
   *     
   */
  CLOCKTEXT2,

  /**
   * @brief CLOCKTEXT3.
   *
   * 
   *       6 chars possible
   *       Format:      1|sp   c   c   :|sp   c   c
   *       1|sp : digit "1" or space
   *       c    : character out of following character set: sp|0-9|[letters
   *       :|sp : colon or space
   *     Is used for Type V head unit
   *   
   */
  CLOCKTEXT3,

  /**
   * @brief CLOCKTEXT4.
   *
   * 
   *       6 chars possible
   *       Format:      c   :|sp   c   c   :   c   c
   *       :|sp : colon or space
   *       c    : character out of following character set: sp|0-9|[letters].
   *     Is used for GEN1.1 (i.e. MFD3/4/5) head units
   *   
   */
  CLOCKTEXT4
};
} // Common_MediaClockFormat

namespace Common_VRCommandType {
/**
 * @brief Enumeration Common_VRCommandType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief Choice.
   *
   * Type that expound that current AddCommand should be pocessed as choise for initiated PerformInteraction request for current active on HMI.
   */
  Choice,

  /**
   * @brief Command.
   *
   * Type that expound that current AddCommand should be pocessed as common command for current application on HMI.
   */
  Command
};
} // Common_VRCommandType

namespace Common_ElectronicParkBrakeStatus {
/**
 * @brief Enumeration Common_ElectronicParkBrakeStatus.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CLOSED.
   *
   * 
   *       Park brake actuators have been fully applied.
   *     
   */
  CLOSED,

  /**
   * @brief TRANSITION.
   *
   * 
   *       Park brake actuators are transitioning to either Apply/Closed or Release/Open state.
   *     
   */
  TRANSITION,

  /**
   * @brief OPEN.
   *
   * 
   *       Park brake actuators are released.
   *     
   */
  OPEN,

  /**
   * @brief DRIVE_ACTIVE.
   *
   * 
   *       When driver pulls the Electronic Park Brake switch while driving "at speed".
   *     
   */
  DRIVE_ACTIVE,

  /**
   * @brief FAULT.
   *
   * 
   *       When system has a fault or is under maintenance.
   *     
   */
  FAULT
};
} // Common_ElectronicParkBrakeStatus

namespace Common_FuelType {
/**
 * @brief Enumeration Common_FuelType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief GASOLINE.
   */
  GASOLINE,

  /**
   * @brief DIESEL.
   */
  DIESEL,

  /**
   * @brief CNG.
   *
   * 
   *             For vehicles using compressed natural gas.
   *         
   */
  CNG,

  /**
   * @brief LPG.
   *
   * 
   *             For vehicles using liquefied petroleum gas.
   *         
   */
  LPG,

  /**
   * @brief HYDROGEN.
   *
   * For FCEV (fuel cell electric vehicle).
   */
  HYDROGEN,

  /**
   * @brief BATTERY.
   *
   * For BEV (Battery Electric Vehicle), PHEV (Plug-in Hybrid Electric Vehicle), solar vehicles and other vehicles which run on a battery.
   */
  BATTERY
};
} // Common_FuelType

namespace Common_ComponentVolumeStatus {
/**
 * @brief Enumeration Common_ComponentVolumeStatus.
 *
 * The volume status of a vehicle component.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CVS_UNKNOWN.
   *
   *  The data is unknown.
   */
  CVS_UNKNOWN,

  /**
   * @brief CVS_NORMAL.
   *
   *  The volume is normal.
   */
  CVS_NORMAL,

  /**
   * @brief CVS_LOW.
   *
   *  The volume is low.
   */
  CVS_LOW,

  /**
   * @brief CVS_FAULT.
   *
   *  The module/sensor is currently faulted. 
   */
  CVS_FAULT,

  /**
   * @brief CVS_ALERT.
   *
   *  The component`s volume is in critical level.
   */
  CVS_ALERT,

  /**
   * @brief CVS_NOT_SUPPORTED.
   *
   *  The data is not supported.
   */
  CVS_NOT_SUPPORTED
};
} // Common_ComponentVolumeStatus

namespace Common_TPMS {
/**
 * @brief Enumeration Common_TPMS.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UNKNOWN.
   *
   * If set the status of the tire is not known.
   */
  UNKNOWN,

  /**
   * @brief SYSTEM_FAULT.
   *
   * TPMS does not function.
   */
  SYSTEM_FAULT,

  /**
   * @brief SENSOR_FAULT.
   *
   * The sensor of the tire does not function.
   */
  SENSOR_FAULT,

  /**
   * @brief LOW.
   *
   * TPMS is reporting a low tire pressure for the tire.
   */
  LOW,

  /**
   * @brief SYSTEM_ACTIVE.
   *
   * TPMS is active and the tire pressure is monitored.
   */
  SYSTEM_ACTIVE,

  /**
   * @brief TRAIN.
   *
   * TPMS is reporting that the tire must be trained.
   */
  TRAIN,

  /**
   * @brief TRAINING_COMPLETE.
   *
   * TPMS reports the training for the tire is completed.
   */
  TRAINING_COMPLETE,

  /**
   * @brief NOT_TRAINED.
   *
   * TPMS reports the tire is not trained.
   */
  NOT_TRAINED
};
} // Common_TPMS

namespace Common_PRNDL {
/**
 * @brief Enumeration Common_PRNDL.
 *
 * The selected gear.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PARK.
   *
   * Parking
   */
  PARK,

  /**
   * @brief REVERSE.
   *
   * Reverse gear
   */
  REVERSE,

  /**
   * @brief NEUTRAL.
   *
   * No gear
   */
  NEUTRAL,

  /**
   * @brief DRIVE.
   */
  DRIVE,

  /**
   * @brief SPORT.
   *
   * Drive Sport mode
   */
  SPORT,

  /**
   * @brief LOWGEAR.
   *
   * 1st gear hold
   */
  LOWGEAR,

  /**
   * @brief FIRST.
   */
  FIRST,

  /**
   * @brief SECOND.
   */
  SECOND,

  /**
   * @brief THIRD.
   */
  THIRD,

  /**
   * @brief FOURTH.
   */
  FOURTH,

  /**
   * @brief FIFTH.
   */
  FIFTH,

  /**
   * @brief SIXTH.
   */
  SIXTH,

  /**
   * @brief SEVENTH.
   */
  SEVENTH,

  /**
   * @brief EIGHTH.
   */
  EIGHTH,

  /**
   * @brief UNKNOWN.
   */
  UNKNOWN,

  /**
   * @brief FAULT.
   */
  FAULT
};
} // Common_PRNDL

namespace Common_VehicleDataEventStatus {
/**
 * @brief Enumeration Common_VehicleDataEventStatus.
 *
 * Reflects the status of a vehicle data event; e.g. a seat belt event status.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VDES_NO_EVENT.
   *
   *  The system does not have the adequate information to send valid YES or NO states.
   */
  VDES_NO_EVENT,

  /**
   * @brief VDES_NO.
   *
   *  The requested event is in NO state.
   */
  VDES_NO,

  /**
   * @brief VDES_YES.
   *
   *  The requested event is in YES state.
   */
  VDES_YES,

  /**
   * @brief VDES_NOT_SUPPORTED.
   *
   *  The requested data is not supported 
   */
  VDES_NOT_SUPPORTED,

  /**
   * @brief VDES_FAULT.
   *
   *  The module/sensor is currently faulted.
   */
  VDES_FAULT
};
} // Common_VehicleDataEventStatus

namespace Common_VehicleDataStatus {
/**
 * @brief Enumeration Common_VehicleDataStatus.
 *
 * Reflects the status of a binary vehicle data item.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VDS_NO_DATA_EXISTS.
   */
  VDS_NO_DATA_EXISTS,

  /**
   * @brief VDS_OFF.
   */
  VDS_OFF,

  /**
   * @brief VDS_ON.
   */
  VDS_ON
};
} // Common_VehicleDataStatus

namespace Common_IgnitionStableStatus {
/**
 * @brief Enumeration Common_IgnitionStableStatus.
 *
 * Reflects the ignition switch stability.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief IGNITION_SWITCH_NOT_STABLE.
   */
  IGNITION_SWITCH_NOT_STABLE,

  /**
   * @brief IGNITION_SWITCH_STABLE.
   */
  IGNITION_SWITCH_STABLE,

  /**
   * @brief MISSING_FROM_TRANSMITTER.
   *
   *  Either the data is not accessible or the sensor is broken.
   */
  MISSING_FROM_TRANSMITTER
};
} // Common_IgnitionStableStatus

namespace Common_IgnitionStatus {
/**
 * @brief Enumeration Common_IgnitionStatus.
 *
 * Reflects the status of ignition.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief IS_UNKNOWN.
   *
   *  The information is not acceptable. 
   */
  IS_UNKNOWN,

  /**
   * @brief IS_OFF.
   *
   *  The ignition is off.
   */
  IS_OFF,

  /**
   * @brief IS_ACCESSORY.
   *
   *  The accessories are active (power windows, audio, display, etc.).
   */
  IS_ACCESSORY,

  /**
   * @brief IS_RUN.
   *
   *  Ignition is active.
   */
  IS_RUN,

  /**
   * @brief IS_START.
   *
   *  Starter is switched.
   */
  IS_START,

  /**
   * @brief IS_INVALID.
   *
   *  The data is provided, but there is some sort of fault or problem.
   */
  IS_INVALID
};
} // Common_IgnitionStatus

namespace Common_DeviceLevelStatus {
/**
 * @brief Enumeration Common_DeviceLevelStatus.
 *
 * Reflects the reported component status of the connected device, if reported.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ZERO_LEVEL_BARS.
   */
  ZERO_LEVEL_BARS,

  /**
   * @brief ONE_LEVEL_BARS.
   */
  ONE_LEVEL_BARS,

  /**
   * @brief TWO_LEVEL_BARS.
   */
  TWO_LEVEL_BARS,

  /**
   * @brief THREE_LEVEL_BARS.
   */
  THREE_LEVEL_BARS,

  /**
   * @brief FOUR_LEVEL_BARS.
   */
  FOUR_LEVEL_BARS,

  /**
   * @brief NOT_PROVIDED.
   */
  NOT_PROVIDED
};
} // Common_DeviceLevelStatus

namespace Common_PrimaryAudioSource {
/**
 * @brief Enumeration Common_PrimaryAudioSource.
 *
 * Reflects the current primary audio source (if selected).
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief NO_SOURCE_SELECTED.
   */
  NO_SOURCE_SELECTED,

  /**
   * @brief CD.
   */
  CD,

  /**
   * @brief USB.
   */
  USB,

  /**
   * @brief USB2.
   */
  USB2,

  /**
   * @brief BLUETOOTH_STEREO_BTST.
   */
  BLUETOOTH_STEREO_BTST,

  /**
   * @brief LINE_IN.
   */
  LINE_IN,

  /**
   * @brief IPOD.
   */
  IPOD,

  /**
   * @brief MOBILE_APP.
   */
  MOBILE_APP,

  /**
   * @brief AM.
   */
  AM,

  /**
   * @brief FM.
   */
  FM,

  /**
   * @brief XM.
   */
  XM,

  /**
   * @brief DAB.
   */
  DAB
};
} // Common_PrimaryAudioSource

namespace Common_CompassDirection {
/**
 * @brief Enumeration Common_CompassDirection.
 *
 * The list of potential compass directions
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief NORTH.
   */
  NORTH,

  /**
   * @brief NORTHWEST.
   */
  NORTHWEST,

  /**
   * @brief WEST.
   */
  WEST,

  /**
   * @brief SOUTHWEST.
   */
  SOUTHWEST,

  /**
   * @brief SOUTH.
   */
  SOUTH,

  /**
   * @brief SOUTHEAST.
   */
  SOUTHEAST,

  /**
   * @brief EAST.
   */
  EAST,

  /**
   * @brief NORTHEAST.
   */
  NORTHEAST
};
} // Common_CompassDirection

namespace Common_Dimension {
/**
 * @brief Enumeration Common_Dimension.
 *
 * The supported dimensions of the GPS
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief Dimension_NO_FIX.
   *
   * No GPS at all
   */
  Dimension_NO_FIX,

  /**
   * @brief Dimension_2D.
   *
   * Longitude and lattitude
   */
  Dimension_2D,

  /**
   * @brief Dimension_3D.
   *
   * Longitude and lattitude and altitude
   */
  Dimension_3D
};
} // Common_Dimension

namespace Common_TouchType {
/**
 * @brief Enumeration Common_TouchType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief BEGIN.
   */
  BEGIN,

  /**
   * @brief MOVE.
   */
  MOVE,

  /**
   * @brief END.
   */
  END,

  /**
   * @brief CANCEL.
   */
  CANCEL
};
} // Common_TouchType

namespace Common_WarningLightStatus {
/**
 * @brief Enumeration Common_WarningLightStatus.
 *
 * Reflects the status of a cluster instrument warning light.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief WLS_OFF.
   */
  WLS_OFF,

  /**
   * @brief WLS_ON.
   */
  WLS_ON,

  /**
   * @brief WLS_FLASH.
   */
  WLS_FLASH,

  /**
   * @brief WLS_NOT_USED.
   */
  WLS_NOT_USED
};
} // Common_WarningLightStatus

namespace Common_VehicleDataResultCode {
/**
 * @brief Enumeration Common_VehicleDataResultCode.
 *
 * Enumeration that describes possible result codes of a vehicle data entry request.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VDRC_SUCCESS.
   */
  VDRC_SUCCESS,

  /**
   * @brief VDRC_TRUNCATED_DATA.
   */
  VDRC_TRUNCATED_DATA,

  /**
   * @brief VDRC_DISALLOWED.
   */
  VDRC_DISALLOWED,

  /**
   * @brief VDRC_USER_DISALLOWED.
   */
  VDRC_USER_DISALLOWED,

  /**
   * @brief VDRC_INVALID_ID.
   */
  VDRC_INVALID_ID,

  /**
   * @brief VDRC_DATA_NOT_AVAILABLE.
   */
  VDRC_DATA_NOT_AVAILABLE,

  /**
   * @brief VDRC_DATA_ALREADY_SUBSCRIBED.
   */
  VDRC_DATA_ALREADY_SUBSCRIBED,

  /**
   * @brief VDRC_DATA_NOT_SUBSCRIBED.
   */
  VDRC_DATA_NOT_SUBSCRIBED,

  /**
   * @brief VDRC_IGNORED.
   */
  VDRC_IGNORED
};
} // Common_VehicleDataResultCode

namespace Common_VehicleDataType {
/**
 * @brief Enumeration Common_VehicleDataType.
 *
 * Defines the data types that can be published and subscribed to.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VEHICLEDATA_GPS.
   *
   * Notifies GPSData may be subscribed
   */
  VEHICLEDATA_GPS,

  /**
   * @brief VEHICLEDATA_SPEED.
   */
  VEHICLEDATA_SPEED,

  /**
   * @brief VEHICLEDATA_RPM.
   */
  VEHICLEDATA_RPM,

  /**
   * @brief VEHICLEDATA_FUELLEVEL.
   */
  VEHICLEDATA_FUELLEVEL,

  /**
   * @brief VEHICLEDATA_FUELLEVEL_STATE.
   */
  VEHICLEDATA_FUELLEVEL_STATE,

  /**
   * @brief VEHICLEDATA_FUELCONSUMPTION.
   */
  VEHICLEDATA_FUELCONSUMPTION,

  /**
   * @brief VEHICLEDATA_EXTERNTEMP.
   */
  VEHICLEDATA_EXTERNTEMP,

  /**
   * @brief VEHICLEDATA_VIN.
   */
  VEHICLEDATA_VIN,

  /**
   * @brief VEHICLEDATA_PRNDL.
   */
  VEHICLEDATA_PRNDL,

  /**
   * @brief VEHICLEDATA_TIREPRESSURE.
   */
  VEHICLEDATA_TIREPRESSURE,

  /**
   * @brief VEHICLEDATA_ODOMETER.
   */
  VEHICLEDATA_ODOMETER,

  /**
   * @brief VEHICLEDATA_BELTSTATUS.
   */
  VEHICLEDATA_BELTSTATUS,

  /**
   * @brief VEHICLEDATA_BODYINFO.
   */
  VEHICLEDATA_BODYINFO,

  /**
   * @brief VEHICLEDATA_DEVICESTATUS.
   */
  VEHICLEDATA_DEVICESTATUS,

  /**
   * @brief VEHICLEDATA_ECALLINFO.
   */
  VEHICLEDATA_ECALLINFO,

  /**
   * @brief VEHICLEDATA_AIRBAGSTATUS.
   */
  VEHICLEDATA_AIRBAGSTATUS,

  /**
   * @brief VEHICLEDATA_EMERGENCYEVENT.
   */
  VEHICLEDATA_EMERGENCYEVENT,

  /**
   * @brief VEHICLEDATA_CLUSTERMODESTATUS.
   */
  VEHICLEDATA_CLUSTERMODESTATUS,

  /**
   * @brief VEHICLEDATA_MYKEY.
   */
  VEHICLEDATA_MYKEY,

  /**
   * @brief VEHICLEDATA_BRAKING.
   */
  VEHICLEDATA_BRAKING,

  /**
   * @brief VEHICLEDATA_WIPERSTATUS.
   */
  VEHICLEDATA_WIPERSTATUS,

  /**
   * @brief VEHICLEDATA_HEADLAMPSTATUS.
   */
  VEHICLEDATA_HEADLAMPSTATUS,

  /**
   * @brief VEHICLEDATA_BATTVOLTAGE.
   */
  VEHICLEDATA_BATTVOLTAGE,

  /**
   * @brief VEHICLEDATA_ENGINETORQUE.
   */
  VEHICLEDATA_ENGINETORQUE,

  /**
   * @brief VEHICLEDATA_ACCPEDAL.
   */
  VEHICLEDATA_ACCPEDAL,

  /**
   * @brief VEHICLEDATA_STEERINGWHEEL.
   */
  VEHICLEDATA_STEERINGWHEEL,

  /**
   * @brief VEHICLEDATA_TURNSIGNAL.
   */
  VEHICLEDATA_TURNSIGNAL,

  /**
   * @brief VEHICLEDATA_FUELRANGE.
   */
  VEHICLEDATA_FUELRANGE,

  /**
   * @brief VEHICLEDATA_ENGINEOILLIFE.
   */
  VEHICLEDATA_ENGINEOILLIFE,

  /**
   * @brief VEHICLEDATA_ELECTRONICPARKBRAKESTATUS.
   */
  VEHICLEDATA_ELECTRONICPARKBRAKESTATUS,

  /**
   * @brief VEHICLEDATA_CLOUDAPPVEHICLEID.
   */
  VEHICLEDATA_CLOUDAPPVEHICLEID
};
} // Common_VehicleDataType

namespace Common_WiperStatus {
/**
 * @brief Enumeration Common_WiperStatus.
 *
 * Reflects the status of the wipers.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief OFF.
   *
   *  The wipers are off.
   */
  OFF,

  /**
   * @brief AUTO_OFF.
   *
   *  The wipers are automatically off 
   */
  AUTO_OFF,

  /**
   * @brief OFF_MOVING.
   *
   *  Means that though set to off, somehow the wipers have been engaged (physically moved enough to engage a wiping motion).
   */
  OFF_MOVING,

  /**
   * @brief MAN_INT_OFF.
   *
   *  The wipers are manually off after having been working.
   */
  MAN_INT_OFF,

  /**
   * @brief MAN_INT_ON.
   *
   *  The wipers are manually on.
   */
  MAN_INT_ON,

  /**
   * @brief MAN_LOW.
   *
   *  The wipers are manually set to low speed.
   */
  MAN_LOW,

  /**
   * @brief MAN_HIGH.
   *
   *  The wipers are manually set to high speed.
   */
  MAN_HIGH,

  /**
   * @brief MAN_FLICK.
   *
   *  The wipers are manually set for doing a flick.
   */
  MAN_FLICK,

  /**
   * @brief WASH.
   *
   *  The wipers are set to use the water from vehicle washer bottle for cleaning the windscreen.
   */
  WASH,

  /**
   * @brief AUTO_LOW.
   *
   *  The wipers are automatically set to low speed.
   */
  AUTO_LOW,

  /**
   * @brief AUTO_HIGH.
   *
   *  The wipers are automatically set to high speed.
   */
  AUTO_HIGH,

  /**
   * @brief COURTESYWIPE.
   *
   *  This is for when a user has just initiated a WASH and several seconds later a secondary wipe is automatically initiated to clear remaining fluid.
   */
  COURTESYWIPE,

  /**
   * @brief AUTO_ADJUST.
   *
   *  This is set as the user moves between possible automatic wiper speeds.
   */
  AUTO_ADJUST,

  /**
   * @brief STALLED.
   *
   *  The wiper is stalled to its place. 
   */
  STALLED,

  /**
   * @brief NO_DATA_EXISTS.
   *
   *  The sensor / module cannot provide any information for wiper.
   */
  NO_DATA_EXISTS
};
} // Common_WiperStatus

namespace Common_SamplingRate {
/**
 * @brief Enumeration Common_SamplingRate.
 *
 * Describes different sampling options for PerformAudioPassThru.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief RATE_8KHZ.
   *
   * Sampling rate of 8000 Hz.
   */
  RATE_8KHZ,

  /**
   * @brief RATE_16KHZ.
   *
   * Sampling rate of 16000 Hz.
   */
  RATE_16KHZ,

  /**
   * @brief RATE_22KHZ.
   *
   * Sampling rate of 22050 Hz.
   */
  RATE_22KHZ,

  /**
   * @brief RATE_44KHZ.
   *
   * Sampling rate of 44100 Hz.
   */
  RATE_44KHZ
};
} // Common_SamplingRate

namespace Common_BitsPerSample {
/**
 * @brief Enumeration Common_BitsPerSample.
 *
 * Describes different quality options for PerformAudioPassThru.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief RATE_8_BIT.
   *
   * Audio sample is 8 bits wide, unsigned.
   */
  RATE_8_BIT,

  /**
   * @brief RATE_16_BIT.
   *
   * Audio sample is 16 bits wide, signed, and in little endian.
   */
  RATE_16_BIT
};
} // Common_BitsPerSample

namespace Common_AudioType {
/**
 * @brief Enumeration Common_AudioType.
 *
 * Describes different audio type options for PerformAudioPassThru.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PCM.
   *
   * Linear PCM.
   */
  PCM
};
} // Common_AudioType

namespace Common_KeyboardLayout {
/**
 * @brief Enumeration Common_KeyboardLayout.
 *
 * Enumeration listing possible keyboard layouts.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief QWERTY.
   */
  QWERTY,

  /**
   * @brief QWERTZ.
   */
  QWERTZ,

  /**
   * @brief AZERTY.
   */
  AZERTY
};
} // Common_KeyboardLayout

namespace Common_KeyboardEvent {
/**
 * @brief Enumeration Common_KeyboardEvent.
 *
 * Enumeration listing possible keyboard events.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief KEYPRESS.
   */
  KEYPRESS,

  /**
   * @brief ENTRY_SUBMITTED.
   */
  ENTRY_SUBMITTED,

  /**
   * @brief ENTRY_VOICE.
   */
  ENTRY_VOICE,

  /**
   * @brief ENTRY_CANCELLED.
   */
  ENTRY_CANCELLED,

  /**
   * @brief ENTRY_ABORTED.
   */
  ENTRY_ABORTED
};
} // Common_KeyboardEvent

namespace Common_KeypressMode {
/**
 * @brief Enumeration Common_KeypressMode.
 *
 * Enumeration listing possible keyboard events.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SINGLE_KEYPRESS.
   *
   * Each keypress is individually sent as the user presses the keyboard keys.
   */
  SINGLE_KEYPRESS,

  /**
   * @brief QUEUE_KEYPRESSES.
   *
   * The keypresses are queued and a string is eventually sent once the user chooses to submit their entry.
   */
  QUEUE_KEYPRESSES,

  /**
   * @brief RESEND_CURRENT_ENTRY.
   *
   * The keypresses are queue and a string is sent each time the user presses a keyboard key; the string contains the entire current entry.
   */
  RESEND_CURRENT_ENTRY
};
} // Common_KeypressMode

namespace Common_AmbientLightStatus {
/**
 * @brief Enumeration Common_AmbientLightStatus.
 *
 * Reflects the status of the ambient light sensor.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief NIGHT.
   */
  NIGHT,

  /**
   * @brief TWILIGHT_1.
   */
  TWILIGHT_1,

  /**
   * @brief TWILIGHT_2.
   */
  TWILIGHT_2,

  /**
   * @brief TWILIGHT_3.
   */
  TWILIGHT_3,

  /**
   * @brief TWILIGHT_4.
   */
  TWILIGHT_4,

  /**
   * @brief DAY.
   */
  DAY,

  /**
   * @brief UNKNOWN.
   */
  UNKNOWN,

  /**
   * @brief INVALID.
   */
  INVALID
};
} // Common_AmbientLightStatus

namespace Common_FileType {
/**
 * @brief Enumeration Common_FileType.
 *
 * Enumeration listing possible file types.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief GRAPHIC_BMP.
   */
  GRAPHIC_BMP,

  /**
   * @brief GRAPHIC_JPEG.
   */
  GRAPHIC_JPEG,

  /**
   * @brief GRAPHIC_PNG.
   */
  GRAPHIC_PNG,

  /**
   * @brief AUDIO_WAVE.
   */
  AUDIO_WAVE,

  /**
   * @brief AUDIO_MP3.
   */
  AUDIO_MP3,

  /**
   * @brief AUDIO_AAC.
   */
  AUDIO_AAC,

  /**
   * @brief BINARY.
   */
  BINARY,

  /**
   * @brief JSON.
   */
  JSON
};
} // Common_FileType

namespace Common_RequestType {
/**
 * @brief Enumeration Common_RequestType.
 *
 * Enumeration listing possible asynchronous requests.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief HTTP.
   */
  HTTP,

  /**
   * @brief FILE_RESUME.
   */
  FILE_RESUME,

  /**
   * @brief AUTH_REQUEST.
   */
  AUTH_REQUEST,

  /**
   * @brief AUTH_CHALLENGE.
   */
  AUTH_CHALLENGE,

  /**
   * @brief AUTH_ACK.
   */
  AUTH_ACK,

  /**
   * @brief PROPRIETARY.
   */
  PROPRIETARY,

  /**
   * @brief QUERY_APPS.
   */
  QUERY_APPS,

  /**
   * @brief LAUNCH_APP.
   */
  LAUNCH_APP,

  /**
   * @brief LOCK_SCREEN_ICON_URL.
   */
  LOCK_SCREEN_ICON_URL,

  /**
   * @brief TRAFFIC_MESSAGE_CHANNEL.
   */
  TRAFFIC_MESSAGE_CHANNEL,

  /**
   * @brief DRIVER_PROFILE.
   */
  DRIVER_PROFILE,

  /**
   * @brief VOICE_SEARCH.
   */
  VOICE_SEARCH,

  /**
   * @brief NAVIGATION.
   */
  NAVIGATION,

  /**
   * @brief PHONE.
   */
  PHONE,

  /**
   * @brief CLIMATE.
   */
  CLIMATE,

  /**
   * @brief SETTINGS.
   */
  SETTINGS,

  /**
   * @brief VEHICLE_DIAGNOSTICS.
   */
  VEHICLE_DIAGNOSTICS,

  /**
   * @brief EMERGENCY.
   */
  EMERGENCY,

  /**
   * @brief MEDIA.
   */
  MEDIA,

  /**
   * @brief FOTA.
   */
  FOTA,

  /**
   * @brief OEM_SPECIFIC.
   */
  OEM_SPECIFIC,

  /**
   * @brief ICON_URL.
   */
  ICON_URL
};
} // Common_RequestType

namespace Common_ECallConfirmationStatus {
/**
 * @brief Enumeration Common_ECallConfirmationStatus.
 *
 * Reflects the status of the eCall Notification.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ECCS_NORMAL.
   */
  ECCS_NORMAL,

  /**
   * @brief ECCS_CALL_IN_PROGRESS.
   */
  ECCS_CALL_IN_PROGRESS,

  /**
   * @brief ECCS_CALL_CANCELLED.
   */
  ECCS_CALL_CANCELLED,

  /**
   * @brief CALL_COMPLETED.
   */
  CALL_COMPLETED,

  /**
   * @brief ECCS_CALL_UNSUCCESSFUL.
   */
  ECCS_CALL_UNSUCCESSFUL,

  /**
   * @brief ECCS_ECALL_CONFIGURED_OFF.
   */
  ECCS_ECALL_CONFIGURED_OFF,

  /**
   * @brief ECCS_CALL_COMPLETE_DTMF_TIMEOUT.
   */
  ECCS_CALL_COMPLETE_DTMF_TIMEOUT
};
} // Common_ECallConfirmationStatus

namespace Common_VehicleDataNotificationStatus {
/**
 * @brief Enumeration Common_VehicleDataNotificationStatus.
 *
 * Reflects the status of a vehicle data notification.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VDNS_NOT_SUPPORTED.
   */
  VDNS_NOT_SUPPORTED,

  /**
   * @brief VDNS_NORMAL.
   */
  VDNS_NORMAL,

  /**
   * @brief VDNS_ACTIVE.
   */
  VDNS_ACTIVE,

  /**
   * @brief VDNS_NOT_USED.
   */
  VDNS_NOT_USED
};
} // Common_VehicleDataNotificationStatus

namespace Common_EmergencyEventType {
/**
 * @brief Enumeration Common_EmergencyEventType.
 *
 * Reflects the emergency event status of the vehicle.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief EET_NO_EVENT.
   */
  EET_NO_EVENT,

  /**
   * @brief EET_FRONTAL.
   */
  EET_FRONTAL,

  /**
   * @brief EET_SIDE.
   */
  EET_SIDE,

  /**
   * @brief EET_REAR.
   */
  EET_REAR,

  /**
   * @brief EET_ROLLOVER.
   */
  EET_ROLLOVER,

  /**
   * @brief EET_NOT_SUPPORTED.
   */
  EET_NOT_SUPPORTED,

  /**
   * @brief EET_FAULT.
   */
  EET_FAULT
};
} // Common_EmergencyEventType

namespace Common_FuelCutoffStatus {
/**
 * @brief Enumeration Common_FuelCutoffStatus.
 *
 * Reflects the status of the RCM fuel cutoff.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FCS_TERMINATE_FUEL.
   */
  FCS_TERMINATE_FUEL,

  /**
   * @brief FCS_NORMAL_OPERATION.
   */
  FCS_NORMAL_OPERATION,

  /**
   * @brief FCS_FAULT.
   */
  FCS_FAULT
};
} // Common_FuelCutoffStatus

namespace Common_PowerModeQualificationStatus {
/**
 * @brief Enumeration Common_PowerModeQualificationStatus.
 *
 * Reflects the status of the current power mode qualification.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief POWER_MODE_UNDEFINED.
   */
  POWER_MODE_UNDEFINED,

  /**
   * @brief POWER_MODE_EVALUATION_IN_PROGRESS.
   */
  POWER_MODE_EVALUATION_IN_PROGRESS,

  /**
   * @brief NOT_DEFINED.
   */
  NOT_DEFINED,

  /**
   * @brief POWER_MODE_OK.
   */
  POWER_MODE_OK
};
} // Common_PowerModeQualificationStatus

namespace Common_CarModeStatus {
/**
 * @brief Enumeration Common_CarModeStatus.
 *
 * Reflects the status of the current car mode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CMS_NORMAL.
   */
  CMS_NORMAL,

  /**
   * @brief CMS_FACTORY.
   */
  CMS_FACTORY,

  /**
   * @brief CMS_TRANSPORT.
   */
  CMS_TRANSPORT,

  /**
   * @brief CMS_CRASH.
   */
  CMS_CRASH
};
} // Common_CarModeStatus

namespace Common_PowerModeStatus {
/**
 * @brief Enumeration Common_PowerModeStatus.
 *
 * Reflects the status of the current power mode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief KEY_OUT.
   */
  KEY_OUT,

  /**
   * @brief KEY_RECENTLY_OUT.
   */
  KEY_RECENTLY_OUT,

  /**
   * @brief KEY_APPROVED_0.
   */
  KEY_APPROVED_0,

  /**
   * @brief POST_ACCESORY_0.
   */
  POST_ACCESORY_0,

  /**
   * @brief ACCESORY_1.
   */
  ACCESORY_1,

  /**
   * @brief POST_IGNITION_1.
   */
  POST_IGNITION_1,

  /**
   * @brief IGNITION_ON_2.
   */
  IGNITION_ON_2,

  /**
   * @brief RUNNING_2.
   */
  RUNNING_2,

  /**
   * @brief CRANK_3.
   */
  CRANK_3
};
} // Common_PowerModeStatus

namespace Common_CharacterSet {
/**
 * @brief Enumeration Common_CharacterSet.
 *
 * The list of potential character sets
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief TYPE2SET.
   *
   * See [@TODO: create file ref]
   */
  TYPE2SET,

  /**
   * @brief TYPE5SET.
   *
   * See [@TODO: create file ref]
   */
  TYPE5SET,

  /**
   * @brief CID1SET.
   *
   * See [@TODO: create file ref]
   */
  CID1SET,

  /**
   * @brief CID2SET.
   *
   * See [@TODO: create file ref]
   */
  CID2SET
};
} // Common_CharacterSet

namespace Common_AppPriority {
/**
 * @brief Enumeration Common_AppPriority.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief EMERGENCY.
   */
  EMERGENCY,

  /**
   * @brief NAVIGATION.
   */
  NAVIGATION,

  /**
   * @brief VOICE_COMMUNICATION.
   */
  VOICE_COMMUNICATION,

  /**
   * @brief COMMUNICATION.
   */
  COMMUNICATION,

  /**
   * @brief NORMAL.
   */
  NORMAL,

  /**
   * @brief NONE.
   */
  NONE
};
} // Common_AppPriority

namespace Common_MethodName {
/**
 * @brief Enumeration Common_MethodName.
 *
 * Defines the type of the request which causes text-to-speech prompt
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ALERT.
   */
  ALERT,

  /**
   * @brief SPEAK.
   */
  SPEAK,

  /**
   * @brief AUDIO_PASS_THRU.
   */
  AUDIO_PASS_THRU,

  /**
   * @brief ALERT_MANEUVER.
   */
  ALERT_MANEUVER
};
} // Common_MethodName

namespace Common_AlertType {
/**
 * @brief Enumeration Common_AlertType.
 *
 * Defines the type of the request which causes text-to-speech prompt
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UI.
   */
  UI,

  /**
   * @brief BOTH.
   */
  BOTH
};
} // Common_AlertType

namespace Common_HMILevel {
/**
 * @brief Enumeration Common_HMILevel.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FULL.
   */
  FULL,

  /**
   * @brief LIMITED.
   */
  LIMITED,

  /**
   * @brief BACKGROUND.
   */
  BACKGROUND,

  /**
   * @brief NONE.
   */
  NONE
};
} // Common_HMILevel

namespace Common_EventTypes {
/**
 * @brief Enumeration Common_EventTypes.
 *
 * Reflects the current active event
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief AUDIO_SOURCE.
   *
   * Navigated to audio(radio, etc)
   */
  AUDIO_SOURCE,

  /**
   * @brief EMBEDDED_NAVI.
   *
   * Navigated to navigation screen
   */
  EMBEDDED_NAVI,

  /**
   * @brief PHONE_CALL.
   *
   * Phone call is active
   */
  PHONE_CALL,

  /**
   * @brief EMERGENCY_EVENT.
   *
   * Active emergency event, active parking event
   */
  EMERGENCY_EVENT,

  /**
   * @brief DEACTIVATE_HMI.
   *
   *  GAL/DIO is active 
   */
  DEACTIVATE_HMI
};
} // Common_EventTypes

namespace Common_DeliveryMode {
/**
 * @brief Enumeration Common_DeliveryMode.
 *
 * The mode in which the SendLocation request is sent
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PROMPT.
   */
  PROMPT,

  /**
   * @brief DESTINATION.
   */
  DESTINATION,

  /**
   * @brief QUEUE.
   */
  QUEUE
};
} // Common_DeliveryMode

namespace Common_VideoStreamingProtocol {
/**
 * @brief Enumeration Common_VideoStreamingProtocol.
 *
 * Enum for each type of video streaming protocol type.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief RAW.
   *
   * 
   *       Raw stream bytes that contains no timestamp data and is the lowest supported video streaming
   *     
   */
  RAW,

  /**
   * @brief RTP.
   *
   * 
   *       RTP facilitates the transfer of real-time data. Information provided by this protocol include
   *       timestamps (for synchronization), sequence numbers (for packet loss and reordering detection)
   *       and the payload format which indicates the encoded format of the data.
   *     
   */
  RTP,

  /**
   * @brief RTSP.
   *
   * 
   *       The transmission of streaming data itself is not a task of RTSP. Most RTSP servers use the
   *       Real-time Transport Protocol (RTP) in conjunction with Real-time Control Protocol (RTCP)
   *       for media stream delivery. However, some vendors implement proprietary transport protocols.
   *     
   */
  RTSP,

  /**
   * @brief RTMP.
   *
   * 
   *       Real-Time Messaging Protocol (RTMP) was initially a proprietary protocol developed by
   *       Macromedia for streaming audio, video and data over the Internet, between a Flash player
   *       and a server. Macromedia is now owned by Adobe, which has released an incomplete version
   *       of the specification of the protocol for public use.
   *     
   */
  RTMP,

  /**
   * @brief WEBM.
   *
   * 
   *       The WebM container is based on a profile of Matroska. WebM initially supported VP8 video and
   *       Vorbis audio streams. In 2013 it was updated to accommodate VP9 video and Opus audio.
   *     
   */
  WEBM
};
} // Common_VideoStreamingProtocol

namespace Common_VideoStreamingCodec {
/**
 * @brief Enumeration Common_VideoStreamingCodec.
 *
 * Enum for each type of video streaming codec.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief H264.
   *
   * 
   *       A block-oriented motion-compensation-based video compression standard.
   *       As of 2014 it is one of the most commonly used formats for the recording, compression, and
   *       distribution of video content.
   *     
   */
  H264,

  /**
   * @brief H265.
   *
   * 
   *       High Efficiency Video Coding (HEVC), also known as H.265 and MPEG-H Part 2, is a video
   *       compression standard, one of several potential successors to the widely used AVC (H.264 or
   *       MPEG-4 Part 10). In comparison to AVC, HEVC offers about double the data compression ratio
   *       at the same level of video quality, or substantially improved video quality at the same
   *       bit rate. It supports resolutions up to 8192x4320, including 8K UHD.
   *     
   */
  H265,

  /**
   * @brief Theora.
   *
   * 
   *       Theora is derived from the formerly proprietary VP3 codec, released into the public domain
   *       by On2 Technologies. It is broadly comparable in design and bitrate efficiency to
   *       MPEG-4 Part 2, early versions of Windows Media Video, and RealVideo while lacking some of
   *       the features present in some of these other codecs. It is comparable in open standards
   *       philosophy to the BBC's Dirac codec.
   *     
   */
  Theora,

  /**
   * @brief VP8.
   *
   * 
   *       VP8 can be multiplexed into the Matroska-based container format WebM along with Vorbis and
   *       Opus audio. The image format WebP is based on VP8's intra-frame coding. VP8's direct
   *       successor, VP9, and the emerging royalty-free internet video format AV1 from the Alliance for
   *       Open Media (AOMedia) are based on VP8.
   *     
   */
  VP8,

  /**
   * @brief VP9.
   *
   * 
   *       Similar to VP8, but VP9 is customized for video resolutions beyond high-definition video (UHD)
   *       and also enables lossless compression.
   *     
   */
  VP9
};
} // Common_VideoStreamingCodec

namespace Common_UpdateResult {
/**
 * @brief Enumeration Common_UpdateResult.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UP_TO_DATE.
   */
  UP_TO_DATE,

  /**
   * @brief UPDATING.
   */
  UPDATING,

  /**
   * @brief UPDATE_NEEDED.
   */
  UPDATE_NEEDED
};
} // Common_UpdateResult

namespace Common_SystemError {
/**
 * @brief Enumeration Common_SystemError.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SYNC_REBOOTED.
   */
  SYNC_REBOOTED,

  /**
   * @brief SYNC_OUT_OF_MEMMORY.
   */
  SYNC_OUT_OF_MEMMORY
};
} // Common_SystemError

namespace Common_StatisticsType {
/**
 * @brief Enumeration Common_StatisticsType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief iAPP_BUFFER_FULL.
   */
  iAPP_BUFFER_FULL
};
} // Common_StatisticsType

namespace Common_ConsentSource {
/**
 * @brief Enumeration Common_ConsentSource.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief GUI.
   */
  GUI,

  /**
   * @brief VUI.
   */
  VUI
};
} // Common_ConsentSource

namespace Common_DeviceState {
/**
 * @brief Enumeration Common_DeviceState.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UNKNOWN.
   */
  UNKNOWN,

  /**
   * @brief UNPAIRED.
   */
  UNPAIRED
};
} // Common_DeviceState

namespace Common_EntityStatus {
/**
 * @brief Enumeration Common_EntityStatus.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ON.
   */
  ON,

  /**
   * @brief OFF.
   */
  OFF
};
} // Common_EntityStatus

namespace Common_ModuleType {
/**
 * @brief Enumeration Common_ModuleType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CLIMATE.
   */
  CLIMATE,

  /**
   * @brief RADIO.
   */
  RADIO,

  /**
   * @brief SEAT.
   */
  SEAT,

  /**
   * @brief AUDIO.
   */
  AUDIO,

  /**
   * @brief LIGHT.
   */
  LIGHT,

  /**
   * @brief HMI_SETTINGS.
   */
  HMI_SETTINGS
};
} // Common_ModuleType

namespace Common_MassageZone {
/**
 * @brief Enumeration Common_MassageZone.
 *
 * List possible zones of a multi-contour massage seat.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief LUMBAR.
   *
   * The back of a multi-contour massage seat. or SEAT_BACK
   */
  LUMBAR,

  /**
   * @brief SEAT_CUSHION.
   *
   * The bottom a multi-contour massage seat. or SEAT_BOTTOM 
   */
  SEAT_CUSHION
};
} // Common_MassageZone

namespace Common_MassageMode {
/**
 * @brief Enumeration Common_MassageMode.
 *
 * List possible modes of a massage zone.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief OFF.
   */
  OFF,

  /**
   * @brief LOW.
   */
  LOW,

  /**
   * @brief HIGH.
   */
  HIGH
};
} // Common_MassageMode

namespace Common_MassageCushion {
/**
 * @brief Enumeration Common_MassageCushion.
 *
 * List possible cushions of a multi-contour massage seat.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief TOP_LUMBAR.
   */
  TOP_LUMBAR,

  /**
   * @brief MIDDLE_LUMBAR.
   */
  MIDDLE_LUMBAR,

  /**
   * @brief BOTTOM_LUMBAR.
   */
  BOTTOM_LUMBAR,

  /**
   * @brief BACK_BOLSTERS.
   */
  BACK_BOLSTERS,

  /**
   * @brief SEAT_BOLSTERS.
   */
  SEAT_BOLSTERS
};
} // Common_MassageCushion

namespace Common_SeatMemoryActionType {
/**
 * @brief Enumeration Common_SeatMemoryActionType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SAVE.
   *
   * Save current seat postions and settings to seat memory.
   */
  SAVE,

  /**
   * @brief RESTORE.
   *
   * Restore / apply the seat memory settings to the current seat. 
   */
  RESTORE,

  /**
   * @brief NONE.
   *
   * No action to be performed.
   */
  NONE
};
} // Common_SeatMemoryActionType

namespace Common_SupportedSeat {
/**
 * @brief Enumeration Common_SupportedSeat.
 *
 * List possible seats that is a remote controllable seat.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DRIVER.
   */
  DRIVER,

  /**
   * @brief FRONT_PASSENGER.
   */
  FRONT_PASSENGER
};
} // Common_SupportedSeat

namespace Common_RadioBand {
/**
 * @brief Enumeration Common_RadioBand.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief AM.
   */
  AM,

  /**
   * @brief FM.
   */
  FM,

  /**
   * @brief XM.
   */
  XM
};
} // Common_RadioBand

namespace Common_RadioState {
/**
 * @brief Enumeration Common_RadioState.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ACQUIRING.
   */
  ACQUIRING,

  /**
   * @brief ACQUIRED.
   */
  ACQUIRED,

  /**
   * @brief MULTICAST.
   */
  MULTICAST,

  /**
   * @brief NOT_FOUND.
   */
  NOT_FOUND
};
} // Common_RadioState

namespace Common_DefrostZone {
/**
 * @brief Enumeration Common_DefrostZone.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FRONT.
   */
  FRONT,

  /**
   * @brief REAR.
   */
  REAR,

  /**
   * @brief ALL.
   */
  ALL,

  /**
   * @brief NONE.
   */
  NONE
};
} // Common_DefrostZone

namespace Common_VentilationMode {
/**
 * @brief Enumeration Common_VentilationMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UPPER.
   */
  UPPER,

  /**
   * @brief LOWER.
   */
  LOWER,

  /**
   * @brief BOTH.
   */
  BOTH,

  /**
   * @brief NONE.
   */
  NONE
};
} // Common_VentilationMode

namespace Common_TemperatureUnit {
/**
 * @brief Enumeration Common_TemperatureUnit.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FAHRENHEIT.
   */
  FAHRENHEIT,

  /**
   * @brief CELSIUS.
   */
  CELSIUS
};
} // Common_TemperatureUnit

namespace Common_LightName {
/**
 * @brief Enumeration Common_LightName.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief FRONT_LEFT_HIGH_BEAM.
   */
  FRONT_LEFT_HIGH_BEAM = 0,

  /**
   * @brief FRONT_RIGHT_HIGH_BEAM.
   */
  FRONT_RIGHT_HIGH_BEAM = 1,

  /**
   * @brief FRONT_LEFT_LOW_BEAM.
   */
  FRONT_LEFT_LOW_BEAM = 2,

  /**
   * @brief FRONT_RIGHT_LOW_BEAM.
   */
  FRONT_RIGHT_LOW_BEAM = 3,

  /**
   * @brief FRONT_LEFT_PARKING_LIGHT.
   */
  FRONT_LEFT_PARKING_LIGHT = 4,

  /**
   * @brief FRONT_RIGHT_PARKING_LIGHT.
   */
  FRONT_RIGHT_PARKING_LIGHT = 5,

  /**
   * @brief FRONT_LEFT_FOG_LIGHT.
   */
  FRONT_LEFT_FOG_LIGHT = 6,

  /**
   * @brief FRONT_RIGHT_FOG_LIGHT.
   */
  FRONT_RIGHT_FOG_LIGHT = 7,

  /**
   * @brief FRONT_LEFT_DAYTIME_RUNNING_LIGHT.
   */
  FRONT_LEFT_DAYTIME_RUNNING_LIGHT = 8,

  /**
   * @brief FRONT_RIGHT_DAYTIME_RUNNING_LIGHT.
   */
  FRONT_RIGHT_DAYTIME_RUNNING_LIGHT = 9,

  /**
   * @brief FRONT_LEFT_TURN_LIGHT.
   */
  FRONT_LEFT_TURN_LIGHT = 10,

  /**
   * @brief FRONT_RIGHT_TURN_LIGHT.
   */
  FRONT_RIGHT_TURN_LIGHT = 11,

  /**
   * @brief REAR_LEFT_FOG_LIGHT.
   */
  REAR_LEFT_FOG_LIGHT = 12,

  /**
   * @brief REAR_RIGHT_FOG_LIGHT.
   */
  REAR_RIGHT_FOG_LIGHT = 13,

  /**
   * @brief REAR_LEFT_TAIL_LIGHT.
   */
  REAR_LEFT_TAIL_LIGHT = 14,

  /**
   * @brief REAR_RIGHT_TAIL_LIGHT.
   */
  REAR_RIGHT_TAIL_LIGHT = 15,

  /**
   * @brief REAR_LEFT_BRAKE_LIGHT.
   */
  REAR_LEFT_BRAKE_LIGHT = 16,

  /**
   * @brief REAR_RIGHT_BRAKE_LIGHT.
   */
  REAR_RIGHT_BRAKE_LIGHT = 17,

  /**
   * @brief REAR_LEFT_TURN_LIGHT.
   */
  REAR_LEFT_TURN_LIGHT = 18,

  /**
   * @brief REAR_RIGHT_TURN_LIGHT.
   */
  REAR_RIGHT_TURN_LIGHT = 19,

  /**
   * @brief REAR_REGISTRATION_PLATE_LIGHT.
   */
  REAR_REGISTRATION_PLATE_LIGHT = 20,

  /**
   * @brief HIGH_BEAMS.
   *
   * Include all high beam lights: front_left and front_right.
   */
  HIGH_BEAMS = 501,

  /**
   * @brief LOW_BEAMS.
   *
   * Include all low beam lights: front_left and front_right.
   */
  LOW_BEAMS = 502,

  /**
   * @brief FOG_LIGHTS.
   *
   * Include all fog lights: front_left, front_right, rear_left and rear_right.
   */
  FOG_LIGHTS = 503,

  /**
   * @brief RUNNING_LIGHTS.
   *
   * Include all daytime running lights: front, left and right.
   */
  RUNNING_LIGHTS = 504,

  /**
   * @brief PARKING_LIGHTS.
   *
   * Include all parking lights: front_left and front_right.
   */
  PARKING_LIGHTS = 505,

  /**
   * @brief BRAKE_LIGHTS.
   *
   * Include all brake lights: rear_left and rear_right.
   */
  BRAKE_LIGHTS = 506,

  /**
   * @brief REAR_REVERSING_LIGHTS.
   */
  REAR_REVERSING_LIGHTS = 507,

  /**
   * @brief SIDE_MARKER_LIGHTS.
   */
  SIDE_MARKER_LIGHTS = 508,

  /**
   * @brief LEFT_TURN_LIGHTS.
   *
   * Include all left turn signal lights: front_left, rear_left, left_side and mirror_mounted.
   */
  LEFT_TURN_LIGHTS = 509,

  /**
   * @brief RIGHT_TURN_LIGHTS.
   *
   * Include all right turn signal lights: front_right, rear_right, right_side and mirror_mounted.
   */
  RIGHT_TURN_LIGHTS = 510,

  /**
   * @brief HAZARD_LIGHTS.
   *
   * Include all hazard lights: front_left, front_right, rear_left and rear_right.
   */
  HAZARD_LIGHTS = 511,

  /**
   * @brief REAR_CARGO_LIGHTS.
   *
   * Cargo lamps illuminate the cargo area.
   */
  REAR_CARGO_LIGHTS = 512,

  /**
   * @brief REAR_TRUCK_BED_LIGHTS.
   *
   * Truck bed lamps light up the bed of the truck.
   */
  REAR_TRUCK_BED_LIGHTS = 513,

  /**
   * @brief REAR_TRAILER_LIGHTS.
   *
   * Trailer lights are lamps mounted on a trailer hitch.
   */
  REAR_TRAILER_LIGHTS = 514,

  /**
   * @brief LEFT_SPOT_LIGHTS.
   *
   * It is the spotlights mounted on the left side of a vehicle.
   */
  LEFT_SPOT_LIGHTS = 515,

  /**
   * @brief RIGHT_SPOT_LIGHTS.
   *
   * It is the spotlights mounted on the right side of a vehicle.
   */
  RIGHT_SPOT_LIGHTS = 516,

  /**
   * @brief LEFT_PUDDLE_LIGHTS.
   *
   * Puddle lamps illuminate the ground beside the door as the customer is opening or approaching the door.
   */
  LEFT_PUDDLE_LIGHTS = 517,

  /**
   * @brief RIGHT_PUDDLE_LIGHTS.
   *
   * Puddle lamps illuminate the ground beside the door as the customer is opening or approaching the door.
   */
  RIGHT_PUDDLE_LIGHTS = 518,

  /**
   * @brief AMBIENT_LIGHTS.
   */
  AMBIENT_LIGHTS = 801,

  /**
   * @brief OVERHEAD_LIGHTS.
   */
  OVERHEAD_LIGHTS = 802,

  /**
   * @brief READING_LIGHTS.
   */
  READING_LIGHTS = 803,

  /**
   * @brief TRUNK_LIGHTS.
   */
  TRUNK_LIGHTS = 804,

  /**
   * @brief EXTERIOR_FRONT_LIGHTS.
   *
   * Include exterior lights located in front of the vehicle. For example, fog lights and low beams.
   */
  EXTERIOR_FRONT_LIGHTS = 901,

  /**
   * @brief EXTERIOR_REAR_LIGHTS.
   *
   * Include exterior lights located at the back of the vehicle. For example, license plate lights, reverse lights, cargo lights, bed lights an trailer assist lights.
   */
  EXTERIOR_REAR_LIGHTS = 902,

  /**
   * @brief EXTERIOR_LEFT_LIGHTS.
   *
   * Include exterior lights located at the left side of the vehicle. For example, left puddle lights and spot lights.
   */
  EXTERIOR_LEFT_LIGHTS = 903,

  /**
   * @brief EXTERIOR_RIGHT_LIGHTS.
   *
   * Include exterior lights located at the right side of the vehicle. For example, right puddle lights and spot lights.
   */
  EXTERIOR_RIGHT_LIGHTS = 904,

  /**
   * @brief EXTERIOR_ALL_LIGHTS.
   *
   *  Include all exterior lights around the vehicle.
   */
  EXTERIOR_ALL_LIGHTS = 905
};
} // Common_LightName

namespace Common_LightStatus {
/**
 * @brief Enumeration Common_LightStatus.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ON.
   */
  ON,

  /**
   * @brief OFF.
   */
  OFF,

  /**
   * @brief RAMP_UP.
   */
  RAMP_UP,

  /**
   * @brief RAMP_DOWN.
   */
  RAMP_DOWN,

  /**
   * @brief UNKNOWN.
   */
  UNKNOWN,

  /**
   * @brief INVALID.
   */
  INVALID
};
} // Common_LightStatus

namespace Common_DisplayMode {
/**
 * @brief Enumeration Common_DisplayMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DAY.
   */
  DAY,

  /**
   * @brief NIGHT.
   */
  NIGHT,

  /**
   * @brief AUTO.
   */
  AUTO
};
} // Common_DisplayMode

namespace Common_DistanceUnit {
/**
 * @brief Enumeration Common_DistanceUnit.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MILES.
   */
  MILES,

  /**
   * @brief KILOMETERS.
   */
  KILOMETERS
};
} // Common_DistanceUnit

namespace Common_RCAccessMode {
/**
 * @brief Enumeration Common_RCAccessMode.
 *
 * Enumeration that describes possible remote control access mode the application might be in on HU.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief AUTO_ALLOW.
   */
  AUTO_ALLOW,

  /**
   * @brief AUTO_DENY.
   */
  AUTO_DENY,

  /**
   * @brief ASK_DRIVER.
   */
  ASK_DRIVER
};
} // Common_RCAccessMode

namespace Common_TurnSignal {
/**
 * @brief Enumeration Common_TurnSignal.
 *
 * Enumeration that describes the status of the turn light indicator.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief OFF.
   *
   * Turn signal is OFF
   */
  OFF,

  /**
   * @brief LEFT.
   *
   * Left turn signal is on
   */
  LEFT,

  /**
   * @brief RIGHT.
   *
   * Right turn signal is on
   */
  RIGHT,

  /**
   * @brief BOTH.
   *
   * Both signals (left and right) are on.
   */
  BOTH
};
} // Common_TurnSignal

namespace Common_AppServiceType {
/**
 * @brief Enumeration Common_AppServiceType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MEDIA.
   */
  MEDIA,

  /**
   * @brief WEATHER.
   */
  WEATHER,

  /**
   * @brief NAVIGATION.
   */
  NAVIGATION
};
} // Common_AppServiceType

namespace Common_MediaType {
/**
 * @brief Enumeration Common_MediaType.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MUSIC.
   */
  MUSIC,

  /**
   * @brief PODCAST.
   */
  PODCAST,

  /**
   * @brief AUDIOBOOK.
   */
  AUDIOBOOK,

  /**
   * @brief OTHER.
   */
  OTHER
};
} // Common_MediaType

namespace Common_NavigationAction {
/**
 * @brief Enumeration Common_NavigationAction.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief TURN.
   *
   *  Using this action plus a supplied direction can give the type of turn. 
   */
  TURN,

  /**
   * @brief EXIT.
   */
  EXIT,

  /**
   * @brief STAY.
   */
  STAY,

  /**
   * @brief MERGE.
   */
  MERGE,

  /**
   * @brief FERRY.
   */
  FERRY,

  /**
   * @brief CAR_SHUTTLE_TRAIN.
   */
  CAR_SHUTTLE_TRAIN,

  /**
   * @brief WAYPOINT.
   */
  WAYPOINT
};
} // Common_NavigationAction

namespace Common_NavigationJunction {
/**
 * @brief Enumeration Common_NavigationJunction.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief REGULAR.
   *
   *  A junction that represents a standard intersection with a single road crossing another. 
   */
  REGULAR,

  /**
   * @brief BIFURCATION.
   *
   *  A junction where the road splits off into two paths; a fork in the road. 
   */
  BIFURCATION,

  /**
   * @brief MULTI_CARRIAGEWAY.
   *
   *  A junction that has multiple intersections and paths. 
   */
  MULTI_CARRIAGEWAY,

  /**
   * @brief ROUNDABOUT.
   *
   *  A junction where traffic moves in a single direction around a central, non-traversable point to reach one of the connecting roads. 
   */
  ROUNDABOUT,

  /**
   * @brief TRAVERSABLE_ROUNDABOUT.
   *
   *  Similar to a roundabout, however the center of the roundabout is fully traversable. Also known as a mini-roundabout. 
   */
  TRAVERSABLE_ROUNDABOUT,

  /**
   * @brief JUGHANDLE.
   *
   *  A junction where lefts diverge to the right, then curve to the left, converting a left turn to a crossing maneuver. 
   */
  JUGHANDLE,

  /**
   * @brief ALL_WAY_YIELD.
   *
   *  Multiple way intersection that allows traffic to flow based on priority; most commonly right of way and first in, first out. 
   */
  ALL_WAY_YIELD,

  /**
   * @brief TURN_AROUND.
   *
   *  A junction designated for traffic turn arounds. 
   */
  TURN_AROUND
};
} // Common_NavigationJunction

namespace Common_Direction {
/**
 * @brief Enumeration Common_Direction.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief LEFT.
   */
  LEFT,

  /**
   * @brief RIGHT.
   */
  RIGHT
};
} // Common_Direction

namespace Common_ServiceUpdateReason {
/**
 * @brief Enumeration Common_ServiceUpdateReason.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PUBLISHED.
   *
   *  The service has just been published with the module and once activated to the primary service of its type, it will be ready for possible consumption.
   */
  PUBLISHED,

  /**
   * @brief REMOVED.
   *
   *  The service has just been unpublished with the module and is no longer accessible
   */
  REMOVED,

  /**
   * @brief ACTIVATED.
   *
   *  The service is activated as the primary service of this type. All requests dealing with this service type will be handled by this service.
   */
  ACTIVATED,

  /**
   * @brief DEACTIVATED.
   *
   *  The service has been deactivated as the primary service of its type
   */
  DEACTIVATED,

  /**
   * @brief MANIFEST_UPDATE.
   *
   *  The service has updated its manifest. This could imply updated capabilities. Note: Currently unimplemented 
   */
  MANIFEST_UPDATE
};
} // Common_ServiceUpdateReason

namespace Common_SystemCapabilityType {
/**
 * @brief Enumeration Common_SystemCapabilityType.
 *
 * Enumerations of all available system capability types
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief NAVIGATION.
   */
  NAVIGATION,

  /**
   * @brief PHONE_CALL.
   */
  PHONE_CALL,

  /**
   * @brief VIDEO_STREAMING.
   */
  VIDEO_STREAMING,

  /**
   * @brief REMOTE_CONTROL.
   */
  REMOTE_CONTROL,

  /**
   * @brief APP_SERVICES.
   */
  APP_SERVICES
};
} // Common_SystemCapabilityType
} // hmi_apis
#endif //__CSMARTFACTORY_HMI_API_Ed35110faa4411e9af3c60f81dc21830_H__



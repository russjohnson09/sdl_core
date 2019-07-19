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

#ifndef __CSMARTFACTORY_MOBILE_API_0a5abf23aa4511e9895f60f81dc21830_H__
#define __CSMARTFACTORY_MOBILE_API_0a5abf23aa4511e9895f60f81dc21830_H__

namespace mobile_apis {
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
   * @brief AudioPassThruCapabilities.
   */
  AudioPassThruCapabilities,

  /**
   * @brief CloudAppProperties.
   */
  CloudAppProperties,

  /**
   * @brief Image.
   */
  Image,

  /**
   * @brief SoftButton.
   */
  SoftButton,

  /**
   * @brief Choice.
   */
  Choice,

  /**
   * @brief VrHelpItem.
   */
  VrHelpItem,

  /**
   * @brief SyncMsgVersion.
   */
  SyncMsgVersion,

  /**
   * @brief FuelRange.
   */
  FuelRange,

  /**
   * @brief SingleTireStatus.
   */
  SingleTireStatus,

  /**
   * @brief BeltStatus.
   */
  BeltStatus,

  /**
   * @brief BodyInformation.
   */
  BodyInformation,

  /**
   * @brief DeviceStatus.
   */
  DeviceStatus,

  /**
   * @brief HeadLampStatus.
   */
  HeadLampStatus,

  /**
   * @brief AppInfo.
   */
  AppInfo,

  /**
   * @brief ECallInfo.
   */
  ECallInfo,

  /**
   * @brief AirbagStatus.
   */
  AirbagStatus,

  /**
   * @brief EmergencyEvent.
   */
  EmergencyEvent,

  /**
   * @brief ClusterModeStatus.
   */
  ClusterModeStatus,

  /**
   * @brief MyKey.
   */
  MyKey,

  /**
   * @brief TireStatus.
   */
  TireStatus,

  /**
   * @brief GPSData.
   */
  GPSData,

  /**
   * @brief VehicleDataResult.
   */
  VehicleDataResult,

  /**
   * @brief DIDResult.
   */
  DIDResult,

  /**
   * @brief StartTime.
   */
  StartTime,

  /**
   * @brief TextField.
   */
  TextField,

  /**
   * @brief ImageResolution.
   */
  ImageResolution,

  /**
   * @brief ImageField.
   */
  ImageField,

  /**
   * @brief TouchCoord.
   */
  TouchCoord,

  /**
   * @brief TouchEvent.
   */
  TouchEvent,

  /**
   * @brief TouchEventCapabilities.
   */
  TouchEventCapabilities,

  /**
   * @brief ScreenParams.
   */
  ScreenParams,

  /**
   * @brief HMIPermissions.
   */
  HMIPermissions,

  /**
   * @brief ParameterPermissions.
   */
  ParameterPermissions,

  /**
   * @brief PermissionItem.
   */
  PermissionItem,

  /**
   * @brief DisplayCapabilities.
   */
  DisplayCapabilities,

  /**
   * @brief ButtonCapabilities.
   */
  ButtonCapabilities,

  /**
   * @brief SoftButtonCapabilities.
   */
  SoftButtonCapabilities,

  /**
   * @brief PresetBankCapabilities.
   */
  PresetBankCapabilities,

  /**
   * @brief HMICapabilities.
   */
  HMICapabilities,

  /**
   * @brief MenuParams.
   */
  MenuParams,

  /**
   * @brief TTSChunk.
   */
  TTSChunk,

  /**
   * @brief Turn.
   */
  Turn,

  /**
   * @brief VehicleType.
   */
  VehicleType,

  /**
   * @brief KeyboardProperties.
   */
  KeyboardProperties,

  /**
   * @brief DeviceInfo.
   */
  DeviceInfo,

  /**
   * @brief DateTime.
   */
  DateTime,

  /**
   * @brief Coordinate.
   */
  Coordinate,

  /**
   * @brief OASISAddress.
   */
  OASISAddress,

  /**
   * @brief LocationDetails.
   */
  LocationDetails,

  /**
   * @brief NavigationCapability.
   */
  NavigationCapability,

  /**
   * @brief PhoneCapability.
   */
  PhoneCapability,

  /**
   * @brief VideoStreamingFormat.
   */
  VideoStreamingFormat,

  /**
   * @brief VideoStreamingCapability.
   */
  VideoStreamingCapability,

  /**
   * @brief RGBColor.
   */
  RGBColor,

  /**
   * @brief TemplateColorScheme.
   */
  TemplateColorScheme,

  /**
   * @brief MassageModeData.
   */
  MassageModeData,

  /**
   * @brief MassageCushionFirmness.
   */
  MassageCushionFirmness,

  /**
   * @brief SeatMemoryAction.
   */
  SeatMemoryAction,

  /**
   * @brief SeatControlData.
   */
  SeatControlData,

  /**
   * @brief SeatControlCapabilities.
   */
  SeatControlCapabilities,

  /**
   * @brief Temperature.
   */
  Temperature,

  /**
   * @brief RdsData.
   */
  RdsData,

  /**
   * @brief StationIDNumber.
   */
  StationIDNumber,

  /**
   * @brief SisData.
   */
  SisData,

  /**
   * @brief RadioControlData.
   */
  RadioControlData,

  /**
   * @brief ClimateControlData.
   */
  ClimateControlData,

  /**
   * @brief RadioControlCapabilities.
   */
  RadioControlCapabilities,

  /**
   * @brief ClimateControlCapabilities.
   */
  ClimateControlCapabilities,

  /**
   * @brief EqualizerSettings.
   */
  EqualizerSettings,

  /**
   * @brief AudioControlData.
   */
  AudioControlData,

  /**
   * @brief AudioControlCapabilities.
   */
  AudioControlCapabilities,

  /**
   * @brief LightCapabilities.
   */
  LightCapabilities,

  /**
   * @brief LightControlCapabilities.
   */
  LightControlCapabilities,

  /**
   * @brief LightState.
   */
  LightState,

  /**
   * @brief LightControlData.
   */
  LightControlData,

  /**
   * @brief HMISettingsControlData.
   */
  HMISettingsControlData,

  /**
   * @brief HMISettingsControlCapabilities.
   */
  HMISettingsControlCapabilities,

  /**
   * @brief ModuleData.
   */
  ModuleData,

  /**
   * @brief RemoteControlCapabilities.
   */
  RemoteControlCapabilities,

  /**
   * @brief MetadataTags.
   */
  MetadataTags,

  /**
   * @brief Rectangle.
   */
  Rectangle,

  /**
   * @brief HapticRect.
   */
  HapticRect,

  /**
   * @brief MediaServiceManifest.
   */
  MediaServiceManifest,

  /**
   * @brief MediaServiceData.
   */
  MediaServiceData,

  /**
   * @brief WeatherServiceManifest.
   */
  WeatherServiceManifest,

  /**
   * @brief WeatherAlert.
   */
  WeatherAlert,

  /**
   * @brief WeatherData.
   */
  WeatherData,

  /**
   * @brief WeatherServiceData.
   */
  WeatherServiceData,

  /**
   * @brief NavigationServiceManifest.
   */
  NavigationServiceManifest,

  /**
   * @brief NavigationInstruction.
   */
  NavigationInstruction,

  /**
   * @brief NavigationServiceData.
   */
  NavigationServiceData,

  /**
   * @brief AppServiceManifest.
   */
  AppServiceManifest,

  /**
   * @brief AppServiceRecord.
   */
  AppServiceRecord,

  /**
   * @brief AppServiceData.
   */
  AppServiceData,

  /**
   * @brief AppServiceCapability.
   */
  AppServiceCapability,

  /**
   * @brief AppServicesCapabilities.
   */
  AppServicesCapabilities,

  /**
   * @brief SystemCapability.
   */
  SystemCapability
};
} // StructIdentifiers

namespace Result {
/**
 * @brief Enumeration Result.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SUCCESS.
   *
   * The request succeeded
   */
  SUCCESS,

  /**
   * @brief UNSUPPORTED_REQUEST.
   *
   * The request is not supported by the headunit
   */
  UNSUPPORTED_REQUEST,

  /**
   * @brief UNSUPPORTED_RESOURCE.
   *
   * 
   *                 A button that was requested for subscription is not supported under the current system.
   *             
   */
  UNSUPPORTED_RESOURCE,

  /**
   * @brief DISALLOWED.
   *
   * RPC is not authorized in local policy table.
   */
  DISALLOWED,

  /**
   * @brief REJECTED.
   *
   * 
   *                 The requested command was rejected, e.g. because mobile app is in background and cannot perform any HMI commands.
   *                 Or an HMI command (e.g. Speak) is rejected because a higher priority HMI command (e.g. Alert) is playing.
   *             
   */
  REJECTED,

  /**
   * @brief ABORTED.
   *
   * 
   *                 A command was aborted, for example due to user interaction (e.g. user pressed button).
   *                 Or an HMI command (e.g. Speak) is aborted because a higher priority HMI command (e.g. Alert) was requested.
   *             
   */
  ABORTED,

  /**
   * @brief IGNORED.
   *
   * 
   *                 A command was ignored, because the intended result is already in effect.
   *                 For example, SetMediaClockTimer was used to pause the media clock although the clock is paused already.
   *                 NOTE: potentially replaces SUBSCRIBED_ALREADY
   *             
   */
  IGNORED,

  /**
   * @brief RETRY.
   *
   * The user interrupted the RPC (e.g. PerformAudioPassThru) and indicated to start over.  Note, the app must issue the new RPC.
   */
  RETRY,

  /**
   * @brief IN_USE.
   *
   * 
   *                 The data may not be changed, because it is currently in use.
   *                 For example when trying to delete a command set that is currently involved in an interaction.
   *             
   */
  IN_USE,

  /**
   * @brief VEHICLE_DATA_NOT_AVAILABLE.
   *
   * The requested vehicle data is not available on this vehicle or is not published.
   */
  VEHICLE_DATA_NOT_AVAILABLE,

  /**
   * @brief TIMED_OUT.
   *
   * Overlay reached the maximum timeout and closed.
   */
  TIMED_OUT,

  /**
   * @brief INVALID_DATA.
   *
   * 
   *                 The data sent is invalid. For example:
   *                 Invalid Json syntax
   *                 Parameters out of bounds (number or enum range)
   *                 Mandatory parameters not provided
   *                 Parameter provided with wrong type
   *                 Invalid characters
   *                 Empty string
   *             
   */
  INVALID_DATA,

  /**
   * @brief CHAR_LIMIT_EXCEEDED.
   */
  CHAR_LIMIT_EXCEEDED,

  /**
   * @brief INVALID_ID.
   *
   * 
   *                 One of the provided IDs is not valid. For example
   *                 This applies to CorrelationID, SubscriptionID, CommandID, MenuID, etc.
   *             
   */
  INVALID_ID,

  /**
   * @brief DUPLICATE_NAME.
   *
   * There was a conflict with an registered name (application or menu item) or vr command
   */
  DUPLICATE_NAME,

  /**
   * @brief APPLICATION_NOT_REGISTERED.
   *
   * An command can not be executed because no application has been registered with RegisterApplication.
   */
  APPLICATION_NOT_REGISTERED,

  /**
   * @brief WRONG_LANGUAGE.
   *
   * 
   *                 The requested language is currently not supported.
   *                 Might be because of a mismatch of the currently active language on the headunit and the requested language
   *             
   */
  WRONG_LANGUAGE,

  /**
   * @brief OUT_OF_MEMORY.
   *
   * The system could not process the request because the necessary memory couldn't be allocated
   */
  OUT_OF_MEMORY,

  /**
   * @brief TOO_MANY_PENDING_REQUESTS.
   *
   * There are too many requests pending (means, that the response has not been delivered, yet).There may be a maximum of 1000 pending requests at a time.
   */
  TOO_MANY_PENDING_REQUESTS,

  /**
   * @brief TOO_MANY_APPLICATIONS.
   *
   * There are already too many registered applications
   */
  TOO_MANY_APPLICATIONS,

  /**
   * @brief APPLICATION_REGISTERED_ALREADY.
   *
   * RegisterApplication has been called again, after a RegisterApplication was successful before.
   */
  APPLICATION_REGISTERED_ALREADY,

  /**
   * @brief WARNINGS.
   *
   * The RPC (e.g. SubscribeVehicleData) executed successfully but one or more items have a warning or failure.
   */
  WARNINGS,

  /**
   * @brief GENERIC_ERROR.
   *
   * Provided data is valid but something went wrong in the lower layers.
   */
  GENERIC_ERROR,

  /**
   * @brief USER_DISALLOWED.
   *
   * RPC is included in a functional group explicitly blocked by the user.
   */
  USER_DISALLOWED,

  /**
   * @brief TRUNCATED_DATA.
   *
   * The RPC (e.g. ReadDID) executed successfully but the data exceeded the platform maximum threshold and thus, only part of the data is available.
   */
  TRUNCATED_DATA,

  /**
   * @brief UNSUPPORTED_VERSION.
   *
   * Sync doesn't support the protocol that is requested by the mobile application
   */
  UNSUPPORTED_VERSION,

  /**
   * @brief VEHICLE_DATA_NOT_ALLOWED.
   *
   * The user has turned off access to vehicle data, and it is globally unavailable to mobile applications.
   */
  VEHICLE_DATA_NOT_ALLOWED,

  /**
   * @brief FILE_NOT_FOUND.
   *
   * A specified file could not be found on the headunit.
   */
  FILE_NOT_FOUND,

  /**
   * @brief CANCEL_ROUTE.
   *
   * User selected to Cancel Route.
   */
  CANCEL_ROUTE,

  /**
   * @brief SAVED.
   *
   * The RPC (e.g. Slider) executed successfully and the user elected to save the current position / value.
   */
  SAVED,

  /**
   * @brief INVALID_CERT.
   *
   * The certificate provided during authentication is invalid.
   */
  INVALID_CERT,

  /**
   * @brief EXPIRED_CERT.
   *
   * The certificate provided during authentication is expired.
   */
  EXPIRED_CERT,

  /**
   * @brief RESUME_FAILED.
   *
   * The provided hash ID does not match the hash of the current set of registered data or the core could not resume the previous data.
   */
  RESUME_FAILED,

  /**
   * @brief DATA_NOT_AVAILABLE.
   *
   * The requested information is currently not available. This is different than UNSUPPORTED_RESOURCE because it implies the data is at some point available. 
   */
  DATA_NOT_AVAILABLE,

  /**
   * @brief READ_ONLY.
   *
   * The value being set is read only
   */
  READ_ONLY,

  /**
   * @brief CORRUPTED_DATA.
   *
   * The data sent failed to pass CRC check in receiver end
   */
  CORRUPTED_DATA
};
} // Result

namespace ButtonPressMode {
/**
 * @brief Enumeration ButtonPressMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief LONG.
   *
   * 
   *                 A button was released, after it was pressed for a long time
   *                 Actual timing is defined by the headunit and may vary
   *             
   */
  LONG,

  /**
   * @brief SHORT.
   *
   * 
   *                 A button was released, after it was pressed for a short time
   *                 Actual timing is defined by the headunit and may vary
   *             
   */
  SHORT
};
} // ButtonPressMode

namespace ButtonEventMode {
/**
 * @brief Enumeration ButtonEventMode.
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
} // ButtonEventMode

namespace Language {
/**
 * @brief Enumeration Language.
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
} // Language

namespace UpdateMode {
/**
 * @brief Enumeration UpdateMode.
 *
 * Describes how the media clock timer should behave on the platform
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief COUNTUP.
   *
   * Starts the media clock timer counting upwards, as in time elapsed.
   */
  COUNTUP,

  /**
   * @brief COUNTDOWN.
   *
   * Starts the media clock timer counting downwards, as in time remaining.
   */
  COUNTDOWN,

  /**
   * @brief PAUSE.
   *
   * Pauses the media clock timer
   */
  PAUSE,

  /**
   * @brief RESUME.
   *
   * Resume the media clock timer
   */
  RESUME,

  /**
   * @brief CLEAR.
   *
   * Clears the media clock timer (previously done through Show->mediaClock)
   */
  CLEAR
};
} // UpdateMode

namespace TimerMode {
/**
 * @brief Enumeration TimerMode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief UP.
   *
   * Causes the media clock timer to update from 0:00 to a specified time
   */
  UP,

  /**
   * @brief DOWN.
   *
   * Causes the media clock timer to update from a specified time to 0:00
   */
  DOWN,

  /**
   * @brief NONE.
   *
   * Indicates to not use the media clock timer
   */
  NONE
};
} // TimerMode

namespace InteractionMode {
/**
 * @brief Enumeration InteractionMode.
 *
 * For application-requested interactions, this mode indicates the method in which the user is notified and uses the interaction.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MANUAL_ONLY.
   *
   * This mode causes the interaction to only occur on the display, meaning the choices are provided only via the display. No Voice Interaction.
   */
  MANUAL_ONLY,

  /**
   * @brief VR_ONLY.
   *
   * This mode causes the interaction to only occur using the headunits VR system. Selections are made by saying the command.
   */
  VR_ONLY,

  /**
   * @brief BOTH.
   *
   * This mode causes both a VR and display selection option for an interaction. The user will first be asked via Voice Interaction (if available). If this is unsuccessful, the system will switch to manual input.
   */
  BOTH
};
} // InteractionMode

namespace LayoutMode {
/**
 * @brief Enumeration LayoutMode.
 *
 * For touchscreen interactions, the mode of how the choices are presented.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief ICON_ONLY.
   *
   * This mode causes the interaction to display the previous set of choices as icons.
   */
  ICON_ONLY,

  /**
   * @brief ICON_WITH_SEARCH.
   *
   * This mode causes the interaction to display the previous set of choices as icons along with a search field in the HMI.
   */
  ICON_WITH_SEARCH,

  /**
   * @brief LIST_ONLY.
   *
   * This mode causes the interaction to display the previous set of choices as a list.
   */
  LIST_ONLY,

  /**
   * @brief LIST_WITH_SEARCH.
   *
   * This mode causes the interaction to display the previous set of choices as a list along with a search field in the HMI.
   */
  LIST_WITH_SEARCH,

  /**
   * @brief KEYBOARD.
   *
   * This mode causes the interaction to immediately display a keyboard entry through the HMI.
   */
  KEYBOARD
};
} // LayoutMode

namespace HMILevel {
/**
 * @brief Enumeration HMILevel.
 *
 * Enumeration that describes current levels of HMI.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief HMI_FULL.
   */
  HMI_FULL,

  /**
   * @brief HMI_LIMITED.
   */
  HMI_LIMITED,

  /**
   * @brief HMI_BACKGROUND.
   */
  HMI_BACKGROUND,

  /**
   * @brief HMI_NONE.
   */
  HMI_NONE
};
} // HMILevel

namespace AudioStreamingState {
/**
 * @brief Enumeration AudioStreamingState.
 *
 * Enumeration that describes possible states of audio streaming.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief AUDIBLE.
   */
  AUDIBLE,

  /**
   * @brief ATTENUATED.
   */
  ATTENUATED,

  /**
   * @brief NOT_AUDIBLE.
   */
  NOT_AUDIBLE
};
} // AudioStreamingState

namespace SystemAction {
/**
 * @brief Enumeration SystemAction.
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
   * App is brought into HMI_FULL.
   */
  STEAL_FOCUS,

  /**
   * @brief KEEP_CONTEXT.
   *
   * Current system context is maintained.  An overlay is persisted even though a SoftButton has been pressed and the notification sent.
   */
  KEEP_CONTEXT
};
} // SystemAction

namespace SystemContext {
/**
 * @brief Enumeration SystemContext.
 *
 * Enumeration that describes possible contexts an app's HMI might be in. Communicated to whichever app is in HMI FULL, except Alert.
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
   * The system is currently displaying an in-App menu onscreen.
   */
  SYSCTXT_MENU,

  /**
   * @brief SYSCTXT_HMI_OBSCURED.
   *
   * The app's display HMI is currently being obscured by either a system or other app's overlay.
   */
  SYSCTXT_HMI_OBSCURED,

  /**
   * @brief SYSCTXT_ALERT.
   *
   * Broadcast only to whichever app has an alert currently being displayed.
   */
  SYSCTXT_ALERT
};
} // SystemContext

namespace VideoStreamingState {
/**
 * @brief Enumeration VideoStreamingState.
 *
 * Enumeration that describes possible states of video streaming. 
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief STREAMABLE.
   */
  STREAMABLE,

  /**
   * @brief NOT_STREAMABLE.
   */
  NOT_STREAMABLE
};
} // VideoStreamingState

namespace SoftButtonType {
/**
 * @brief Enumeration SoftButtonType.
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
} // SoftButtonType

namespace AppInterfaceUnregisteredReason {
/**
 * @brief Enumeration AppInterfaceUnregisteredReason.
 *
 * Error code, which comes from the module side.
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
   * @brief BLUETOOTH_OFF.
   */
  BLUETOOTH_OFF,

  /**
   * @brief USB_DISCONNECTED.
   */
  USB_DISCONNECTED,

  /**
   * @brief REQUEST_WHILE_IN_NONE_HMI_LEVEL.
   */
  REQUEST_WHILE_IN_NONE_HMI_LEVEL,

  /**
   * @brief TOO_MANY_REQUESTS.
   */
  TOO_MANY_REQUESTS,

  /**
   * @brief DRIVER_DISTRACTION_VIOLATION.
   */
  DRIVER_DISTRACTION_VIOLATION,

  /**
   * @brief LANGUAGE_CHANGE.
   */
  LANGUAGE_CHANGE,

  /**
   * @brief MASTER_RESET.
   */
  MASTER_RESET,

  /**
   * @brief FACTORY_DEFAULTS.
   */
  FACTORY_DEFAULTS,

  /**
   * @brief APP_UNAUTHORIZED.
   */
  APP_UNAUTHORIZED,

  /**
   * @brief PROTOCOL_VIOLATION.
   */
  PROTOCOL_VIOLATION,

  /**
   * @brief UNSUPPORTED_HMI_RESOURCE.
   */
  UNSUPPORTED_HMI_RESOURCE
};
} // AppInterfaceUnregisteredReason

namespace TriggerSource {
/**
 * @brief Enumeration TriggerSource.
 *
 * Indicates the source from where the command was triggered.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief TS_MENU.
   */
  TS_MENU,

  /**
   * @brief TS_VR.
   */
  TS_VR,

  /**
   * @brief TS_KEYBOARD.
   */
  TS_KEYBOARD
};
} // TriggerSource

namespace HmiZoneCapabilities {
/**
 * @brief Enumeration HmiZoneCapabilities.
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
} // HmiZoneCapabilities

namespace SpeechCapabilities {
/**
 * @brief Enumeration SpeechCapabilities.
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
} // SpeechCapabilities

namespace VrCapabilities {
/**
 * @brief Enumeration VrCapabilities.
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
} // VrCapabilities

namespace PrerecordedSpeech {
/**
 * @brief Enumeration PrerecordedSpeech.
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
} // PrerecordedSpeech

namespace SamplingRate {
/**
 * @brief Enumeration SamplingRate.
 *
 * Describes different sampling options for PerformAudioPassThru.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief SamplingRate_8KHZ.
   *
   * Sampling rate of 8000 Hz.
   */
  SamplingRate_8KHZ,

  /**
   * @brief SamplingRate_16KHZ.
   *
   * Sampling rate of 16000 Hz.
   */
  SamplingRate_16KHZ,

  /**
   * @brief SamplingRate_22KHZ.
   *
   * Sampling rate of 22050 Hz.
   */
  SamplingRate_22KHZ,

  /**
   * @brief SamplingRate_44KHZ.
   *
   * Sampling rate of 44100 Hz.
   */
  SamplingRate_44KHZ
};
} // SamplingRate

namespace BitsPerSample {
/**
 * @brief Enumeration BitsPerSample.
 *
 * Describes different quality options for PerformAudioPassThru.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief BitsPerSample_8_BIT.
   *
   * Audio sample is 8 bits wide, unsigned.
   */
  BitsPerSample_8_BIT,

  /**
   * @brief BitsPerSample_16_BIT.
   *
   * Audio sample is 16 bits wide, signed, and in little endian.
   */
  BitsPerSample_16_BIT
};
} // BitsPerSample

namespace AudioType {
/**
 * @brief Enumeration AudioType.
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
} // AudioType

namespace VehicleDataType {
/**
 * @brief Enumeration VehicleDataType.
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
} // VehicleDataType

namespace HybridAppPreference {
/**
 * @brief Enumeration HybridAppPreference.
 *
 * Enumeration for the user's preference of which app type to use when both are available
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MOBILE.
   */
  MOBILE,

  /**
   * @brief CLOUD.
   */
  CLOUD,

  /**
   * @brief BOTH.
   */
  BOTH
};
} // HybridAppPreference

namespace ButtonName {
/**
 * @brief Enumeration ButtonName.
 *
 * Defines the hard (physical) and soft (touchscreen) buttons available from the module
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
   *
   * 
   *               The button name for the physical Play/Pause
   *               toggle that can be used by media apps.
   *             
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
} // ButtonName

namespace MediaClockFormat {
/**
 * @brief Enumeration MediaClockFormat.
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
   *                 minutesFieldWidth = 2;minutesFieldMax = 19;secondsFieldWidth = 2;secondsFieldMax = 99;maxHours = 19;maxMinutes = 59;maxSeconds = 59;
   *                 used for Type II and CID headunits
   *             
   */
  CLOCK1,

  /**
   * @brief CLOCK2.
   *
   * 
   *                 minutesFieldWidth = 3;minutesFieldMax = 199;secondsFieldWidth = 2;secondsFieldMax = 99;maxHours = 59;maxMinutes = 59;maxSeconds = 59;
   *                 used for Type V headunit
   *             
   */
  CLOCK2,

  /**
   * @brief CLOCK3.
   *
   * 
   *                 minutesFieldWidth = 2;minutesFieldMax = 59;secondsFieldWidth = 2;secondsFieldMax = 59;maxHours = 9;maxMinutes = 59;maxSeconds = 59;
   *                 used for GEN1.1 MFD3/4/5 headunits
   *             
   */
  CLOCK3,

  /**
   * @brief CLOCKTEXT1.
   *
   * 
   *                 5 characters possible
   *                 Format:      1|sp   c   :|sp   c   c
   *                 1|sp : digit "1" or space
   *                 c    : character out of following character set: sp|0-9|[letters, see TypeII column in XLS. See [@TODO: create file ref]]
   *                 :|sp : colon or space
   *                 used for Type II headunit
   *             
   */
  CLOCKTEXT1,

  /**
   * @brief CLOCKTEXT2.
   *
   * 
   *                 5 chars possible
   *                 Format:      1|sp   c   :|sp   c   c
   *                 1|sp : digit "1" or space
   *                 c    : character out of following character set: sp|0-9|[letters, see CID column in XLS. See [@TODO: create file ref]]
   *                 :|sp : colon or space
   *                 used for CID headunit
   *                 NOTE: difference between CLOCKTEXT1 and CLOCKTEXT2 is the supported character set
   *             
   */
  CLOCKTEXT2,

  /**
   * @brief CLOCKTEXT3.
   *
   * 
   *                 6 chars possible
   *                 Format:      1|sp   c   c   :|sp   c   c
   *                 1|sp : digit "1" or space
   *                 c    : character out of following character set: sp|0-9|[letters, see Type 5 column in XLS]. See [@TODO: create file ref]
   *                 :|sp : colon or space
   *                 used for Type V headunit
   *             
   */
  CLOCKTEXT3,

  /**
   * @brief CLOCKTEXT4.
   *
   * 
   *                 6 chars possible
   *                 Format:      c   :|sp   c   c   :   c   c
   *                 :|sp : colon or space
   *                 c    : character out of following character set: sp|0-9|[letters].
   *                 used for GEN1.1 MFD3/4/5 headunits
   *             
   */
  CLOCKTEXT4
};
} // MediaClockFormat

namespace DisplayType {
/**
 * @brief Enumeration DisplayType.
 *
 * See DAES for further infos regarding the displays
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief CID.
   */
  CID,

  /**
   * @brief TYPE2.
   */
  TYPE2,

  /**
   * @brief TYPE5.
   */
  TYPE5,

  /**
   * @brief NGN.
   */
  NGN,

  /**
   * @brief GEN2_8_DMA.
   */
  GEN2_8_DMA,

  /**
   * @brief GEN2_6_DMA.
   */
  GEN2_6_DMA,

  /**
   * @brief MFD3.
   */
  MFD3,

  /**
   * @brief MFD4.
   */
  MFD4,

  /**
   * @brief MFD5.
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
} // DisplayType

namespace TextFieldName {
/**
 * @brief Enumeration TextFieldName.
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
   *  First line suggestion for a user response (in the case of VR enabled interaction)
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
  phoneNumber
};
} // TextFieldName

namespace ImageFieldName {
/**
 * @brief Enumeration ImageFieldName.
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
} // ImageFieldName

namespace CharacterSet {
/**
 * @brief Enumeration CharacterSet.
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
} // CharacterSet

namespace TextAlignment {
/**
 * @brief Enumeration TextAlignment.
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
} // TextAlignment

namespace TBTState {
/**
 * @brief Enumeration TBTState.
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
} // TBTState

namespace DriverDistractionState {
/**
 * @brief Enumeration DriverDistractionState.
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
} // DriverDistractionState

namespace ImageType {
/**
 * @brief Enumeration ImageType.
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
} // ImageType

namespace DeliveryMode {
/**
 * @brief Enumeration DeliveryMode.
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
} // DeliveryMode

namespace VideoStreamingProtocol {
/**
 * @brief Enumeration VideoStreamingProtocol.
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
   * Raw stream bytes that contains no timestamp data and is the lowest supported video streaming
   */
  RAW,

  /**
   * @brief RTP.
   *
   * RTP facilitates the transfer of real-time data. Information provided by this protocol include timestamps (for synchronization), sequence numbers (for packet loss and reordering detection) and the payload format which indicates the encoded format of the data.
   */
  RTP,

  /**
   * @brief RTSP.
   *
   * The transmission of streaming data itself is not a task of RTSP. Most RTSP servers use the Real-time Transport Protocol (RTP) in conjunction with Real-time Control Protocol (RTCP) for media stream delivery. However, some vendors implement proprietary transport protocols. 
   */
  RTSP,

  /**
   * @brief RTMP.
   *
   *  Real-Time Messaging Protocol (RTMP) was initially a proprietary protocol developed by Macromedia for streaming audio, video and data over the Internet, between a Flash player and a server. Macromedia is now owned by Adobe, which has released an incomplete version of the specification of the protocol for public use.
   */
  RTMP,

  /**
   * @brief WEBM.
   *
   * The WebM container is based on a profile of Matroska. WebM initially supported VP8 video and Vorbis audio streams. In 2013 it was updated to accommodate VP9 video and Opus audio.
   */
  WEBM
};
} // VideoStreamingProtocol

namespace VideoStreamingCodec {
/**
 * @brief Enumeration VideoStreamingCodec.
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
   * A block-oriented motion-compensation-based video compression standard. As of 2014 it is one of the most commonly used formats for the recording, compression, and distribution of video content.
   */
  H264,

  /**
   * @brief H265.
   *
   * High Efficiency Video Coding (HEVC), also known as H.265 and MPEG-H Part 2, is a video compression standard, one of several potential successors to the widely used AVC (H.264 or MPEG-4 Part 10). In comparison to AVC, HEVC offers about double the data compression ratio at the same level of video quality, or substantially improved video quality at the same bit rate. It supports resolutions up to 8192x4320, including 8K UHD.
   */
  H265,

  /**
   * @brief Theora.
   *
   * Theora is derived from the formerly proprietary VP3 codec, released into the public domain by On2 Technologies. It is broadly comparable in design and bitrate efficiency to MPEG-4 Part 2, early versions of Windows Media Video, and RealVideo while lacking some of the features present in some of these other codecs. It is comparable in open standards philosophy to the BBC's Dirac codec.
   */
  Theora,

  /**
   * @brief VP8.
   *
   * VP8 can be multiplexed into the Matroska-based container format WebM along with Vorbis and Opus audio. The image format WebP is based on VP8's intra-frame coding. VP8's direct successor, VP9, and the emerging royalty-free internet video format AV1 from the Alliance for Open Media (AOMedia) are based on VP8.
   */
  VP8,

  /**
   * @brief VP9.
   *
   * Similar to VP8, but VP9 is customized for video resolutions beyond high-definition video (UHD) and also enables lossless compression.
   */
  VP9
};
} // VideoStreamingCodec

namespace AudioStreamingIndicator {
/**
 * @brief Enumeration AudioStreamingIndicator.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PLAY_PAUSE.
   *
   * 
   *                 Default playback indicator.
   *                 By default the playback indicator should be PLAY_PAUSE when:
   *                     - the media app is newly registered on the head unit (after RegisterAppInterface)
   *                     - the media app was closed by the user (App enters HMI_NONE)
   *                     - the app sends SetMediaClockTimer with audioStreamingIndicator not set to any value
   *             
   */
  PLAY_PAUSE,

  /**
   * @brief PLAY.
   *
   * Indicates that a button press of the Play/Pause button starts the audio playback.
   */
  PLAY,

  /**
   * @brief PAUSE.
   *
   * Indicates that a button press of the Play/Pause button pauses the current audio playback.
   */
  PAUSE,

  /**
   * @brief STOP.
   *
   * Indicates that a button press of the Play/Pause button stops the current audio playback.
   */
  STOP
};
} // AudioStreamingIndicator

namespace GlobalProperty {
/**
 * @brief Enumeration GlobalProperty.
 *
 * The different global properties.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief HELPPROMPT.
   *
   * The property helpPrompt of setGlobalProperties
   */
  HELPPROMPT,

  /**
   * @brief TIMEOUTPROMPT.
   *
   * The property timeoutPrompt of setGlobalProperties
   */
  TIMEOUTPROMPT,

  /**
   * @brief VRHELPTITLE.
   *
   * The property vrHelpTitle of setGlobalProperties
   */
  VRHELPTITLE,

  /**
   * @brief VRHELPITEMS.
   *
   * The property array of vrHelp of setGlobalProperties
   */
  VRHELPITEMS,

  /**
   * @brief MENUNAME.
   *
   * The property in-app menu name of setGlobalProperties
   */
  MENUNAME,

  /**
   * @brief MENUICON.
   *
   * The property in-app menu icon of setGlobalProperties
   */
  MENUICON,

  /**
   * @brief KEYBOARDPROPERTIES.
   *
   * The on-screen keyboard configuration of setGlobalProperties
   */
  KEYBOARDPROPERTIES
};
} // GlobalProperty

namespace CompassDirection {
/**
 * @brief Enumeration CompassDirection.
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
} // CompassDirection

namespace Dimension {
/**
 * @brief Enumeration Dimension.
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
   * Longitude and latitude
   */
  Dimension_2D,

  /**
   * @brief Dimension_3D.
   *
   * Longitude and latitude and altitude
   */
  Dimension_3D
};
} // Dimension

namespace PRNDL {
/**
 * @brief Enumeration PRNDL.
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
} // PRNDL

namespace ComponentVolumeStatus {
/**
 * @brief Enumeration ComponentVolumeStatus.
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
   */
  CVS_UNKNOWN,

  /**
   * @brief CVS_NORMAL.
   */
  CVS_NORMAL,

  /**
   * @brief CVS_LOW.
   */
  CVS_LOW,

  /**
   * @brief CVS_FAULT.
   */
  CVS_FAULT,

  /**
   * @brief CVS_ALERT.
   */
  CVS_ALERT,

  /**
   * @brief CVS_NOT_SUPPORTED.
   */
  CVS_NOT_SUPPORTED
};
} // ComponentVolumeStatus

namespace TPMS {
/**
 * @brief Enumeration TPMS.
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
} // TPMS

namespace FuelType {
/**
 * @brief Enumeration FuelType.
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
   *                 For vehicles using compressed natural gas.
   *             
   */
  CNG,

  /**
   * @brief LPG.
   *
   * 
   *                 For vehicles using liquefied petroleum gas.
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
} // FuelType

namespace ElectronicParkBrakeStatus {
/**
 * @brief Enumeration ElectronicParkBrakeStatus.
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
   *           Park brake actuators have been fully applied.
   *         
   */
  CLOSED,

  /**
   * @brief TRANSITION.
   *
   * 
   *           Park brake actuators are transitioning to either Apply/Closed or Release/Open state.
   *         
   */
  TRANSITION,

  /**
   * @brief OPEN.
   *
   * 
   *           Park brake actuators are released.
   *         
   */
  OPEN,

  /**
   * @brief DRIVE_ACTIVE.
   *
   * 
   *           When driver pulls the Electronic Park Brake switch while driving "at speed".
   *         
   */
  DRIVE_ACTIVE,

  /**
   * @brief FAULT.
   *
   * 
   *           When system has a fault or is under maintenance.
   *         
   */
  FAULT
};
} // ElectronicParkBrakeStatus

namespace WarningLightStatus {
/**
 * @brief Enumeration WarningLightStatus.
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
} // WarningLightStatus

namespace VehicleDataNotificationStatus {
/**
 * @brief Enumeration VehicleDataNotificationStatus.
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
} // VehicleDataNotificationStatus

namespace IgnitionStableStatus {
/**
 * @brief Enumeration IgnitionStableStatus.
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
   */
  MISSING_FROM_TRANSMITTER
};
} // IgnitionStableStatus

namespace IgnitionStatus {
/**
 * @brief Enumeration IgnitionStatus.
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
   */
  IS_UNKNOWN,

  /**
   * @brief IS_OFF.
   */
  IS_OFF,

  /**
   * @brief IS_ACCESSORY.
   */
  IS_ACCESSORY,

  /**
   * @brief IS_RUN.
   */
  IS_RUN,

  /**
   * @brief IS_START.
   */
  IS_START,

  /**
   * @brief IS_INVALID.
   */
  IS_INVALID
};
} // IgnitionStatus

namespace VehicleDataEventStatus {
/**
 * @brief Enumeration VehicleDataEventStatus.
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
   */
  VDES_NO_EVENT,

  /**
   * @brief VDES_NO.
   */
  VDES_NO,

  /**
   * @brief VDES_YES.
   */
  VDES_YES,

  /**
   * @brief VDES_NOT_SUPPORTED.
   */
  VDES_NOT_SUPPORTED,

  /**
   * @brief VDES_FAULT.
   */
  VDES_FAULT
};
} // VehicleDataEventStatus

namespace DeviceLevelStatus {
/**
 * @brief Enumeration DeviceLevelStatus.
 *
 * Reflects the reported battery status of the connected device, if reported.
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
} // DeviceLevelStatus

namespace PrimaryAudioSource {
/**
 * @brief Enumeration PrimaryAudioSource.
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
} // PrimaryAudioSource

namespace WiperStatus {
/**
 * @brief Enumeration WiperStatus.
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
   */
  OFF,

  /**
   * @brief AUTO_OFF.
   */
  AUTO_OFF,

  /**
   * @brief OFF_MOVING.
   */
  OFF_MOVING,

  /**
   * @brief MAN_INT_OFF.
   */
  MAN_INT_OFF,

  /**
   * @brief MAN_INT_ON.
   */
  MAN_INT_ON,

  /**
   * @brief MAN_LOW.
   */
  MAN_LOW,

  /**
   * @brief MAN_HIGH.
   */
  MAN_HIGH,

  /**
   * @brief MAN_FLICK.
   */
  MAN_FLICK,

  /**
   * @brief WASH.
   */
  WASH,

  /**
   * @brief AUTO_LOW.
   */
  AUTO_LOW,

  /**
   * @brief AUTO_HIGH.
   */
  AUTO_HIGH,

  /**
   * @brief COURTESYWIPE.
   */
  COURTESYWIPE,

  /**
   * @brief AUTO_ADJUST.
   */
  AUTO_ADJUST,

  /**
   * @brief STALLED.
   */
  STALLED,

  /**
   * @brief NO_DATA_EXISTS.
   */
  NO_DATA_EXISTS
};
} // WiperStatus

namespace VehicleDataStatus {
/**
 * @brief Enumeration VehicleDataStatus.
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
} // VehicleDataStatus

namespace MaintenanceModeStatus {
/**
 * @brief Enumeration MaintenanceModeStatus.
 *
 * Reflects the status of a vehicle maintenance mode.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief MMS_NORMAL.
   */
  MMS_NORMAL,

  /**
   * @brief MMS_NEAR.
   */
  MMS_NEAR,

  /**
   * @brief MMS_ACTIVE.
   */
  MMS_ACTIVE,

  /**
   * @brief MMS_FEATURE_NOT_PRESENT.
   */
  MMS_FEATURE_NOT_PRESENT
};
} // MaintenanceModeStatus

namespace VehicleDataActiveStatus {
/**
 * @brief Enumeration VehicleDataActiveStatus.
 *
 * Reflects the status of given vehicle component.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief VDAS_INACTIVE_NOT_CONFIRMED.
   */
  VDAS_INACTIVE_NOT_CONFIRMED,

  /**
   * @brief VDAS_INACTIVE_CONFIRMED.
   */
  VDAS_INACTIVE_CONFIRMED,

  /**
   * @brief VDAS_ACTIVE_NOT_CONFIRMED.
   */
  VDAS_ACTIVE_NOT_CONFIRMED,

  /**
   * @brief VDAS_ACTIVE_CONFIRMED.
   */
  VDAS_ACTIVE_CONFIRMED,

  /**
   * @brief VDAS_FAULT.
   */
  VDAS_FAULT
};
} // VehicleDataActiveStatus

namespace AmbientLightStatus {
/**
 * @brief Enumeration AmbientLightStatus.
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
   * @brief ALS_UNKNOWN.
   */
  ALS_UNKNOWN,

  /**
   * @brief INVALID.
   */
  INVALID
};
} // AmbientLightStatus

namespace ModuleType {
/**
 * @brief Enumeration ModuleType.
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
} // ModuleType

namespace DefrostZone {
/**
 * @brief Enumeration DefrostZone.
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
} // DefrostZone

namespace VentilationMode {
/**
 * @brief Enumeration VentilationMode.
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
} // VentilationMode

namespace RadioBand {
/**
 * @brief Enumeration RadioBand.
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
} // RadioBand

namespace RadioState {
/**
 * @brief Enumeration RadioState.
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
} // RadioState

namespace TemperatureUnit {
/**
 * @brief Enumeration TemperatureUnit.
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
} // TemperatureUnit

namespace FileType {
/**
 * @brief Enumeration FileType.
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
} // FileType

namespace FuelCutoffStatus {
/**
 * @brief Enumeration FuelCutoffStatus.
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
} // FuelCutoffStatus

namespace EmergencyEventType {
/**
 * @brief Enumeration EmergencyEventType.
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
} // EmergencyEventType

namespace ECallConfirmationStatus {
/**
 * @brief Enumeration ECallConfirmationStatus.
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
} // ECallConfirmationStatus

namespace PowerModeQualificationStatus {
/**
 * @brief Enumeration PowerModeQualificationStatus.
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
} // PowerModeQualificationStatus

namespace PowerModeStatus {
/**
 * @brief Enumeration PowerModeStatus.
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
} // PowerModeStatus

namespace CarModeStatus {
/**
 * @brief Enumeration CarModeStatus.
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
} // CarModeStatus

namespace VehicleDataResultCode {
/**
 * @brief Enumeration VehicleDataResultCode.
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
   *
   * Individual vehicle data item / DTC / DID request or subscription successful
   */
  VDRC_SUCCESS,

  /**
   * @brief VDRC_TRUNCATED_DATA.
   *
   * DTC / DID request successful, however, not all active DTCs or full contents of DID location available
   */
  VDRC_TRUNCATED_DATA,

  /**
   * @brief VDRC_DISALLOWED.
   *
   * This vehicle data item is not allowed for this app by Ford.
   */
  VDRC_DISALLOWED,

  /**
   * @brief VDRC_USER_DISALLOWED.
   *
   * The user has not granted access to this type of vehicle data item at this time.
   */
  VDRC_USER_DISALLOWED,

  /**
   * @brief VDRC_INVALID_ID.
   *
   * The ECU ID referenced is not a valid ID on the bus / system.
   */
  VDRC_INVALID_ID,

  /**
   * @brief VDRC_DATA_NOT_AVAILABLE.
   *
   * The requested vehicle data item / DTC / DID is not currently available or responding on the bus / system.
   */
  VDRC_DATA_NOT_AVAILABLE,

  /**
   * @brief VDRC_DATA_ALREADY_SUBSCRIBED.
   *
   * The vehicle data item is already subscribed.
   */
  VDRC_DATA_ALREADY_SUBSCRIBED,

  /**
   * @brief VDRC_DATA_NOT_SUBSCRIBED.
   *
   * The vehicle data item cannot be unsubscribed because it is not currently subscribed.
   */
  VDRC_DATA_NOT_SUBSCRIBED,

  /**
   * @brief VDRC_IGNORED.
   *
   * The request for this item is ignored because it is already in progress.
   */
  VDRC_IGNORED
};
} // VehicleDataResultCode

namespace TurnSignal {
/**
 * @brief Enumeration TurnSignal.
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
} // TurnSignal

namespace TouchType {
/**
 * @brief Enumeration TouchType.
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
} // TouchType

namespace PermissionStatus {
/**
 * @brief Enumeration PermissionStatus.
 *
 * Enumeration that describes possible permission states of a policy table entry.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief PS_ALLOWED.
   */
  PS_ALLOWED,

  /**
   * @brief PS_DISALLOWED.
   */
  PS_DISALLOWED,

  /**
   * @brief PS_USER_DISALLOWED.
   */
  PS_USER_DISALLOWED,

  /**
   * @brief PS_USER_CONSENT_PENDING.
   */
  PS_USER_CONSENT_PENDING
};
} // PermissionStatus

namespace KeyboardLayout {
/**
 * @brief Enumeration KeyboardLayout.
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
} // KeyboardLayout

namespace KeyboardEvent {
/**
 * @brief Enumeration KeyboardEvent.
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
} // KeyboardEvent

namespace KeypressMode {
/**
 * @brief Enumeration KeypressMode.
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
} // KeypressMode

namespace RequestType {
/**
 * @brief Enumeration RequestType.
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
} // RequestType

namespace AppHMIType {
/**
 * @brief Enumeration AppHMIType.
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
} // AppHMIType

namespace PredefinedLayout {
/**
 * @brief Enumeration PredefinedLayout.
 *
 * Predefined screen layout.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief DEFAULT.
   *
   * 
   *                 Default media / non-media screen.
   *                 Can be set as a root screen.
   *             
   */
  DEFAULT,

  /**
   * @brief MEDIA.
   *
   * 
   *                 Default Media screen.
   *                 Can be set as a root screen.
   *             
   */
  MEDIA,

  /**
   * @brief NON_MEDIA.
   *
   * 
   *                 Default Non-media screen.
   *                 Can be set as a root screen.
   *             
   */
  NON_MEDIA,

  /**
   * @brief ONSCREEN_PRESETS.
   *
   * 
   *                 Custom root media screen containing app-defined onscreen presets.
   *                 Can be set as a root screen.
   *             
   */
  ONSCREEN_PRESETS,

  /**
   * @brief NAV_FULLSCREEN_MAP.
   *
   * 
   *                 Custom root template screen containing full screen map with navigation controls.
   *                 Can be set as a root screen.
   *             
   */
  NAV_FULLSCREEN_MAP,

  /**
   * @brief NAV_LIST.
   *
   * 
   *                 Custom root template screen containing video represented list.
   *                 Can be set as a root screen.
   *             
   */
  NAV_LIST,

  /**
   * @brief NAV_KEYBOARD.
   *
   * 
   *                 Custom root template screen containing video represented keyboard.
   *                 Can be set as a root screen.
   *             
   */
  NAV_KEYBOARD,

  /**
   * @brief GRAPHIC_WITH_TEXT.
   *
   * 
   *                 Custom root template screen containing half-screen graphic with lines of text.
   *                 Can be set as a root screen.
   *             
   */
  GRAPHIC_WITH_TEXT,

  /**
   * @brief TEXT_WITH_GRAPHIC.
   *
   * 
   *                 Custom root template screen containing lines of text with half-screen graphic.
   *                 Can be set as a root screen.
   *             
   */
  TEXT_WITH_GRAPHIC,

  /**
   * @brief TILES_ONLY.
   *
   * 
   *                 Custom root template screen containing only tiled SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  TILES_ONLY,

  /**
   * @brief TEXTBUTTONS_ONLY.
   *
   * 
   *                 Custom root template screen containing only text SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  TEXTBUTTONS_ONLY,

  /**
   * @brief GRAPHIC_WITH_TILES.
   *
   * 
   *                 Custom root template screen containing half-screen graphic with tiled SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  GRAPHIC_WITH_TILES,

  /**
   * @brief TILES_WITH_GRAPHIC.
   *
   * 
   *                 Custom root template screen containing tiled SoftButtons with half-screen graphic.
   *                 Can be set as a root screen.
   *             
   */
  TILES_WITH_GRAPHIC,

  /**
   * @brief GRAPHIC_WITH_TEXT_AND_SOFTBUTTONS.
   *
   * 
   *                 Custom root template screen containing half-screen graphic with text and SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  GRAPHIC_WITH_TEXT_AND_SOFTBUTTONS,

  /**
   * @brief TEXT_AND_SOFTBUTTONS_WITH_GRAPHIC.
   *
   * 
   *                 Custom root template screen containing text and SoftButtons with half-screen graphic.
   *                 Can be set as a root screen.
   *             
   */
  TEXT_AND_SOFTBUTTONS_WITH_GRAPHIC,

  /**
   * @brief GRAPHIC_WITH_TEXTBUTTONS.
   *
   * 
   *                 Custom root template screen containing half-screen graphic with text only SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  GRAPHIC_WITH_TEXTBUTTONS,

  /**
   * @brief TEXTBUTTONS_WITH_GRAPHIC.
   *
   * 
   *                 Custom root template screen containing text only SoftButtons with half-screen graphic.
   *                 Can be set as a root screen.
   *             
   */
  TEXTBUTTONS_WITH_GRAPHIC,

  /**
   * @brief LARGE_GRAPHIC_WITH_SOFTBUTTONS.
   *
   * 
   *                 Custom root template screen containing a large graphic and SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  LARGE_GRAPHIC_WITH_SOFTBUTTONS,

  /**
   * @brief DOUBLE_GRAPHIC_WITH_SOFTBUTTONS.
   *
   * 
   *                 Custom root template screen containing two graphics and SoftButtons.
   *                 Can be set as a root screen.
   *             
   */
  DOUBLE_GRAPHIC_WITH_SOFTBUTTONS,

  /**
   * @brief LARGE_GRAPHIC_ONLY.
   *
   * 
   *                 Custom root template screen containing only a large graphic.
   *                 Can be set as a root screen.
   *             
   */
  LARGE_GRAPHIC_ONLY
};
} // PredefinedLayout

namespace FunctionID {
/**
 * @brief Enumeration FunctionID.
 *
 * Enumeration linking function names with function IDs in SmartDeviceLink protocol. Assumes enumeration starts at value 0.
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief RESERVED.
   */
  RESERVED = 0,

  /**
   * @brief RegisterAppInterfaceID.
   */
  RegisterAppInterfaceID = 1,

  /**
   * @brief UnregisterAppInterfaceID.
   */
  UnregisterAppInterfaceID = 2,

  /**
   * @brief SetGlobalPropertiesID.
   */
  SetGlobalPropertiesID = 3,

  /**
   * @brief ResetGlobalPropertiesID.
   */
  ResetGlobalPropertiesID = 4,

  /**
   * @brief AddCommandID.
   */
  AddCommandID = 5,

  /**
   * @brief DeleteCommandID.
   */
  DeleteCommandID = 6,

  /**
   * @brief AddSubMenuID.
   */
  AddSubMenuID = 7,

  /**
   * @brief DeleteSubMenuID.
   */
  DeleteSubMenuID = 8,

  /**
   * @brief CreateInteractionChoiceSetID.
   */
  CreateInteractionChoiceSetID = 9,

  /**
   * @brief PerformInteractionID.
   */
  PerformInteractionID = 10,

  /**
   * @brief DeleteInteractionChoiceSetID.
   */
  DeleteInteractionChoiceSetID = 11,

  /**
   * @brief AlertID.
   */
  AlertID = 12,

  /**
   * @brief ShowID.
   */
  ShowID = 13,

  /**
   * @brief SpeakID.
   */
  SpeakID = 14,

  /**
   * @brief SetMediaClockTimerID.
   */
  SetMediaClockTimerID = 15,

  /**
   * @brief PerformAudioPassThruID.
   */
  PerformAudioPassThruID = 16,

  /**
   * @brief EndAudioPassThruID.
   */
  EndAudioPassThruID = 17,

  /**
   * @brief SubscribeButtonID.
   */
  SubscribeButtonID = 18,

  /**
   * @brief UnsubscribeButtonID.
   */
  UnsubscribeButtonID = 19,

  /**
   * @brief SubscribeVehicleDataID.
   */
  SubscribeVehicleDataID = 20,

  /**
   * @brief UnsubscribeVehicleDataID.
   */
  UnsubscribeVehicleDataID = 21,

  /**
   * @brief GetVehicleDataID.
   */
  GetVehicleDataID = 22,

  /**
   * @brief ReadDIDID.
   */
  ReadDIDID = 23,

  /**
   * @brief GetDTCsID.
   */
  GetDTCsID = 24,

  /**
   * @brief ScrollableMessageID.
   */
  ScrollableMessageID = 25,

  /**
   * @brief SliderID.
   */
  SliderID = 26,

  /**
   * @brief ShowConstantTBTID.
   */
  ShowConstantTBTID = 27,

  /**
   * @brief AlertManeuverID.
   */
  AlertManeuverID = 28,

  /**
   * @brief UpdateTurnListID.
   */
  UpdateTurnListID = 29,

  /**
   * @brief ChangeRegistrationID.
   */
  ChangeRegistrationID = 30,

  /**
   * @brief GenericResponseID.
   */
  GenericResponseID = 31,

  /**
   * @brief PutFileID.
   */
  PutFileID = 32,

  /**
   * @brief DeleteFileID.
   */
  DeleteFileID = 33,

  /**
   * @brief ListFilesID.
   */
  ListFilesID = 34,

  /**
   * @brief SetAppIconID.
   */
  SetAppIconID = 35,

  /**
   * @brief SetDisplayLayoutID.
   */
  SetDisplayLayoutID = 36,

  /**
   * @brief DiagnosticMessageID.
   */
  DiagnosticMessageID = 37,

  /**
   * @brief SystemRequestID.
   */
  SystemRequestID = 38,

  /**
   * @brief SendLocationID.
   */
  SendLocationID = 39,

  /**
   * @brief DialNumberID.
   */
  DialNumberID = 40,

  /**
   * @brief ButtonPressID.
   */
  ButtonPressID = 41,

  /**
   * @brief GetInteriorVehicleDataID.
   */
  GetInteriorVehicleDataID = 43,

  /**
   * @brief SetInteriorVehicleDataID.
   */
  SetInteriorVehicleDataID = 44,

  /**
   * @brief GetWayPointsID.
   */
  GetWayPointsID = 45,

  /**
   * @brief SubscribeWayPointsID.
   */
  SubscribeWayPointsID = 46,

  /**
   * @brief UnsubscribeWayPointsID.
   */
  UnsubscribeWayPointsID = 47,

  /**
   * @brief GetSystemCapabilityID.
   */
  GetSystemCapabilityID = 48,

  /**
   * @brief SendHapticDataID.
   */
  SendHapticDataID = 49,

  /**
   * @brief SetCloudAppPropertiesID.
   */
  SetCloudAppPropertiesID = 50,

  /**
   * @brief GetCloudAppPropertiesID.
   */
  GetCloudAppPropertiesID = 51,

  /**
   * @brief PublishAppServiceID.
   */
  PublishAppServiceID = 52,

  /**
   * @brief GetAppServiceDataID.
   */
  GetAppServiceDataID = 53,

  /**
   * @brief GetFileID.
   */
  GetFileID = 54,

  /**
   * @brief PerformAppServiceInteractionID.
   */
  PerformAppServiceInteractionID = 55,

  /**
   * @brief CloseApplicationID.
   */
  CloseApplicationID = 58,

  /**
   * @brief OnHMIStatusID.
   */
  OnHMIStatusID = 32768,

  /**
   * @brief OnAppInterfaceUnregisteredID.
   */
  OnAppInterfaceUnregisteredID = 32769,

  /**
   * @brief OnButtonEventID.
   */
  OnButtonEventID = 32770,

  /**
   * @brief OnButtonPressID.
   */
  OnButtonPressID = 32771,

  /**
   * @brief OnVehicleDataID.
   */
  OnVehicleDataID = 32772,

  /**
   * @brief OnCommandID.
   */
  OnCommandID = 32773,

  /**
   * @brief OnTBTClientStateID.
   */
  OnTBTClientStateID = 32774,

  /**
   * @brief OnDriverDistractionID.
   */
  OnDriverDistractionID = 32775,

  /**
   * @brief OnPermissionsChangeID.
   */
  OnPermissionsChangeID = 32776,

  /**
   * @brief OnAudioPassThruID.
   */
  OnAudioPassThruID = 32777,

  /**
   * @brief OnLanguageChangeID.
   */
  OnLanguageChangeID = 32778,

  /**
   * @brief OnKeyboardInputID.
   */
  OnKeyboardInputID = 32779,

  /**
   * @brief OnTouchEventID.
   */
  OnTouchEventID = 32780,

  /**
   * @brief OnSystemRequestID.
   */
  OnSystemRequestID = 32781,

  /**
   * @brief OnHashChangeID.
   */
  OnHashChangeID = 32782,

  /**
   * @brief OnInteriorVehicleDataID.
   */
  OnInteriorVehicleDataID = 32783,

  /**
   * @brief OnWayPointChangeID.
   */
  OnWayPointChangeID = 32784,

  /**
   * @brief OnRCStatusID.
   */
  OnRCStatusID = 32785,

  /**
   * @brief OnAppServiceDataID.
   */
  OnAppServiceDataID = 32786,

  /**
   * @brief OnSystemCapabilityUpdatedID.
   */
  OnSystemCapabilityUpdatedID = 32787,

  /**
   * @brief EncodedSyncPDataID.
   */
  EncodedSyncPDataID = 65536,

  /**
   * @brief SyncPDataID.
   */
  SyncPDataID = 65537,

  /**
   * @brief OnEncodedSyncPDataID.
   */
  OnEncodedSyncPDataID = 98304,

  /**
   * @brief OnSyncPDataID.
   */
  OnSyncPDataID = 98305
};
} // FunctionID

namespace messageType {
/**
 * @brief Enumeration messageType.
 *
 * 
 *             Enumeration linking message types with function types in WiPro protocol.
 *             Assumes enumeration starts at value 0.
 *         
 */
enum eType {
  /**
   * @brief INVALID_ENUM.
   */
  INVALID_ENUM = -1,

  /**
   * @brief request.
   */
  request = 0,

  /**
   * @brief response.
   */
  response = 1,

  /**
   * @brief notification.
   */
  notification = 2
};
} // messageType

namespace WayPointType {
/**
 * @brief Enumeration WayPointType.
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
} // WayPointType

namespace SystemCapabilityType {
/**
 * @brief Enumeration SystemCapabilityType.
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
} // SystemCapabilityType

namespace MassageZone {
/**
 * @brief Enumeration MassageZone.
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
} // MassageZone

namespace MassageMode {
/**
 * @brief Enumeration MassageMode.
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
} // MassageMode

namespace MassageCushion {
/**
 * @brief Enumeration MassageCushion.
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
} // MassageCushion

namespace SeatMemoryActionType {
/**
 * @brief Enumeration SeatMemoryActionType.
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
} // SeatMemoryActionType

namespace SupportedSeat {
/**
 * @brief Enumeration SupportedSeat.
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
} // SupportedSeat

namespace LightName {
/**
 * @brief Enumeration LightName.
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
   * Include all daytime running lights: front_left and front_right.
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
   * Include exterior lights located at the back of the vehicle. For example, license plate lights, reverse lights, cargo lights, bed lights and trailer assist lights.
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
} // LightName

namespace LightStatus {
/**
 * @brief Enumeration LightStatus.
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
} // LightStatus

namespace DisplayMode {
/**
 * @brief Enumeration DisplayMode.
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
} // DisplayMode

namespace DistanceUnit {
/**
 * @brief Enumeration DistanceUnit.
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
} // DistanceUnit

namespace MetadataType {
/**
 * @brief Enumeration MetadataType.
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
} // MetadataType

namespace AppServiceType {
/**
 * @brief Enumeration AppServiceType.
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
} // AppServiceType

namespace MediaType {
/**
 * @brief Enumeration MediaType.
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
} // MediaType

namespace NavigationAction {
/**
 * @brief Enumeration NavigationAction.
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
} // NavigationAction

namespace NavigationJunction {
/**
 * @brief Enumeration NavigationJunction.
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
} // NavigationJunction

namespace Direction {
/**
 * @brief Enumeration Direction.
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
} // Direction

namespace ServiceUpdateReason {
/**
 * @brief Enumeration ServiceUpdateReason.
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
   *  The service has updated its manifest. This could imply updated capabilities
   */
  MANIFEST_UPDATE
};
} // ServiceUpdateReason
} // mobile_apis
#endif //__CSMARTFACTORY_MOBILE_API_0a5abf23aa4511e9895f60f81dc21830_H__



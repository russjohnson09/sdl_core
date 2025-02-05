/*
 * Copyright (c) 2018, Ford Motor Company
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

#include <stdint.h>
#include <string>
#include <vector>

#include "application_manager/application.h"
#include "application_manager/commands/command_request_test.h"
#include "application_manager/commands/commands_test.h"
#include "application_manager/mock_application.h"
#include "application_manager/mock_application_helper.h"
#include "application_manager/mock_application_manager.h"
#include "application_manager/mock_hmi_capabilities.h"
#include "application_manager/mock_hmi_interface.h"
#include "application_manager/mock_resume_ctrl.h"
#include "application_manager/policies/mock_policy_handler_interface.h"
#include "application_manager/smart_object_keys.h"
#include "connection_handler/mock_connection_handler.h"
#include "gtest/gtest.h"
#include "interfaces/MOBILE_API.h"
#include "mobile/register_app_interface_request.h"
#include "protocol_handler/mock_session_observer.h"
#include "smart_objects/smart_object.h"
#include "utils/custom_string.h"
#include "utils/data_accessor.h"
#include "utils/lock.h"
#include "utils/macro.h"
#include "utils/semantic_version.h"

namespace test {
namespace components {
namespace commands_test {
namespace mobile_commands_test {
namespace register_app_interface_request {

using ::testing::_;
using ::testing::DoAll;
using ::testing::Return;
using ::testing::ReturnRef;
using ::testing::SaveArg;
using ::testing::SetArgPointee;

namespace am = ::application_manager;

using am::commands::MessageSharedPtr;
using sdl_rpc_plugin::commands::RegisterAppInterfaceRequest;

namespace {
const uint32_t kConnectionKey = 1u;
const uint32_t kConnectionKey2 = 2u;
const connection_handler::DeviceHandle kDeviceHandle = 3u;
const hmi_apis::Common_Language::eType kHmiLanguage =
    hmi_apis::Common_Language::EN_US;
const mobile_apis::Language::eType kMobileLanguage =
    mobile_apis::Language::EN_US;
const std::string kMacAddress1 = "test_mac_address1";
const std::string kMacAddress2 = "test_mac_address2";
const std::string kAppId1 = "test_app1_id";
const std::string kAppId2 = "test_app2_id";
const std::string kFullAppId = "test_app_id_long";
const std::string kDummyString = "test_string";
const std::vector<uint32_t> kDummyDiagModes;
const utils::SemanticVersion mock_semantic_version(1, 0, 0);
}  // namespace

class RegisterAppInterfaceRequestTest
    : public CommandRequestTest<CommandsTestMocks::kIsNice> {
 public:
  RegisterAppInterfaceRequestTest()
      : msg_(CreateMessage())
      , command_(CreateCommand<RegisterAppInterfaceRequest>(msg_))
      , app_name_("test_app_name_")
      , app2_name_("test_app2_name_")
      , lock_ptr_(std::make_shared<sync_primitives::Lock>())
      , mock_application_helper_(
            application_manager_test::MockApplicationHelper::
                application_helper_mock()) {
    InitGetters();
    InitLanguage();
  }

  void SetUp() OVERRIDE {
    testing::Mock::VerifyAndClearExpectations(&mock_application_helper_);
  }

  void TearDown() OVERRIDE {
    testing::Mock::VerifyAndClearExpectations(&mock_application_helper_);
  }

  void InitBasicMessage() {
    (*msg_)[am::strings::params][am::strings::connection_key] = kConnectionKey;
    (*msg_)[am::strings::msg_params][am::strings::app_id] = kAppId1;
    (*msg_)[am::strings::msg_params][am::strings::full_app_id] = kFullAppId;
    (*msg_)[am::strings::msg_params][am::strings::app_name] = app_name_;
    (*msg_)[am::strings::msg_params][am::strings::language_desired] =
        kHmiLanguage;
    (*msg_)[am::strings::msg_params]
           [am::strings::hmi_display_language_desired] = kHmiLanguage;
    (*msg_)[am::strings::msg_params][am::strings::sync_msg_version]
           [am::strings::major_version] = 4;
    (*msg_)[am::strings::msg_params][am::strings::sync_msg_version]
           [am::strings::minor_version] = 0;
    (*msg_)[am::strings::msg_params][am::strings::sync_msg_version]
           [am::strings::patch_version] = 0;
  }

  MockAppPtr CreateBasicMockedApp() {
    MockAppPtr mock_app = CreateMockApp();
    ON_CALL(*mock_app, name()).WillByDefault(ReturnRef(app_name_));
    ON_CALL(*mock_app, mac_address()).WillByDefault(ReturnRef(kMacAddress1));
    ON_CALL(*mock_app, app_icon_path()).WillByDefault(ReturnRef(kDummyString));
    ON_CALL(*mock_app, language()).WillByDefault(ReturnRef(kMobileLanguage));
    ON_CALL(*mock_app, ui_language()).WillByDefault(ReturnRef(kMobileLanguage));
    ON_CALL(*mock_app, policy_app_id()).WillByDefault(Return(kAppId1));
    ON_CALL(*mock_app, msg_version())
        .WillByDefault(ReturnRef(mock_semantic_version));
    return mock_app;
  }

  void InitLanguage(
      hmi_apis::Common_Language::eType ui_language = kHmiLanguage,
      hmi_apis::Common_Language::eType vr_language = kHmiLanguage,
      hmi_apis::Common_Language::eType tts_language = kHmiLanguage) {
    ON_CALL(mock_hmi_capabilities_, active_vr_language())
        .WillByDefault(Return(vr_language));
    ON_CALL(mock_hmi_capabilities_, active_ui_language())
        .WillByDefault(Return(ui_language));
    ON_CALL(mock_hmi_capabilities_, active_tts_language())
        .WillByDefault(Return(tts_language));
  }

  void InitGetters() {
    ON_CALL(app_mngr_, GetCorrectMobileIDFromMessage(msg_))
        .WillByDefault(Return(kAppId1));
    ON_CALL(app_mngr_, IsHMICooperating()).WillByDefault(Return(true));
    ON_CALL(app_mngr_, resume_controller())
        .WillByDefault(ReturnRef(mock_resume_crt_));
    ON_CALL(app_mngr_, connection_handler())
        .WillByDefault(ReturnRef(mock_connection_handler_));
    ON_CALL(mock_connection_handler_, get_session_observer())
        .WillByDefault(ReturnRef(mock_session_observer_));
    ON_CALL(app_mngr_settings_, sdl_version())
        .WillByDefault(ReturnRef(kDummyString));
    ON_CALL(mock_hmi_capabilities_, ccpu_version())
        .WillByDefault(ReturnRef(kDummyString));
    ON_CALL(app_mngr_settings_, supported_diag_modes())
        .WillByDefault(ReturnRef(kDummyDiagModes));
    ON_CALL(mock_policy_handler_, GetAppRequestTypes(_, _))
        .WillByDefault(Return(std::vector<std::string>()));
    ON_CALL(mock_policy_handler_, GetAppRequestTypeState(_))
        .WillByDefault(Return(policy::RequestType::State::EMPTY));
    ON_CALL(mock_policy_handler_, GetAppRequestSubTypes(_))
        .WillByDefault(Return(std::vector<std::string>()));
    ON_CALL(mock_policy_handler_, GetAppRequestSubTypeState(_))
        .WillByDefault(Return(policy::RequestSubType::State::EMPTY));
    ON_CALL(mock_policy_handler_, GetUserConsentForDevice(_))
        .WillByDefault(Return(policy::DeviceConsent::kDeviceAllowed));
    ON_CALL(app_mngr_, GetDeviceTransportType(_))
        .WillByDefault(Return(hmi_apis::Common_TransportType::WIFI));
    ON_CALL(app_mngr_, IsAppInReconnectMode(_, _)).WillByDefault(Return(false));
    ON_CALL(app_mngr_, application_by_policy_id(_))
        .WillByDefault(Return(ApplicationSharedPtr()));
    ON_CALL(mock_hmi_interfaces_, GetInterfaceState(_))
        .WillByDefault(Return(am::HmiInterfaces::STATE_NOT_AVAILABLE));
    ON_CALL(
        mock_hmi_interfaces_,
        GetInterfaceFromFunction(hmi_apis::FunctionID::VR_ChangeRegistration))
        .WillByDefault(Return(am::HmiInterfaces::HMI_INTERFACE_VR));
    ON_CALL(
        mock_hmi_interfaces_,
        GetInterfaceFromFunction(hmi_apis::FunctionID::TTS_ChangeRegistration))
        .WillByDefault(Return(am::HmiInterfaces::HMI_INTERFACE_TTS));
    ON_CALL(
        mock_hmi_interfaces_,
        GetInterfaceFromFunction(hmi_apis::FunctionID::UI_ChangeRegistration))
        .WillByDefault(Return(am::HmiInterfaces::HMI_INTERFACE_UI));
  }

  void SetCommonExpectionsOnSwitchedApplication(
      MockAppPtr mock_app, mobile_apis::Result::eType response_result_code) {
    EXPECT_CALL(mock_policy_handler_, AddApplication(_, _, _)).Times(0);

    EXPECT_CALL(
        mock_rpc_service_,
        ManageMobileCommand(MobileResultCodeIs(response_result_code), _));

    EXPECT_CALL(
        mock_rpc_service_,
        ManageHMICommand(
            HMIResultCodeIs(
                hmi_apis::FunctionID::BasicCommunication_OnAppRegistered),
            _))
        .Times(0);

    EXPECT_CALL(
        mock_rpc_service_,
        ManageHMICommand(
            HMIResultCodeIs(hmi_apis::FunctionID::Buttons_OnButtonSubscription),
            _))
        .Times(0);

    EXPECT_CALL(
        mock_rpc_service_,
        ManageHMICommand(
            HMIResultCodeIs(hmi_apis::FunctionID::UI_ChangeRegistration), _))
        .Times(0);

    EXPECT_CALL(
        mock_rpc_service_,
        ManageHMICommand(
            HMIResultCodeIs(hmi_apis::FunctionID::TTS_ChangeRegistration), _))
        .Times(0);

    EXPECT_CALL(
        mock_rpc_service_,
        ManageHMICommand(
            HMIResultCodeIs(hmi_apis::FunctionID::VR_ChangeRegistration), _))
        .Times(0);

    EXPECT_CALL(app_mngr_,
                OnApplicationSwitched(
                    std::static_pointer_cast<application_manager::Application>(
                        mock_app)));
  }

  MessageSharedPtr msg_;
  std::shared_ptr<RegisterAppInterfaceRequest> command_;

  const utils::custom_string::CustomString app_name_;
  const utils::custom_string::CustomString app2_name_;
  std::shared_ptr<sync_primitives::Lock> lock_ptr_;
  am::ApplicationSet app_set_;

  typedef IsNiceMock<policy_test::MockPolicyHandlerInterface,
                     kMocksAreNice>::Result MockPolicyHandlerInterface;

  typedef IsNiceMock<resumprion_test::MockResumeCtrl, kMocksAreNice>::Result
      MockResumeCtrl;

  typedef IsNiceMock<connection_handler_test::MockConnectionHandler,
                     kMocksAreNice>::Result MockConnectionHandler;

  typedef IsNiceMock<protocol_handler_test::MockSessionObserver,
                     kMocksAreNice>::Result MockSessionObserver;

  typedef IsNiceMock<application_manager_test::MockHMICapabilities,
                     kMocksAreNice>::Result MockHMICapabilities;

  MockResumeCtrl mock_resume_crt_;
  MockConnectionHandler mock_connection_handler_;
  MockSessionObserver mock_session_observer_;
  application_manager_test::MockApplicationHelper& mock_application_helper_;
};

TEST_F(RegisterAppInterfaceRequestTest, Init_SUCCESS) {
  EXPECT_TRUE(command_->Init());
}

TEST_F(RegisterAppInterfaceRequestTest, Run_MinimalData_SUCCESS) {
  InitBasicMessage();
  (*msg_)[am::strings::msg_params][am::strings::hash_id] = kAppId1;
  EXPECT_CALL(app_mngr_, IsStopping())
      .WillOnce(Return(false))
      .WillOnce(Return(true))
      .WillOnce(Return(false));
  ON_CALL(app_mngr_, IsHMICooperating()).WillByDefault(Return(false));
  EXPECT_CALL(app_mngr_, updateRequestTimeout(_, _, _));
  EXPECT_CALL(app_mngr_, IsApplicationForbidden(_, _)).WillOnce(Return(false));

  connection_handler::DeviceHandle handle = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(handle), Return(0)));
  ON_CALL(mock_session_observer_, GetDataOnDeviceID(handle, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  MockAppPtr mock_app = CreateBasicMockedApp();
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(ApplicationSharedPtr()));
  EXPECT_CALL(app_mngr_, application(kMacAddress1, kAppId1))
      .WillRepeatedly(Return(ApplicationSharedPtr()));

  ON_CALL(app_mngr_, applications())
      .WillByDefault(
          Return(DataAccessor<am::ApplicationSet>(app_set_, lock_ptr_)));

  EXPECT_CALL(app_mngr_, application(kConnectionKey))
      .WillOnce(Return(mock_app));

  ON_CALL(mock_policy_handler_, PolicyEnabled()).WillByDefault(Return(true));
  ON_CALL(mock_policy_handler_, GetInitialAppData(kAppId1, _, _))
      .WillByDefault(Return(true));
  policy::StatusNotifier notify_upd_manager =
      std::make_shared<utils::CallNothing>();
  ON_CALL(mock_policy_handler_, AddApplication(kMacAddress1, kAppId1, _))
      .WillByDefault(Return(notify_upd_manager));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).WillOnce(Return(mock_app));

  EXPECT_CALL(mock_rpc_service_,
              ManageHMICommand(
                  HMIResultCodeIs(
                      hmi_apis::FunctionID::BasicCommunication_OnAppRegistered),
                  _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::Buttons_OnButtonSubscription),
          _))
      .WillOnce(Return(true));
  EXPECT_CALL(mock_rpc_service_,
              ManageMobileCommand(_, am::commands::Command::SOURCE_SDL))
      .Times(2);
  EXPECT_CALL(app_mngr_, SendDriverDistractionState(_));
  ASSERT_TRUE(command_->Init());
  command_->Run();
}

MATCHER_P(CheckHMIInterfacesRealtedData, expected_data, "") {
  const bool is_result_id_correct =
      mobile_apis::Result::SUCCESS ==
      static_cast<mobile_apis::Result::eType>(
          (*arg)[am::strings::msg_params][am::strings::result_code].asInt());

  const bool are_ui_related_data_exist =
      (*arg)[am::strings::msg_params].keyExists(
          am::hmi_response::display_capabilities);

  const bool are_vi_related_data_exist =
      (*arg)[am::strings::msg_params][am::hmi_response::vehicle_type] ==
      (*expected_data)[am::hmi_response::vehicle_type];

  const bool are_vr_related_data_exist =
      (*arg)[am::strings::msg_params][am::strings::vr_capabilities] ==
      (*expected_data)[am::strings::vr_capabilities];

  return is_result_id_correct && are_ui_related_data_exist &&
         are_vi_related_data_exist && are_vr_related_data_exist;
}

TEST_F(RegisterAppInterfaceRequestTest,
       Run_HmiInterfacesStateAvailable_SUCCESS) {
  InitBasicMessage();

  EXPECT_CALL(app_mngr_, IsStopping())
      .WillOnce(Return(false))
      .WillOnce(Return(true))
      .WillOnce(Return(false));
  ON_CALL(app_mngr_, IsHMICooperating()).WillByDefault(Return(false));
  EXPECT_CALL(app_mngr_, updateRequestTimeout(_, _, _));
  EXPECT_CALL(app_mngr_, IsApplicationForbidden(_, _)).WillOnce(Return(false));

  connection_handler::DeviceHandle handle = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(handle), Return(0)));
  ON_CALL(mock_session_observer_, GetDataOnDeviceID(_, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  MockAppPtr mock_app = CreateBasicMockedApp();
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(ApplicationSharedPtr()));
  EXPECT_CALL(app_mngr_, application(kMacAddress1, kAppId1))
      .WillRepeatedly(Return(ApplicationSharedPtr()));

  EXPECT_CALL(app_mngr_, application(kConnectionKey))
      .WillOnce(Return(mock_app));

  MessageSharedPtr expected_message =
      CreateMessage(smart_objects::SmartType_Map);

  (*expected_message)[am::hmi_response::vehicle_type] = "test_vehicle_type";
  (*expected_message)[am::strings::vr_capabilities] = "test_vr_capabilities";
  (*expected_message)[am::hmi_response::display_capabilities] = 0;
  SmartObject& display_capabilities =
      (*expected_message)[am::hmi_response::display_capabilities];
  display_capabilities[am::hmi_response::display_type] = "test_display_type";
  display_capabilities[am::hmi_response::display_name] = "GENERIC_DISPLAY";
  display_capabilities[am::hmi_response::text_fields] = "test_text_fields";
  display_capabilities[am::hmi_response::image_fields] = "test_image_fields";
  display_capabilities[am::hmi_response::media_clock_formats] =
      "test_media_clock_ptr_formats";
  display_capabilities[am::hmi_response::num_custom_presets_available] =
      "test_num_custom_presets_available";
  display_capabilities[am::hmi_response::graphic_supported] =
      "test_graphic_supported";
  display_capabilities[am::hmi_response::templates_available] =
      "test_templates_available";
  display_capabilities[am::hmi_response::screen_params] = "test_screen_params";

  ON_CALL(mock_hmi_capabilities_, vehicle_type())
      .WillByDefault(
          Return(&(*expected_message)[am::hmi_response::vehicle_type]));
  ON_CALL(mock_hmi_capabilities_, vr_capabilities())
      .WillByDefault(
          Return(&(*expected_message)[am::strings::vr_capabilities]));
  ON_CALL(mock_hmi_capabilities_, display_capabilities())
      .WillByDefault(
          Return(&(*expected_message)[am::hmi_response::display_capabilities]));

  ON_CALL(app_mngr_, applications())
      .WillByDefault(
          Return(DataAccessor<am::ApplicationSet>(app_set_, lock_ptr_)));
  ON_CALL(mock_policy_handler_, PolicyEnabled()).WillByDefault(Return(true));
  ON_CALL(mock_policy_handler_, GetInitialAppData(kAppId1, _, _))
      .WillByDefault(Return(true));
  policy::StatusNotifier notify_upd_manager =
      std::make_shared<utils::CallNothing>();
  ON_CALL(mock_policy_handler_, AddApplication(kMacAddress1, kAppId1, _))
      .WillByDefault(Return(notify_upd_manager));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).WillOnce(Return(mock_app));

  EXPECT_CALL(mock_hmi_interfaces_, GetInterfaceState(_))
      .WillRepeatedly(Return(am::HmiInterfaces::STATE_AVAILABLE));

  EXPECT_CALL(mock_rpc_service_,
              ManageHMICommand(
                  HMIResultCodeIs(
                      hmi_apis::FunctionID::BasicCommunication_OnAppRegistered),
                  _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::Buttons_OnButtonSubscription),
          _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::VR_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::TTS_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::UI_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(mock_rpc_service_,
              ManageMobileCommand(_, am::commands::Command::SOURCE_SDL))
      .Times(2);
  EXPECT_CALL(app_mngr_, SendDriverDistractionState(_));
  ASSERT_TRUE(command_->Init());
  command_->Run();
}

TEST_F(RegisterAppInterfaceRequestTest,
       SwitchApplication_CorrectHash_ExpectNoCleanupSuccess) {
  InitBasicMessage();

  const std::string request_hash_id = "abc123";
  (*msg_)[am::strings::msg_params][am::strings::hash_id] = request_hash_id;

  MockAppPtr mock_app = CreateBasicMockedApp();
  app_set_.insert(mock_app);
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(mock_app));

  connection_handler::DeviceHandle device_id = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(device_id), Return(0)));

  ON_CALL(mock_session_observer_, GetDataOnDeviceID(device_id, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  EXPECT_CALL(*mock_app, device()).WillOnce(Return(kDeviceHandle));

  EXPECT_CALL(app_mngr_, ProcessReconnection(_, kConnectionKey));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).Times(0);

  EXPECT_CALL(
      mock_resume_crt_,
      CheckApplicationHash(
          std::static_pointer_cast<application_manager::Application>(mock_app),
          request_hash_id))
      .WillOnce(Return(true));

  EXPECT_CALL(mock_resume_crt_, RemoveApplicationFromSaved(_)).Times(0);

  EXPECT_CALL(mock_application_helper_, RecallApplicationData(_, _)).Times(0);

  EXPECT_CALL(app_mngr_, application(kConnectionKey))
      .WillRepeatedly(Return(mock_app));

  SetCommonExpectionsOnSwitchedApplication(mock_app,
                                           mobile_apis::Result::SUCCESS);

  ASSERT_TRUE(command_->Init());
  command_->Run();
}

TEST_F(RegisterAppInterfaceRequestTest,
       SwitchApplication_WrongHash_ExpectCleanupResumeFailed) {
  InitBasicMessage();

  const std::string request_hash_id = "abc123";
  (*msg_)[am::strings::msg_params][am::strings::hash_id] = request_hash_id;

  connection_handler::DeviceHandle device_id = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(device_id), Return(0)));

  ON_CALL(mock_session_observer_, GetDataOnDeviceID(device_id, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  MockAppPtr mock_app = CreateBasicMockedApp();
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(mock_app));
  EXPECT_CALL(*mock_app, device()).WillOnce(Return(kDeviceHandle));

  EXPECT_CALL(app_mngr_, ProcessReconnection(_, kConnectionKey));

  EXPECT_CALL(
      mock_resume_crt_,
      CheckApplicationHash(
          std::static_pointer_cast<application_manager::Application>(mock_app),
          request_hash_id))
      .WillOnce(Return(false));

  EXPECT_CALL(
      mock_application_helper_,
      RecallApplicationData(
          std::static_pointer_cast<application_manager::Application>(mock_app),
          _));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).Times(0);

  EXPECT_CALL(app_mngr_, application(kConnectionKey))
      .WillRepeatedly(Return(mock_app));

  SetCommonExpectionsOnSwitchedApplication(mock_app,
                                           mobile_apis::Result::RESUME_FAILED);
  ASSERT_TRUE(command_->Init());
  command_->Run();
}

TEST_F(RegisterAppInterfaceRequestTest,
       SwitchApplication_NoHash_ExpectCleanupResumeFailed) {
  InitBasicMessage();

  connection_handler::DeviceHandle device_id = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(device_id), Return(0)));

  ON_CALL(mock_session_observer_, GetDataOnDeviceID(device_id, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  MockAppPtr mock_app = CreateBasicMockedApp();
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(mock_app));
  EXPECT_CALL(*mock_app, device()).WillOnce(Return(kDeviceHandle));

  EXPECT_CALL(app_mngr_, ProcessReconnection(_, kConnectionKey));

  EXPECT_CALL(
      mock_application_helper_,
      RecallApplicationData(
          std::static_pointer_cast<application_manager::Application>(mock_app),
          _));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).Times(0);

  EXPECT_CALL(app_mngr_, application(kConnectionKey))
      .WillRepeatedly(Return(mock_app));

  SetCommonExpectionsOnSwitchedApplication(mock_app,
                                           mobile_apis::Result::RESUME_FAILED);

  ASSERT_TRUE(command_->Init());
  command_->Run();
}

TEST_F(RegisterAppInterfaceRequestTest,
       RegisterApp_SameAppId_SameDeviceFailed) {
  using namespace am;

  InitBasicMessage();

  MockAppPtr mock_app1 = CreateBasicMockedApp();

  app_set_.insert(mock_app1);
  ON_CALL(app_mngr_, applications())
      .WillByDefault(
          Return(DataAccessor<am::ApplicationSet>(app_set_, lock_ptr_)));

  MockAppPtr mock_app2 = CreateBasicMockedApp();

  connection_handler::DeviceHandle device_id = 1;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(device_id), Return(0)));

  ON_CALL(mock_session_observer_, GetDataOnDeviceID(device_id, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress1), Return(0)));

  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(ApplicationSharedPtr()));
  EXPECT_CALL(app_mngr_, application(kMacAddress1, kAppId1))
      .WillOnce(Return(mock_app1));

  EXPECT_CALL(mock_rpc_service_, ManageHMICommand(_, _)).Times(0);

  EXPECT_CALL(mock_rpc_service_,
              ManageMobileCommand(
                  MobileResultCodeIs(
                      mobile_apis::Result::APPLICATION_REGISTERED_ALREADY),
                  am::commands::Command::SOURCE_SDL));

  ASSERT_TRUE(command_->Init());
  command_->Run();
}

TEST_F(RegisterAppInterfaceRequestTest,
       RegisterApp_SameAppId_DifferentDevicesSuccess) {
  MockAppPtr mock_app1 = CreateBasicMockedApp();
  const connection_handler::DeviceHandle device_id1 = 1u;
  ON_CALL(*mock_app1, device()).WillByDefault(Return(device_id1));
  app_set_.insert(mock_app1);
  ON_CALL(app_mngr_, applications())
      .WillByDefault(
          Return(DataAccessor<am::ApplicationSet>(app_set_, lock_ptr_)));

  InitBasicMessage();
  (*msg_)[am::strings::params][am::strings::connection_key] = kConnectionKey2;
  EXPECT_CALL(app_mngr_, IsStopping())
      .WillOnce(Return(false))
      .WillOnce(Return(true))
      .WillOnce(Return(false));
  ON_CALL(app_mngr_, IsHMICooperating()).WillByDefault(Return(false));
  EXPECT_CALL(app_mngr_, updateRequestTimeout(kConnectionKey2, _, _));
  EXPECT_CALL(app_mngr_, IsApplicationForbidden(kConnectionKey2, kAppId1))
      .WillOnce(Return(false));

  connection_handler::DeviceHandle device_id2 = 2u;
  ON_CALL(mock_connection_handler_,
          GetDataOnSessionKey(kConnectionKey2, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(device_id2), Return(0)));

  ON_CALL(mock_session_observer_, GetDataOnDeviceID(device_id2, _, _, _, _))
      .WillByDefault(DoAll(SetArgPointee<3>(kMacAddress2), Return(0)));

  MockAppPtr mock_app2 = CreateBasicMockedApp();

  ON_CALL(*mock_app2, device()).WillByDefault(Return(device_id2));
  ON_CALL(*mock_app2, mac_address()).WillByDefault(ReturnRef(kMacAddress2));
  EXPECT_CALL(app_mngr_, application(kMacAddress2, kAppId1))
      .WillRepeatedly(Return(ApplicationSharedPtr()));
  EXPECT_CALL(app_mngr_, reregister_application_by_policy_id(kAppId1))
      .WillOnce(Return(ApplicationSharedPtr()));

  EXPECT_CALL(app_mngr_, application(kConnectionKey2))
      .WillOnce(Return(mock_app2));

  ON_CALL(mock_policy_handler_, PolicyEnabled()).WillByDefault(Return(true));
  ON_CALL(mock_policy_handler_, GetInitialAppData(kAppId1, _, _))
      .WillByDefault(Return(true));
  policy::StatusNotifier notify_upd_manager =
      std::make_shared<utils::CallNothing>();
  ON_CALL(mock_policy_handler_, AddApplication(kMacAddress2, kAppId1, _))
      .WillByDefault(Return(notify_upd_manager));

  EXPECT_CALL(app_mngr_, RegisterApplication(msg_)).WillOnce(Return(mock_app2));

  EXPECT_CALL(mock_hmi_interfaces_, GetInterfaceState(_))
      .WillRepeatedly(Return(am::HmiInterfaces::STATE_AVAILABLE));

  EXPECT_CALL(mock_rpc_service_,
              ManageHMICommand(
                  HMIResultCodeIs(
                      hmi_apis::FunctionID::BasicCommunication_OnAppRegistered),
                  _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::Buttons_OnButtonSubscription),
          _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::VR_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::TTS_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(
      mock_rpc_service_,
      ManageHMICommand(
          HMIResultCodeIs(hmi_apis::FunctionID::UI_ChangeRegistration), _))
      .WillOnce(Return(true));
  EXPECT_CALL(mock_rpc_service_,
              ManageMobileCommand(_, am::commands::Command::SOURCE_SDL))
      .Times(2);
  EXPECT_CALL(app_mngr_, SendDriverDistractionState(_));

  ASSERT_TRUE(command_->Init());
  command_->Run();
}

}  // namespace register_app_interface_request
}  // namespace mobile_commands_test
}  // namespace commands_test
}  // namespace components
}  // namespace test

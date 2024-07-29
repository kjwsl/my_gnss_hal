/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssConfiguration.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssConfiguration.h>
#include <android/hardware/gnss/BnGnssConfiguration.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssConfiguration : public ::android::BnInterface<IGnssConfiguration> {
public:
  static constexpr uint32_t TRANSACTION_setSuplVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_setSuplMode = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_setLppProfile = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_setGlonassPositioningProtocol = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_setEmergencySuplPdn = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_setEsExtensionSec = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_setBlocklist = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssConfiguration();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssConfiguration

class IGnssConfigurationDelegator : public BnGnssConfiguration {
public:
  explicit IGnssConfigurationDelegator(const ::android::sp<IGnssConfiguration> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssConfiguration> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setSuplVersion(int32_t version) override {
    return _aidl_delegate->setSuplVersion(version);
  }
  ::android::binder::Status setSuplMode(int32_t mode) override {
    return _aidl_delegate->setSuplMode(mode);
  }
  ::android::binder::Status setLppProfile(int32_t lppProfile) override {
    return _aidl_delegate->setLppProfile(lppProfile);
  }
  ::android::binder::Status setGlonassPositioningProtocol(int32_t protocol) override {
    return _aidl_delegate->setGlonassPositioningProtocol(protocol);
  }
  ::android::binder::Status setEmergencySuplPdn(bool enable) override {
    return _aidl_delegate->setEmergencySuplPdn(enable);
  }
  ::android::binder::Status setEsExtensionSec(int32_t emergencyExtensionSeconds) override {
    return _aidl_delegate->setEsExtensionSec(emergencyExtensionSeconds);
  }
  ::android::binder::Status setBlocklist(const ::std::vector<::android::hardware::gnss::BlocklistedSource>& blocklist) override {
    return _aidl_delegate->setBlocklist(blocklist);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssConfiguration::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssConfiguration> _aidl_delegate;
};  // class IGnssConfigurationDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android

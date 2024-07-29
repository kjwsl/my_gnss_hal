/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssConfiguration.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IGnssConfiguration.h>

namespace android {
namespace hardware {
namespace gnss {
class BpGnssConfiguration : public ::android::BpInterface<IGnssConfiguration> {
public:
  explicit BpGnssConfiguration(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpGnssConfiguration() = default;
  ::android::binder::Status setSuplVersion(int32_t version) override;
  ::android::binder::Status setSuplMode(int32_t mode) override;
  ::android::binder::Status setLppProfile(int32_t lppProfile) override;
  ::android::binder::Status setGlonassPositioningProtocol(int32_t protocol) override;
  ::android::binder::Status setEmergencySuplPdn(bool enable) override;
  ::android::binder::Status setEsExtensionSec(int32_t emergencyExtensionSeconds) override;
  ::android::binder::Status setBlocklist(const ::std::vector<::android::hardware::gnss::BlocklistedSource>& blocklist) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpGnssConfiguration
}  // namespace gnss
}  // namespace hardware
}  // namespace android

/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnssCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnssCallback.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IAGnssCallback.h>

namespace android {
namespace hardware {
namespace gnss {
class BpAGnssCallback : public ::android::BpInterface<IAGnssCallback> {
public:
  explicit BpAGnssCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpAGnssCallback() = default;
  ::android::binder::Status agnssStatusCb(::android::hardware::gnss::IAGnssCallback::AGnssType type, ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue status) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpAGnssCallback
}  // namespace gnss
}  // namespace hardware
}  // namespace android

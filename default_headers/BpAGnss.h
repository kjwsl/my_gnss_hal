/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnss.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IAGnss.h>

namespace android {
namespace hardware {
namespace gnss {
class BpAGnss : public ::android::BpInterface<IAGnss> {
public:
  explicit BpAGnss(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpAGnss() = default;
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssCallback>& callback) override;
  ::android::binder::Status dataConnClosed() override;
  ::android::binder::Status dataConnFailed() override;
  ::android::binder::Status setServer(::android::hardware::gnss::IAGnssCallback::AGnssType type, const ::std::string& hostname, int32_t port) override;
  ::android::binder::Status dataConnOpen(int64_t networkHandle, const ::std::string& apn, ::android::hardware::gnss::IAGnss::ApnIpType apnIpType) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpAGnss
}  // namespace gnss
}  // namespace hardware
}  // namespace android

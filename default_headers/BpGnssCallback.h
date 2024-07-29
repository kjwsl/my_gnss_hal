/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssCallback.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IGnssCallback.h>

namespace android {
namespace hardware {
namespace gnss {
class BpGnssCallback : public ::android::BpInterface<IGnssCallback> {
public:
  explicit BpGnssCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpGnssCallback() = default;
  ::android::binder::Status gnssSetCapabilitiesCb(int32_t capabilities) override;
  ::android::binder::Status gnssStatusCb(::android::hardware::gnss::IGnssCallback::GnssStatusValue status) override;
  ::android::binder::Status gnssSvStatusCb(const ::std::vector<::android::hardware::gnss::IGnssCallback::GnssSvInfo>& svInfoList) override;
  ::android::binder::Status gnssLocationCb(const ::android::hardware::gnss::GnssLocation& location) override;
  ::android::binder::Status gnssNmeaCb(int64_t timestamp, const ::std::string& nmea) override;
  ::android::binder::Status gnssAcquireWakelockCb() override;
  ::android::binder::Status gnssReleaseWakelockCb() override;
  ::android::binder::Status gnssSetSystemInfoCb(const ::android::hardware::gnss::IGnssCallback::GnssSystemInfo& info) override;
  ::android::binder::Status gnssRequestTimeCb() override;
  ::android::binder::Status gnssRequestLocationCb(bool independentFromGnss, bool isUserEmergency) override;
  ::android::binder::Status gnssSetSignalTypeCapabilitiesCb(const ::std::vector<::android::hardware::gnss::GnssSignalType>& gnssSignalTypes) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpGnssCallback
}  // namespace gnss
}  // namespace hardware
}  // namespace android

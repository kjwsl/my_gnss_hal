/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssGeofence.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssGeofence.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IGnssGeofence.h>

namespace android {
namespace hardware {
namespace gnss {
class BpGnssGeofence : public ::android::BpInterface<IGnssGeofence> {
public:
  explicit BpGnssGeofence(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpGnssGeofence() = default;
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssGeofenceCallback>& callback) override;
  ::android::binder::Status addGeofence(int32_t geofenceId, double latitudeDegrees, double longitudeDegrees, double radiusMeters, int32_t lastTransition, int32_t monitorTransitions, int32_t notificationResponsivenessMs, int32_t unknownTimerMs) override;
  ::android::binder::Status pauseGeofence(int32_t geofenceId) override;
  ::android::binder::Status resumeGeofence(int32_t geofenceId, int32_t monitorTransitions) override;
  ::android::binder::Status removeGeofence(int32_t geofenceId) override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpGnssGeofence
}  // namespace gnss
}  // namespace hardware
}  // namespace android

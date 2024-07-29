/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssGeofence.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssGeofence.aidl
 */
#pragma once

#include <android/hardware/gnss/IGnssGeofenceCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class IGnssGeofenceCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssGeofenceDelegator;

class IGnssGeofence : public ::android::IInterface {
public:
  typedef IGnssGeofenceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssGeofence)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssGeofenceCallback>& callback) = 0;
  virtual ::android::binder::Status addGeofence(int32_t geofenceId, double latitudeDegrees, double longitudeDegrees, double radiusMeters, int32_t lastTransition, int32_t monitorTransitions, int32_t notificationResponsivenessMs, int32_t unknownTimerMs) = 0;
  virtual ::android::binder::Status pauseGeofence(int32_t geofenceId) = 0;
  virtual ::android::binder::Status resumeGeofence(int32_t geofenceId, int32_t monitorTransitions) = 0;
  virtual ::android::binder::Status removeGeofence(int32_t geofenceId) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssGeofence

class IGnssGeofenceDefault : public IGnssGeofence {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssGeofenceCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status addGeofence(int32_t /*geofenceId*/, double /*latitudeDegrees*/, double /*longitudeDegrees*/, double /*radiusMeters*/, int32_t /*lastTransition*/, int32_t /*monitorTransitions*/, int32_t /*notificationResponsivenessMs*/, int32_t /*unknownTimerMs*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status pauseGeofence(int32_t /*geofenceId*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status resumeGeofence(int32_t /*geofenceId*/, int32_t /*monitorTransitions*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status removeGeofence(int32_t /*geofenceId*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssGeofenceDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

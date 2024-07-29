/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssGeofenceCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssGeofenceCallback.aidl
 */
#pragma once

#include <android/hardware/gnss/GnssLocation.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class GnssLocation;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssGeofenceCallbackDelegator;

class IGnssGeofenceCallback : public ::android::IInterface {
public:
  typedef IGnssGeofenceCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssGeofenceCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum : int32_t { ENTERED = 1 };
  enum : int32_t { EXITED = 2 };
  enum : int32_t { UNCERTAIN = 4 };
  enum : int32_t { UNAVAILABLE = 1 };
  enum : int32_t { AVAILABLE = 2 };
  enum : int32_t { OPERATION_SUCCESS = 0 };
  enum : int32_t { ERROR_TOO_MANY_GEOFENCES = -100 };
  enum : int32_t { ERROR_ID_EXISTS = -101 };
  enum : int32_t { ERROR_ID_UNKNOWN = -102 };
  enum : int32_t { ERROR_INVALID_TRANSITION = -103 };
  enum : int32_t { ERROR_GENERIC = -149 };
  virtual ::android::binder::Status gnssGeofenceTransitionCb(int32_t geofenceId, const ::android::hardware::gnss::GnssLocation& location, int32_t transition, int64_t timestampMillis) = 0;
  virtual ::android::binder::Status gnssGeofenceStatusCb(int32_t availability, const ::android::hardware::gnss::GnssLocation& lastLocation) = 0;
  virtual ::android::binder::Status gnssGeofenceAddCb(int32_t geofenceId, int32_t status) = 0;
  virtual ::android::binder::Status gnssGeofenceRemoveCb(int32_t geofenceId, int32_t status) = 0;
  virtual ::android::binder::Status gnssGeofencePauseCb(int32_t geofenceId, int32_t status) = 0;
  virtual ::android::binder::Status gnssGeofenceResumeCb(int32_t geofenceId, int32_t status) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssGeofenceCallback

class IGnssGeofenceCallbackDefault : public IGnssGeofenceCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status gnssGeofenceTransitionCb(int32_t /*geofenceId*/, const ::android::hardware::gnss::GnssLocation& /*location*/, int32_t /*transition*/, int64_t /*timestampMillis*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssGeofenceStatusCb(int32_t /*availability*/, const ::android::hardware::gnss::GnssLocation& /*lastLocation*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssGeofenceAddCb(int32_t /*geofenceId*/, int32_t /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssGeofenceRemoveCb(int32_t /*geofenceId*/, int32_t /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssGeofencePauseCb(int32_t /*geofenceId*/, int32_t /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssGeofenceResumeCb(int32_t /*geofenceId*/, int32_t /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssGeofenceCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssPowerIndicationCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssPowerIndicationCallback.aidl
 */
#pragma once

#include <android/hardware/gnss/GnssPowerStats.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class GnssPowerStats;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssPowerIndicationCallbackDelegator;

class IGnssPowerIndicationCallback : public ::android::IInterface {
public:
  typedef IGnssPowerIndicationCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssPowerIndicationCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum : int32_t { CAPABILITY_TOTAL = 1 };
  enum : int32_t { CAPABILITY_SINGLEBAND_TRACKING = 2 };
  enum : int32_t { CAPABILITY_MULTIBAND_TRACKING = 4 };
  enum : int32_t { CAPABILITY_SINGLEBAND_ACQUISITION = 8 };
  enum : int32_t { CAPABILITY_MULTIBAND_ACQUISITION = 16 };
  enum : int32_t { CAPABILITY_OTHER_MODES = 32 };
  virtual ::android::binder::Status setCapabilitiesCb(int32_t capabilities) = 0;
  virtual ::android::binder::Status gnssPowerStatsCb(const ::android::hardware::gnss::GnssPowerStats& gnssPowerStats) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssPowerIndicationCallback

class IGnssPowerIndicationCallbackDefault : public IGnssPowerIndicationCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCapabilitiesCb(int32_t /*capabilities*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssPowerStatsCb(const ::android::hardware::gnss::GnssPowerStats& /*gnssPowerStats*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssPowerIndicationCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/visibility_control/IGnssVisibilityControl.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/visibility_control/IGnssVisibilityControl.aidl
 */
#pragma once

#include <android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <string>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android::hardware::gnss::visibility_control {
class IGnssVisibilityControlCallback;
}  // namespace android::hardware::gnss::visibility_control
namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
class IGnssVisibilityControlDelegator;

class IGnssVisibilityControl : public ::android::IInterface {
public:
  typedef IGnssVisibilityControlDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssVisibilityControl)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  virtual ::android::binder::Status enableNfwLocationAccess(const ::std::vector<::std::string>& proxyApps) = 0;
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback>& callback) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssVisibilityControl

class IGnssVisibilityControlDefault : public IGnssVisibilityControl {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status enableNfwLocationAccess(const ::std::vector<::std::string>& /*proxyApps*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssVisibilityControlDefault
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android

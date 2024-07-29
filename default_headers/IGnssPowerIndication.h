/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssPowerIndication.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssPowerIndication.aidl
 */
#pragma once

#include <android/hardware/gnss/IGnssPowerIndicationCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class IGnssPowerIndicationCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssPowerIndicationDelegator;

class IGnssPowerIndication : public ::android::IInterface {
public:
  typedef IGnssPowerIndicationDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssPowerIndication)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssPowerIndicationCallback>& callback) = 0;
  virtual ::android::binder::Status requestGnssPowerStats() = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssPowerIndication

class IGnssPowerIndicationDefault : public IGnssPowerIndication {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssPowerIndicationCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status requestGnssPowerStats() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssPowerIndicationDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

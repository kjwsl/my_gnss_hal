/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsInterface.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsInterface.aidl
 */
#pragma once

#include <android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsCallback.h>
#include <android/hardware/gnss/measurement_corrections/MeasurementCorrections.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss::measurement_corrections {
class IMeasurementCorrectionsCallback;
class MeasurementCorrections;
}  // namespace android::hardware::gnss::measurement_corrections
namespace android {
namespace hardware {
namespace gnss {
namespace measurement_corrections {
class IMeasurementCorrectionsInterfaceDelegator;

class IMeasurementCorrectionsInterface : public ::android::IInterface {
public:
  typedef IMeasurementCorrectionsInterfaceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(MeasurementCorrectionsInterface)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  virtual ::android::binder::Status setCorrections(const ::android::hardware::gnss::measurement_corrections::MeasurementCorrections& corrections) = 0;
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsCallback>& callback) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IMeasurementCorrectionsInterface

class IMeasurementCorrectionsInterfaceDefault : public IMeasurementCorrectionsInterface {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCorrections(const ::android::hardware::gnss::measurement_corrections::MeasurementCorrections& /*corrections*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IMeasurementCorrectionsInterfaceDefault
}  // namespace measurement_corrections
}  // namespace gnss
}  // namespace hardware
}  // namespace android

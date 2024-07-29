/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssMeasurementInterface.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssMeasurementInterface.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/IGnssMeasurementCallback.h>
#include <android/hardware/gnss/IGnssMeasurementInterface.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class IGnssMeasurementCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssMeasurementInterfaceDelegator;

class IGnssMeasurementInterface : public ::android::IInterface {
public:
  typedef IGnssMeasurementInterfaceDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssMeasurementInterface)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  class Options : public ::android::Parcelable {
  public:
    bool enableFullTracking = false;
    bool enableCorrVecOutputs = false;
    int32_t intervalMs = 0;
    inline bool operator!=(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) != std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }
    inline bool operator<(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) < std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }
    inline bool operator<=(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) <= std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }
    inline bool operator==(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) == std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }
    inline bool operator>(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) > std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }
    inline bool operator>=(const Options& rhs) const {
      return std::tie(enableFullTracking, enableCorrVecOutputs, intervalMs) >= std::tie(rhs.enableFullTracking, rhs.enableCorrVecOutputs, rhs.intervalMs);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssMeasurementInterface.Options");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "Options{";
      _aidl_os << "enableFullTracking: " << ::android::internal::ToString(enableFullTracking);
      _aidl_os << ", enableCorrVecOutputs: " << ::android::internal::ToString(enableCorrVecOutputs);
      _aidl_os << ", intervalMs: " << ::android::internal::ToString(intervalMs);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class Options
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssMeasurementCallback>& callback, bool enableFullTracking, bool enableCorrVecOutputs) = 0;
  virtual ::android::binder::Status close() = 0;
  virtual ::android::binder::Status setCallbackWithOptions(const ::android::sp<::android::hardware::gnss::IGnssMeasurementCallback>& callback, const ::android::hardware::gnss::IGnssMeasurementInterface::Options& options) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssMeasurementInterface

class IGnssMeasurementInterfaceDefault : public IGnssMeasurementInterface {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssMeasurementCallback>& /*callback*/, bool /*enableFullTracking*/, bool /*enableCorrVecOutputs*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status close() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setCallbackWithOptions(const ::android::sp<::android::hardware::gnss::IGnssMeasurementCallback>& /*callback*/, const ::android::hardware::gnss::IGnssMeasurementInterface::Options& /*options*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssMeasurementInterfaceDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

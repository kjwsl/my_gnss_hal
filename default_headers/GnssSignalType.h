/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssSignalType.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssSignalType.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace hardware {
namespace gnss {
class GnssSignalType : public ::android::Parcelable {
public:
  ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType::UNKNOWN;
  double carrierFrequencyHz = 0.000000;
  ::std::string codeType;
  inline bool operator!=(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) != std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }
  inline bool operator<(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) < std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }
  inline bool operator<=(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) <= std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }
  inline bool operator==(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) == std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }
  inline bool operator>(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) > std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }
  inline bool operator>=(const GnssSignalType& rhs) const {
    return std::tie(constellation, carrierFrequencyHz, codeType) >= std::tie(rhs.constellation, rhs.carrierFrequencyHz, rhs.codeType);
  }

  static const ::std::string& CODE_TYPE_A();
  static const ::std::string& CODE_TYPE_B();
  static const ::std::string& CODE_TYPE_C();
  static const ::std::string& CODE_TYPE_D();
  static const ::std::string& CODE_TYPE_I();
  static const ::std::string& CODE_TYPE_L();
  static const ::std::string& CODE_TYPE_M();
  static const ::std::string& CODE_TYPE_N();
  static const ::std::string& CODE_TYPE_P();
  static const ::std::string& CODE_TYPE_Q();
  static const ::std::string& CODE_TYPE_S();
  static const ::std::string& CODE_TYPE_W();
  static const ::std::string& CODE_TYPE_X();
  static const ::std::string& CODE_TYPE_Y();
  static const ::std::string& CODE_TYPE_Z();
  static const ::std::string& CODE_TYPE_UNKNOWN();
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssSignalType");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GnssSignalType{";
    _aidl_os << "constellation: " << ::android::internal::ToString(constellation);
    _aidl_os << ", carrierFrequencyHz: " << ::android::internal::ToString(carrierFrequencyHz);
    _aidl_os << ", codeType: " << ::android::internal::ToString(codeType);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class GnssSignalType
}  // namespace gnss
}  // namespace hardware
}  // namespace android

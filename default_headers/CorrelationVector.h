/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/CorrelationVector.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/CorrelationVector.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {
namespace hardware {
namespace gnss {
class CorrelationVector : public ::android::Parcelable {
public:
  double frequencyOffsetMps = 0.000000;
  double samplingWidthM = 0.000000;
  double samplingStartM = 0.000000;
  ::std::vector<int32_t> magnitude;
  inline bool operator!=(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) != std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }
  inline bool operator<(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) < std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }
  inline bool operator<=(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) <= std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }
  inline bool operator==(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) == std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }
  inline bool operator>(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) > std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }
  inline bool operator>=(const CorrelationVector& rhs) const {
    return std::tie(frequencyOffsetMps, samplingWidthM, samplingStartM, magnitude) >= std::tie(rhs.frequencyOffsetMps, rhs.samplingWidthM, rhs.samplingStartM, rhs.magnitude);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.CorrelationVector");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "CorrelationVector{";
    _aidl_os << "frequencyOffsetMps: " << ::android::internal::ToString(frequencyOffsetMps);
    _aidl_os << ", samplingWidthM: " << ::android::internal::ToString(samplingWidthM);
    _aidl_os << ", samplingStartM: " << ::android::internal::ToString(samplingStartM);
    _aidl_os << ", magnitude: " << ::android::internal::ToString(magnitude);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class CorrelationVector
}  // namespace gnss
}  // namespace hardware
}  // namespace android

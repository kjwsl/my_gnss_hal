/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssMultipathIndicator.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssMultipathIndicator.aidl
 */
#pragma once

#include <array>
#include <binder/Enums.h>
#include <cstdint>
#include <string>

namespace android {
namespace hardware {
namespace gnss {
enum class GnssMultipathIndicator : int32_t {
  UNKNOWN = 0,
  PRESENT = 1,
  NOT_PRESENT = 2,
};
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(GnssMultipathIndicator val) {
  switch(val) {
  case GnssMultipathIndicator::UNKNOWN:
    return "UNKNOWN";
  case GnssMultipathIndicator::PRESENT:
    return "PRESENT";
  case GnssMultipathIndicator::NOT_PRESENT:
    return "NOT_PRESENT";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::GnssMultipathIndicator, 3> enum_values<::android::hardware::gnss::GnssMultipathIndicator> = {
  ::android::hardware::gnss::GnssMultipathIndicator::UNKNOWN,
  ::android::hardware::gnss::GnssMultipathIndicator::PRESENT,
  ::android::hardware::gnss::GnssMultipathIndicator::NOT_PRESENT,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android

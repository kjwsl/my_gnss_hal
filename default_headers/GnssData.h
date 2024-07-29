/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssData.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssData.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/ElapsedRealtime.h>
#include <android/hardware/gnss/GnssClock.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <android/hardware/gnss/GnssData.h>
#include <android/hardware/gnss/GnssMeasurement.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::hardware::gnss {
class ElapsedRealtime;
class GnssClock;
class GnssMeasurement;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class GnssData : public ::android::Parcelable {
public:
  class GnssAgc : public ::android::Parcelable {
  public:
    double agcLevelDb = 0.000000;
    ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType::UNKNOWN;
    int64_t carrierFrequencyHz = 0L;
    inline bool operator!=(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) != std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }
    inline bool operator<(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) < std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }
    inline bool operator<=(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) <= std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }
    inline bool operator==(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) == std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }
    inline bool operator>(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) > std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }
    inline bool operator>=(const GnssAgc& rhs) const {
      return std::tie(agcLevelDb, constellation, carrierFrequencyHz) >= std::tie(rhs.agcLevelDb, rhs.constellation, rhs.carrierFrequencyHz);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssData.GnssAgc");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "GnssAgc{";
      _aidl_os << "agcLevelDb: " << ::android::internal::ToString(agcLevelDb);
      _aidl_os << ", constellation: " << ::android::internal::ToString(constellation);
      _aidl_os << ", carrierFrequencyHz: " << ::android::internal::ToString(carrierFrequencyHz);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class GnssAgc
  ::std::vector<::android::hardware::gnss::GnssMeasurement> measurements;
  ::android::hardware::gnss::GnssClock clock;
  ::android::hardware::gnss::ElapsedRealtime elapsedRealtime;
  ::std::vector<::android::hardware::gnss::GnssData::GnssAgc> gnssAgcs = {};
  bool isFullTracking = false;
  inline bool operator!=(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) != std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }
  inline bool operator<(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) < std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }
  inline bool operator<=(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) <= std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }
  inline bool operator==(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) == std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }
  inline bool operator>(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) > std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }
  inline bool operator>=(const GnssData& rhs) const {
    return std::tie(measurements, clock, elapsedRealtime, gnssAgcs, isFullTracking) >= std::tie(rhs.measurements, rhs.clock, rhs.elapsedRealtime, rhs.gnssAgcs, rhs.isFullTracking);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssData");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GnssData{";
    _aidl_os << "measurements: " << ::android::internal::ToString(measurements);
    _aidl_os << ", clock: " << ::android::internal::ToString(clock);
    _aidl_os << ", elapsedRealtime: " << ::android::internal::ToString(elapsedRealtime);
    _aidl_os << ", gnssAgcs: " << ::android::internal::ToString(gnssAgcs);
    _aidl_os << ", isFullTracking: " << ::android::internal::ToString(isFullTracking);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class GnssData
}  // namespace gnss
}  // namespace hardware
}  // namespace android

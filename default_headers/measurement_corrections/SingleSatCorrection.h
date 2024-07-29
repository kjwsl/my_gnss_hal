/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/measurement_corrections/SingleSatCorrection.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/measurement_corrections/SingleSatCorrection.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <android/hardware/gnss/measurement_corrections/ReflectingPlane.h>
#include <android/hardware/gnss/measurement_corrections/SingleSatCorrection.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::hardware::gnss::measurement_corrections {
class ReflectingPlane;
}  // namespace android::hardware::gnss::measurement_corrections
namespace android {
namespace hardware {
namespace gnss {
namespace measurement_corrections {
class SingleSatCorrection : public ::android::Parcelable {
public:
  class ExcessPathInfo : public ::android::Parcelable {
  public:
    int32_t excessPathInfoFlags = 0;
    float excessPathLengthMeters = 0.000000f;
    float excessPathLengthUncertaintyMeters = 0.000000f;
    ::android::hardware::gnss::measurement_corrections::ReflectingPlane reflectingPlane;
    float attenuationDb = 0.000000f;
    inline bool operator!=(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) != std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }
    inline bool operator<(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) < std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }
    inline bool operator<=(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) <= std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }
    inline bool operator==(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) == std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }
    inline bool operator>(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) > std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }
    inline bool operator>=(const ExcessPathInfo& rhs) const {
      return std::tie(excessPathInfoFlags, excessPathLengthMeters, excessPathLengthUncertaintyMeters, reflectingPlane, attenuationDb) >= std::tie(rhs.excessPathInfoFlags, rhs.excessPathLengthMeters, rhs.excessPathLengthUncertaintyMeters, rhs.reflectingPlane, rhs.attenuationDb);
    }

    enum : int32_t { EXCESS_PATH_INFO_HAS_EXCESS_PATH_LENGTH = 1 };
    enum : int32_t { EXCESS_PATH_INFO_HAS_EXCESS_PATH_LENGTH_UNC = 2 };
    enum : int32_t { EXCESS_PATH_INFO_HAS_REFLECTING_PLANE = 4 };
    enum : int32_t { EXCESS_PATH_INFO_HAS_ATTENUATION = 8 };
    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.measurement_corrections.SingleSatCorrection.ExcessPathInfo");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "ExcessPathInfo{";
      _aidl_os << "excessPathInfoFlags: " << ::android::internal::ToString(excessPathInfoFlags);
      _aidl_os << ", excessPathLengthMeters: " << ::android::internal::ToString(excessPathLengthMeters);
      _aidl_os << ", excessPathLengthUncertaintyMeters: " << ::android::internal::ToString(excessPathLengthUncertaintyMeters);
      _aidl_os << ", reflectingPlane: " << ::android::internal::ToString(reflectingPlane);
      _aidl_os << ", attenuationDb: " << ::android::internal::ToString(attenuationDb);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class ExcessPathInfo
  int32_t singleSatCorrectionFlags = 0;
  ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType(0);
  int32_t svid = 0;
  int64_t carrierFrequencyHz = 0L;
  float probSatIsLos = 0.000000f;
  float combinedExcessPathLengthMeters = 0.000000f;
  float combinedExcessPathLengthUncertaintyMeters = 0.000000f;
  float combinedAttenuationDb = 0.000000f;
  ::std::vector<::android::hardware::gnss::measurement_corrections::SingleSatCorrection::ExcessPathInfo> excessPathInfos;
  inline bool operator!=(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) != std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }
  inline bool operator<(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) < std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }
  inline bool operator<=(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) <= std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }
  inline bool operator==(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) == std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }
  inline bool operator>(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) > std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }
  inline bool operator>=(const SingleSatCorrection& rhs) const {
    return std::tie(singleSatCorrectionFlags, constellation, svid, carrierFrequencyHz, probSatIsLos, combinedExcessPathLengthMeters, combinedExcessPathLengthUncertaintyMeters, combinedAttenuationDb, excessPathInfos) >= std::tie(rhs.singleSatCorrectionFlags, rhs.constellation, rhs.svid, rhs.carrierFrequencyHz, rhs.probSatIsLos, rhs.combinedExcessPathLengthMeters, rhs.combinedExcessPathLengthUncertaintyMeters, rhs.combinedAttenuationDb, rhs.excessPathInfos);
  }

  enum : int32_t { SINGLE_SAT_CORRECTION_HAS_SAT_IS_LOS_PROBABILITY = 1 };
  enum : int32_t { SINGLE_SAT_CORRECTION_HAS_COMBINED_EXCESS_PATH_LENGTH = 2 };
  enum : int32_t { SINGLE_SAT_CORRECTION_HAS_COMBINED_EXCESS_PATH_LENGTH_UNC = 4 };
  enum : int32_t { SINGLE_SAT_CORRECTION_HAS_COMBINED_ATTENUATION = 16 };
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.measurement_corrections.SingleSatCorrection");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SingleSatCorrection{";
    _aidl_os << "singleSatCorrectionFlags: " << ::android::internal::ToString(singleSatCorrectionFlags);
    _aidl_os << ", constellation: " << ::android::internal::ToString(constellation);
    _aidl_os << ", svid: " << ::android::internal::ToString(svid);
    _aidl_os << ", carrierFrequencyHz: " << ::android::internal::ToString(carrierFrequencyHz);
    _aidl_os << ", probSatIsLos: " << ::android::internal::ToString(probSatIsLos);
    _aidl_os << ", combinedExcessPathLengthMeters: " << ::android::internal::ToString(combinedExcessPathLengthMeters);
    _aidl_os << ", combinedExcessPathLengthUncertaintyMeters: " << ::android::internal::ToString(combinedExcessPathLengthUncertaintyMeters);
    _aidl_os << ", combinedAttenuationDb: " << ::android::internal::ToString(combinedAttenuationDb);
    _aidl_os << ", excessPathInfos: " << ::android::internal::ToString(excessPathInfos);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class SingleSatCorrection
}  // namespace measurement_corrections
}  // namespace gnss
}  // namespace hardware
}  // namespace android

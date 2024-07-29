/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssAntennaInfoCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssAntennaInfoCallback.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/IGnssAntennaInfoCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {
namespace hardware {
namespace gnss {
class IGnssAntennaInfoCallbackDelegator;

class IGnssAntennaInfoCallback : public ::android::IInterface {
public:
  typedef IGnssAntennaInfoCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssAntennaInfoCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  class Row : public ::android::Parcelable {
  public:
    ::std::vector<double> row;
    inline bool operator!=(const Row& rhs) const {
      return std::tie(row) != std::tie(rhs.row);
    }
    inline bool operator<(const Row& rhs) const {
      return std::tie(row) < std::tie(rhs.row);
    }
    inline bool operator<=(const Row& rhs) const {
      return std::tie(row) <= std::tie(rhs.row);
    }
    inline bool operator==(const Row& rhs) const {
      return std::tie(row) == std::tie(rhs.row);
    }
    inline bool operator>(const Row& rhs) const {
      return std::tie(row) > std::tie(rhs.row);
    }
    inline bool operator>=(const Row& rhs) const {
      return std::tie(row) >= std::tie(rhs.row);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssAntennaInfoCallback.Row");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "Row{";
      _aidl_os << "row: " << ::android::internal::ToString(row);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class Row
  class Coord : public ::android::Parcelable {
  public:
    double x = 0.000000;
    double xUncertainty = 0.000000;
    double y = 0.000000;
    double yUncertainty = 0.000000;
    double z = 0.000000;
    double zUncertainty = 0.000000;
    inline bool operator!=(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) != std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }
    inline bool operator<(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) < std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }
    inline bool operator<=(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) <= std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }
    inline bool operator==(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) == std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }
    inline bool operator>(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) > std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }
    inline bool operator>=(const Coord& rhs) const {
      return std::tie(x, xUncertainty, y, yUncertainty, z, zUncertainty) >= std::tie(rhs.x, rhs.xUncertainty, rhs.y, rhs.yUncertainty, rhs.z, rhs.zUncertainty);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssAntennaInfoCallback.Coord");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "Coord{";
      _aidl_os << "x: " << ::android::internal::ToString(x);
      _aidl_os << ", xUncertainty: " << ::android::internal::ToString(xUncertainty);
      _aidl_os << ", y: " << ::android::internal::ToString(y);
      _aidl_os << ", yUncertainty: " << ::android::internal::ToString(yUncertainty);
      _aidl_os << ", z: " << ::android::internal::ToString(z);
      _aidl_os << ", zUncertainty: " << ::android::internal::ToString(zUncertainty);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class Coord
  class GnssAntennaInfo : public ::android::Parcelable {
  public:
    int64_t carrierFrequencyHz = 0L;
    ::android::hardware::gnss::IGnssAntennaInfoCallback::Coord phaseCenterOffsetCoordinateMillimeters;
    ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::Row> phaseCenterVariationCorrectionMillimeters;
    ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::Row> phaseCenterVariationCorrectionUncertaintyMillimeters;
    ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::Row> signalGainCorrectionDbi;
    ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::Row> signalGainCorrectionUncertaintyDbi;
    inline bool operator!=(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) != std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }
    inline bool operator<(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) < std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }
    inline bool operator<=(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) <= std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }
    inline bool operator==(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) == std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }
    inline bool operator>(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) > std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }
    inline bool operator>=(const GnssAntennaInfo& rhs) const {
      return std::tie(carrierFrequencyHz, phaseCenterOffsetCoordinateMillimeters, phaseCenterVariationCorrectionMillimeters, phaseCenterVariationCorrectionUncertaintyMillimeters, signalGainCorrectionDbi, signalGainCorrectionUncertaintyDbi) >= std::tie(rhs.carrierFrequencyHz, rhs.phaseCenterOffsetCoordinateMillimeters, rhs.phaseCenterVariationCorrectionMillimeters, rhs.phaseCenterVariationCorrectionUncertaintyMillimeters, rhs.signalGainCorrectionDbi, rhs.signalGainCorrectionUncertaintyDbi);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssAntennaInfoCallback.GnssAntennaInfo");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "GnssAntennaInfo{";
      _aidl_os << "carrierFrequencyHz: " << ::android::internal::ToString(carrierFrequencyHz);
      _aidl_os << ", phaseCenterOffsetCoordinateMillimeters: " << ::android::internal::ToString(phaseCenterOffsetCoordinateMillimeters);
      _aidl_os << ", phaseCenterVariationCorrectionMillimeters: " << ::android::internal::ToString(phaseCenterVariationCorrectionMillimeters);
      _aidl_os << ", phaseCenterVariationCorrectionUncertaintyMillimeters: " << ::android::internal::ToString(phaseCenterVariationCorrectionUncertaintyMillimeters);
      _aidl_os << ", signalGainCorrectionDbi: " << ::android::internal::ToString(signalGainCorrectionDbi);
      _aidl_os << ", signalGainCorrectionUncertaintyDbi: " << ::android::internal::ToString(signalGainCorrectionUncertaintyDbi);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class GnssAntennaInfo
  virtual ::android::binder::Status gnssAntennaInfoCb(const ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::GnssAntennaInfo>& gnssAntennaInfos) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssAntennaInfoCallback

class IGnssAntennaInfoCallbackDefault : public IGnssAntennaInfoCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status gnssAntennaInfoCb(const ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::GnssAntennaInfo>& /*gnssAntennaInfos*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssAntennaInfoCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android

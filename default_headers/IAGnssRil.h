/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnssRil.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnssRil.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/IAGnssRil.h>
#include <android/hardware/gnss/IAGnssRilCallback.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android::hardware::gnss {
class IAGnssRilCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IAGnssRilDelegator;

class IAGnssRil : public ::android::IInterface {
public:
  typedef IAGnssRilDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(AGnssRil)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class AGnssRefLocationType : int32_t {
    GSM_CELLID = 1,
    UMTS_CELLID = 2,
    LTE_CELLID = 4,
    NR_CELLID = 8,
  };
  enum class SetIdType : int32_t {
    NONE = 0,
    IMSI = 1,
    MSISDM = 2,
  };
  class AGnssRefLocationCellID : public ::android::Parcelable {
  public:
    ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType type = ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType(0);
    int32_t mcc = 0;
    int32_t mnc = 0;
    int32_t lac = 0;
    int64_t cid = 0L;
    int32_t tac = 0;
    int32_t pcid = 0;
    int32_t arfcn = 0;
    inline bool operator!=(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) != std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }
    inline bool operator<(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) < std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }
    inline bool operator<=(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) <= std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }
    inline bool operator==(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) == std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }
    inline bool operator>(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) > std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }
    inline bool operator>=(const AGnssRefLocationCellID& rhs) const {
      return std::tie(type, mcc, mnc, lac, cid, tac, pcid, arfcn) >= std::tie(rhs.type, rhs.mcc, rhs.mnc, rhs.lac, rhs.cid, rhs.tac, rhs.pcid, rhs.arfcn);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IAGnssRil.AGnssRefLocationCellID");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "AGnssRefLocationCellID{";
      _aidl_os << "type: " << ::android::internal::ToString(type);
      _aidl_os << ", mcc: " << ::android::internal::ToString(mcc);
      _aidl_os << ", mnc: " << ::android::internal::ToString(mnc);
      _aidl_os << ", lac: " << ::android::internal::ToString(lac);
      _aidl_os << ", cid: " << ::android::internal::ToString(cid);
      _aidl_os << ", tac: " << ::android::internal::ToString(tac);
      _aidl_os << ", pcid: " << ::android::internal::ToString(pcid);
      _aidl_os << ", arfcn: " << ::android::internal::ToString(arfcn);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class AGnssRefLocationCellID
  class AGnssRefLocation : public ::android::Parcelable {
  public:
    ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType type = ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType(0);
    ::android::hardware::gnss::IAGnssRil::AGnssRefLocationCellID cellID;
    inline bool operator!=(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) != std::tie(rhs.type, rhs.cellID);
    }
    inline bool operator<(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) < std::tie(rhs.type, rhs.cellID);
    }
    inline bool operator<=(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) <= std::tie(rhs.type, rhs.cellID);
    }
    inline bool operator==(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) == std::tie(rhs.type, rhs.cellID);
    }
    inline bool operator>(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) > std::tie(rhs.type, rhs.cellID);
    }
    inline bool operator>=(const AGnssRefLocation& rhs) const {
      return std::tie(type, cellID) >= std::tie(rhs.type, rhs.cellID);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IAGnssRil.AGnssRefLocation");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "AGnssRefLocation{";
      _aidl_os << "type: " << ::android::internal::ToString(type);
      _aidl_os << ", cellID: " << ::android::internal::ToString(cellID);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class AGnssRefLocation
  class NetworkAttributes : public ::android::Parcelable {
  public:
    int64_t networkHandle = 0L;
    bool isConnected = false;
    int32_t capabilities = 0;
    ::std::string apn;
    inline bool operator!=(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) != std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }
    inline bool operator<(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) < std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }
    inline bool operator<=(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) <= std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }
    inline bool operator==(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) == std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }
    inline bool operator>(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) > std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }
    inline bool operator>=(const NetworkAttributes& rhs) const {
      return std::tie(networkHandle, isConnected, capabilities, apn) >= std::tie(rhs.networkHandle, rhs.isConnected, rhs.capabilities, rhs.apn);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IAGnssRil.NetworkAttributes");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "NetworkAttributes{";
      _aidl_os << "networkHandle: " << ::android::internal::ToString(networkHandle);
      _aidl_os << ", isConnected: " << ::android::internal::ToString(isConnected);
      _aidl_os << ", capabilities: " << ::android::internal::ToString(capabilities);
      _aidl_os << ", apn: " << ::android::internal::ToString(apn);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class NetworkAttributes
  enum : int32_t { NETWORK_CAPABILITY_NOT_METERED = 1 };
  enum : int32_t { NETWORK_CAPABILITY_NOT_ROAMING = 2 };
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssRilCallback>& callback) = 0;
  virtual ::android::binder::Status setRefLocation(const ::android::hardware::gnss::IAGnssRil::AGnssRefLocation& agnssReflocation) = 0;
  virtual ::android::binder::Status setSetId(::android::hardware::gnss::IAGnssRil::SetIdType type, const ::std::string& setid) = 0;
  virtual ::android::binder::Status updateNetworkState(const ::android::hardware::gnss::IAGnssRil::NetworkAttributes& attributes) = 0;
  virtual ::android::binder::Status injectNiSuplMessageData(const ::std::vector<uint8_t>& msgData, int32_t slotIndex) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IAGnssRil

class IAGnssRilDefault : public IAGnssRil {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssRilCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setRefLocation(const ::android::hardware::gnss::IAGnssRil::AGnssRefLocation& /*agnssReflocation*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setSetId(::android::hardware::gnss::IAGnssRil::SetIdType /*type*/, const ::std::string& /*setid*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status updateNetworkState(const ::android::hardware::gnss::IAGnssRil::NetworkAttributes& /*attributes*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status injectNiSuplMessageData(const ::std::vector<uint8_t>& /*msgData*/, int32_t /*slotIndex*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IAGnssRilDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IAGnssRil::AGnssRefLocationType val) {
  switch(val) {
  case IAGnssRil::AGnssRefLocationType::GSM_CELLID:
    return "GSM_CELLID";
  case IAGnssRil::AGnssRefLocationType::UMTS_CELLID:
    return "UMTS_CELLID";
  case IAGnssRil::AGnssRefLocationType::LTE_CELLID:
    return "LTE_CELLID";
  case IAGnssRil::AGnssRefLocationType::NR_CELLID:
    return "NR_CELLID";
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
constexpr inline std::array<::android::hardware::gnss::IAGnssRil::AGnssRefLocationType, 4> enum_values<::android::hardware::gnss::IAGnssRil::AGnssRefLocationType> = {
  ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType::GSM_CELLID,
  ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType::UMTS_CELLID,
  ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType::LTE_CELLID,
  ::android::hardware::gnss::IAGnssRil::AGnssRefLocationType::NR_CELLID,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IAGnssRil::SetIdType val) {
  switch(val) {
  case IAGnssRil::SetIdType::NONE:
    return "NONE";
  case IAGnssRil::SetIdType::IMSI:
    return "IMSI";
  case IAGnssRil::SetIdType::MSISDM:
    return "MSISDM";
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
constexpr inline std::array<::android::hardware::gnss::IAGnssRil::SetIdType, 3> enum_values<::android::hardware::gnss::IAGnssRil::SetIdType> = {
  ::android::hardware::gnss::IAGnssRil::SetIdType::NONE,
  ::android::hardware::gnss::IAGnssRil::SetIdType::IMSI,
  ::android::hardware::gnss::IAGnssRil::SetIdType::MSISDM,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android

/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssNavigationMessageCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssNavigationMessageCallback.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/IGnssNavigationMessageCallback.h>
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

namespace android {
namespace hardware {
namespace gnss {
class IGnssNavigationMessageCallbackDelegator;

class IGnssNavigationMessageCallback : public ::android::IInterface {
public:
  typedef IGnssNavigationMessageCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssNavigationMessageCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  class GnssNavigationMessage : public ::android::Parcelable {
  public:
    enum class GnssNavigationMessageType : int32_t {
      UNKNOWN = 0,
      GPS_L1CA = 257,
      GPS_L2CNAV = 258,
      GPS_L5CNAV = 259,
      SBS = 513,
      GPS_CNAV2 = 260,
      GLO_L1CA = 769,
      QZS_L1CA = 1025,
      BDS_D1 = 1281,
      BDS_D2 = 1282,
      BDS_CNAV1 = 1283,
      BDS_CNAV2 = 1284,
      GAL_I = 1537,
      GAL_F = 1538,
      IRN_L5CA = 1793,
    };
    int32_t svid = 0;
    ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType type = ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType(0);
    int32_t status = 0;
    int32_t messageId = 0;
    int32_t submessageId = 0;
    ::std::vector<uint8_t> data;
    inline bool operator!=(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) != std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }
    inline bool operator<(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) < std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }
    inline bool operator<=(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) <= std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }
    inline bool operator==(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) == std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }
    inline bool operator>(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) > std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }
    inline bool operator>=(const GnssNavigationMessage& rhs) const {
      return std::tie(svid, type, status, messageId, submessageId, data) >= std::tie(rhs.svid, rhs.type, rhs.status, rhs.messageId, rhs.submessageId, rhs.data);
    }

    enum : int32_t { STATUS_PARITY_PASSED = 1 };
    enum : int32_t { STATUS_PARITY_REBUILT = 2 };
    enum : int32_t { STATUS_UNKNOWN = 0 };
    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssNavigationMessageCallback.GnssNavigationMessage");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "GnssNavigationMessage{";
      _aidl_os << "svid: " << ::android::internal::ToString(svid);
      _aidl_os << ", type: " << ::android::internal::ToString(type);
      _aidl_os << ", status: " << ::android::internal::ToString(status);
      _aidl_os << ", messageId: " << ::android::internal::ToString(messageId);
      _aidl_os << ", submessageId: " << ::android::internal::ToString(submessageId);
      _aidl_os << ", data: " << ::android::internal::ToString(data);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class GnssNavigationMessage
  virtual ::android::binder::Status gnssNavigationMessageCb(const ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage& message) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssNavigationMessageCallback

class IGnssNavigationMessageCallbackDefault : public IGnssNavigationMessageCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status gnssNavigationMessageCb(const ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage& /*message*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssNavigationMessageCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType val) {
  switch(val) {
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::UNKNOWN:
    return "UNKNOWN";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L1CA:
    return "GPS_L1CA";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L2CNAV:
    return "GPS_L2CNAV";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L5CNAV:
    return "GPS_L5CNAV";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::SBS:
    return "SBS";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_CNAV2:
    return "GPS_CNAV2";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GLO_L1CA:
    return "GLO_L1CA";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::QZS_L1CA:
    return "QZS_L1CA";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_D1:
    return "BDS_D1";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_D2:
    return "BDS_D2";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_CNAV1:
    return "BDS_CNAV1";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_CNAV2:
    return "BDS_CNAV2";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GAL_I:
    return "GAL_I";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GAL_F:
    return "GAL_F";
  case IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::IRN_L5CA:
    return "IRN_L5CA";
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
constexpr inline std::array<::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType, 15> enum_values<::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType> = {
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::UNKNOWN,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L1CA,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L2CNAV,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_L5CNAV,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::SBS,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GPS_CNAV2,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GLO_L1CA,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::QZS_L1CA,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_D1,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_D2,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_CNAV1,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::BDS_CNAV2,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GAL_I,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::GAL_F,
  ::android::hardware::gnss::IGnssNavigationMessageCallback::GnssNavigationMessage::GnssNavigationMessageType::IRN_L5CA,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android

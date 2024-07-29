/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.h>
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

namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
class IGnssVisibilityControlCallbackDelegator;

class IGnssVisibilityControlCallback : public ::android::IInterface {
public:
  typedef IGnssVisibilityControlCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssVisibilityControlCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class NfwProtocolStack : int32_t {
    CTRL_PLANE = 0,
    SUPL = 1,
    IMS = 10,
    SIM = 11,
    OTHER_PROTOCOL_STACK = 100,
  };
  enum class NfwRequestor : int32_t {
    CARRIER = 0,
    OEM = 10,
    MODEM_CHIPSET_VENDOR = 11,
    GNSS_CHIPSET_VENDOR = 12,
    OTHER_CHIPSET_VENDOR = 13,
    AUTOMOBILE_CLIENT = 20,
    OTHER_REQUESTOR = 100,
  };
  enum class NfwResponseType : int32_t {
    REJECTED = 0,
    ACCEPTED_NO_LOCATION_PROVIDED = 1,
    ACCEPTED_LOCATION_PROVIDED = 2,
  };
  class NfwNotification : public ::android::Parcelable {
  public:
    ::android::String16 proxyAppPackageName;
    ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack protocolStack = ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack(0);
    ::android::String16 otherProtocolStackName;
    ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor requestor = ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor(0);
    ::android::String16 requestorId;
    ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType responseType = ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType(0);
    bool inEmergencyMode = false;
    bool isCachedLocation = false;
    inline bool operator!=(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) != std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }
    inline bool operator<(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) < std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }
    inline bool operator<=(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) <= std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }
    inline bool operator==(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) == std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }
    inline bool operator>(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) > std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }
    inline bool operator>=(const NfwNotification& rhs) const {
      return std::tie(proxyAppPackageName, protocolStack, otherProtocolStackName, requestor, requestorId, responseType, inEmergencyMode, isCachedLocation) >= std::tie(rhs.proxyAppPackageName, rhs.protocolStack, rhs.otherProtocolStackName, rhs.requestor, rhs.requestorId, rhs.responseType, rhs.inEmergencyMode, rhs.isCachedLocation);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.visibility_control.IGnssVisibilityControlCallback.NfwNotification");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "NfwNotification{";
      _aidl_os << "proxyAppPackageName: " << ::android::internal::ToString(proxyAppPackageName);
      _aidl_os << ", protocolStack: " << ::android::internal::ToString(protocolStack);
      _aidl_os << ", otherProtocolStackName: " << ::android::internal::ToString(otherProtocolStackName);
      _aidl_os << ", requestor: " << ::android::internal::ToString(requestor);
      _aidl_os << ", requestorId: " << ::android::internal::ToString(requestorId);
      _aidl_os << ", responseType: " << ::android::internal::ToString(responseType);
      _aidl_os << ", inEmergencyMode: " << ::android::internal::ToString(inEmergencyMode);
      _aidl_os << ", isCachedLocation: " << ::android::internal::ToString(isCachedLocation);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class NfwNotification
  virtual ::android::binder::Status nfwNotifyCb(const ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwNotification& notification) = 0;
  virtual ::android::binder::Status isInEmergencySession(bool* _aidl_return) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssVisibilityControlCallback

class IGnssVisibilityControlCallbackDefault : public IGnssVisibilityControlCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status nfwNotifyCb(const ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwNotification& /*notification*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status isInEmergencySession(bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssVisibilityControlCallbackDefault
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
[[nodiscard]] static inline std::string toString(IGnssVisibilityControlCallback::NfwProtocolStack val) {
  switch(val) {
  case IGnssVisibilityControlCallback::NfwProtocolStack::CTRL_PLANE:
    return "CTRL_PLANE";
  case IGnssVisibilityControlCallback::NfwProtocolStack::SUPL:
    return "SUPL";
  case IGnssVisibilityControlCallback::NfwProtocolStack::IMS:
    return "IMS";
  case IGnssVisibilityControlCallback::NfwProtocolStack::SIM:
    return "SIM";
  case IGnssVisibilityControlCallback::NfwProtocolStack::OTHER_PROTOCOL_STACK:
    return "OTHER_PROTOCOL_STACK";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack, 5> enum_values<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack> = {
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack::CTRL_PLANE,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack::SUPL,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack::IMS,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack::SIM,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwProtocolStack::OTHER_PROTOCOL_STACK,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
[[nodiscard]] static inline std::string toString(IGnssVisibilityControlCallback::NfwRequestor val) {
  switch(val) {
  case IGnssVisibilityControlCallback::NfwRequestor::CARRIER:
    return "CARRIER";
  case IGnssVisibilityControlCallback::NfwRequestor::OEM:
    return "OEM";
  case IGnssVisibilityControlCallback::NfwRequestor::MODEM_CHIPSET_VENDOR:
    return "MODEM_CHIPSET_VENDOR";
  case IGnssVisibilityControlCallback::NfwRequestor::GNSS_CHIPSET_VENDOR:
    return "GNSS_CHIPSET_VENDOR";
  case IGnssVisibilityControlCallback::NfwRequestor::OTHER_CHIPSET_VENDOR:
    return "OTHER_CHIPSET_VENDOR";
  case IGnssVisibilityControlCallback::NfwRequestor::AUTOMOBILE_CLIENT:
    return "AUTOMOBILE_CLIENT";
  case IGnssVisibilityControlCallback::NfwRequestor::OTHER_REQUESTOR:
    return "OTHER_REQUESTOR";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor, 7> enum_values<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor> = {
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::CARRIER,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::OEM,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::MODEM_CHIPSET_VENDOR,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::GNSS_CHIPSET_VENDOR,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::OTHER_CHIPSET_VENDOR,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::AUTOMOBILE_CLIENT,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwRequestor::OTHER_REQUESTOR,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
[[nodiscard]] static inline std::string toString(IGnssVisibilityControlCallback::NfwResponseType val) {
  switch(val) {
  case IGnssVisibilityControlCallback::NfwResponseType::REJECTED:
    return "REJECTED";
  case IGnssVisibilityControlCallback::NfwResponseType::ACCEPTED_NO_LOCATION_PROVIDED:
    return "ACCEPTED_NO_LOCATION_PROVIDED";
  case IGnssVisibilityControlCallback::NfwResponseType::ACCEPTED_LOCATION_PROVIDED:
    return "ACCEPTED_LOCATION_PROVIDED";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType, 3> enum_values<::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType> = {
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType::REJECTED,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType::ACCEPTED_NO_LOCATION_PROVIDED,
  ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwResponseType::ACCEPTED_LOCATION_PROVIDED,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android

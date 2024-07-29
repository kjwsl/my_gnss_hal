/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssGeofence.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssGeofence.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssGeofence.h>
#include <android/hardware/gnss/BnGnssGeofence.h>
#include <android/hardware/gnss/BnGnssGeofenceCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssGeofence : public ::android::BnInterface<IGnssGeofence> {
public:
  static constexpr uint32_t TRANSACTION_setCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_addGeofence = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_pauseGeofence = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_resumeGeofence = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_removeGeofence = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssGeofence();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssGeofence

class IGnssGeofenceDelegator : public BnGnssGeofence {
public:
  explicit IGnssGeofenceDelegator(const ::android::sp<IGnssGeofence> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssGeofence> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssGeofenceCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IGnssGeofenceCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IGnssGeofenceCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->setCallback(_callback);
  }
  ::android::binder::Status addGeofence(int32_t geofenceId, double latitudeDegrees, double longitudeDegrees, double radiusMeters, int32_t lastTransition, int32_t monitorTransitions, int32_t notificationResponsivenessMs, int32_t unknownTimerMs) override {
    return _aidl_delegate->addGeofence(geofenceId, latitudeDegrees, longitudeDegrees, radiusMeters, lastTransition, monitorTransitions, notificationResponsivenessMs, unknownTimerMs);
  }
  ::android::binder::Status pauseGeofence(int32_t geofenceId) override {
    return _aidl_delegate->pauseGeofence(geofenceId);
  }
  ::android::binder::Status resumeGeofence(int32_t geofenceId, int32_t monitorTransitions) override {
    return _aidl_delegate->resumeGeofence(geofenceId, monitorTransitions);
  }
  ::android::binder::Status removeGeofence(int32_t geofenceId) override {
    return _aidl_delegate->removeGeofence(geofenceId);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssGeofence::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssGeofence> _aidl_delegate;
};  // class IGnssGeofenceDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android

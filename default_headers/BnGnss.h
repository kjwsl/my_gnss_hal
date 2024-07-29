/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnss.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnss.h>
#include <android/hardware/gnss/BnAGnss.h>
#include <android/hardware/gnss/BnAGnssRil.h>
#include <android/hardware/gnss/BnGnss.h>
#include <android/hardware/gnss/BnGnssAntennaInfo.h>
#include <android/hardware/gnss/BnGnssBatching.h>
#include <android/hardware/gnss/BnGnssCallback.h>
#include <android/hardware/gnss/BnGnssConfiguration.h>
#include <android/hardware/gnss/BnGnssDebug.h>
#include <android/hardware/gnss/BnGnssGeofence.h>
#include <android/hardware/gnss/BnGnssMeasurementInterface.h>
#include <android/hardware/gnss/BnGnssNavigationMessageInterface.h>
#include <android/hardware/gnss/BnGnssPowerIndication.h>
#include <android/hardware/gnss/BnGnssPsds.h>
#include <android/hardware/gnss/measurement_corrections/BnMeasurementCorrectionsInterface.h>
#include <android/hardware/gnss/visibility_control/BnGnssVisibilityControl.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnss : public ::android::BnInterface<IGnss> {
public:
  static constexpr uint32_t TRANSACTION_setCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_close = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getExtensionPsds = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_getExtensionGnssConfiguration = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_getExtensionGnssMeasurement = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getExtensionGnssPowerIndication = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_getExtensionGnssBatching = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_getExtensionGnssGeofence = ::android::IBinder::FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_getExtensionGnssNavigationMessage = ::android::IBinder::FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_getExtensionAGnss = ::android::IBinder::FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_getExtensionAGnssRil = ::android::IBinder::FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_getExtensionGnssDebug = ::android::IBinder::FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_getExtensionGnssVisibilityControl = ::android::IBinder::FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_start = ::android::IBinder::FIRST_CALL_TRANSACTION + 13;
  static constexpr uint32_t TRANSACTION_stop = ::android::IBinder::FIRST_CALL_TRANSACTION + 14;
  static constexpr uint32_t TRANSACTION_injectTime = ::android::IBinder::FIRST_CALL_TRANSACTION + 15;
  static constexpr uint32_t TRANSACTION_injectLocation = ::android::IBinder::FIRST_CALL_TRANSACTION + 16;
  static constexpr uint32_t TRANSACTION_injectBestLocation = ::android::IBinder::FIRST_CALL_TRANSACTION + 17;
  static constexpr uint32_t TRANSACTION_deleteAidingData = ::android::IBinder::FIRST_CALL_TRANSACTION + 18;
  static constexpr uint32_t TRANSACTION_setPositionMode = ::android::IBinder::FIRST_CALL_TRANSACTION + 19;
  static constexpr uint32_t TRANSACTION_getExtensionGnssAntennaInfo = ::android::IBinder::FIRST_CALL_TRANSACTION + 20;
  static constexpr uint32_t TRANSACTION_getExtensionMeasurementCorrections = ::android::IBinder::FIRST_CALL_TRANSACTION + 21;
  static constexpr uint32_t TRANSACTION_startSvStatus = ::android::IBinder::FIRST_CALL_TRANSACTION + 22;
  static constexpr uint32_t TRANSACTION_stopSvStatus = ::android::IBinder::FIRST_CALL_TRANSACTION + 23;
  static constexpr uint32_t TRANSACTION_startNmea = ::android::IBinder::FIRST_CALL_TRANSACTION + 24;
  static constexpr uint32_t TRANSACTION_stopNmea = ::android::IBinder::FIRST_CALL_TRANSACTION + 25;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnss();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnss

class IGnssDelegator : public BnGnss {
public:
  explicit IGnssDelegator(const ::android::sp<IGnss> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnss> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IGnssCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IGnssCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->setCallback(_callback);
  }
  ::android::binder::Status close() override {
    return _aidl_delegate->close();
  }
  ::android::binder::Status getExtensionPsds(::android::sp<::android::hardware::gnss::IGnssPsds>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionPsds(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssPsdsDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssConfiguration(::android::sp<::android::hardware::gnss::IGnssConfiguration>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssConfiguration(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssConfigurationDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssMeasurement(::android::sp<::android::hardware::gnss::IGnssMeasurementInterface>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssMeasurement(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssMeasurementInterfaceDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssPowerIndication(::android::sp<::android::hardware::gnss::IGnssPowerIndication>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssPowerIndication(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssPowerIndicationDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssBatching(::android::sp<::android::hardware::gnss::IGnssBatching>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssBatching(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssBatchingDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssGeofence(::android::sp<::android::hardware::gnss::IGnssGeofence>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssGeofence(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssGeofenceDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssNavigationMessage(::android::sp<::android::hardware::gnss::IGnssNavigationMessageInterface>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssNavigationMessage(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssNavigationMessageInterfaceDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionAGnss(::android::sp<::android::hardware::gnss::IAGnss>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionAGnss(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IAGnssDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionAGnssRil(::android::sp<::android::hardware::gnss::IAGnssRil>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionAGnssRil(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IAGnssRilDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssDebug(::android::sp<::android::hardware::gnss::IGnssDebug>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssDebug(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssDebugDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionGnssVisibilityControl(::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControl>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssVisibilityControl(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControlDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status start() override {
    return _aidl_delegate->start();
  }
  ::android::binder::Status stop() override {
    return _aidl_delegate->stop();
  }
  ::android::binder::Status injectTime(int64_t timeMs, int64_t timeReferenceMs, int32_t uncertaintyMs) override {
    return _aidl_delegate->injectTime(timeMs, timeReferenceMs, uncertaintyMs);
  }
  ::android::binder::Status injectLocation(const ::android::hardware::gnss::GnssLocation& location) override {
    return _aidl_delegate->injectLocation(location);
  }
  ::android::binder::Status injectBestLocation(const ::android::hardware::gnss::GnssLocation& location) override {
    return _aidl_delegate->injectBestLocation(location);
  }
  ::android::binder::Status deleteAidingData(::android::hardware::gnss::IGnss::GnssAidingData aidingDataFlags) override {
    return _aidl_delegate->deleteAidingData(aidingDataFlags);
  }
  ::android::binder::Status setPositionMode(const ::android::hardware::gnss::IGnss::PositionModeOptions& options) override {
    return _aidl_delegate->setPositionMode(options);
  }
  ::android::binder::Status getExtensionGnssAntennaInfo(::android::sp<::android::hardware::gnss::IGnssAntennaInfo>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionGnssAntennaInfo(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::IGnssAntennaInfoDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status getExtensionMeasurementCorrections(::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsInterface>* _aidl_return) override {
    auto _status = _aidl_delegate->getExtensionMeasurementCorrections(_aidl_return);
    if (*_aidl_return) {
      *_aidl_return = ::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsInterfaceDelegator>::cast(delegate(*_aidl_return));
    }
    return _status;
  }
  ::android::binder::Status startSvStatus() override {
    return _aidl_delegate->startSvStatus();
  }
  ::android::binder::Status stopSvStatus() override {
    return _aidl_delegate->stopSvStatus();
  }
  ::android::binder::Status startNmea() override {
    return _aidl_delegate->startNmea();
  }
  ::android::binder::Status stopNmea() override {
    return _aidl_delegate->stopNmea();
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnss::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnss> _aidl_delegate;
};  // class IGnssDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android

/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "cutils/properties.h"
#include <memory>
#define LOG_TAG "GnssAidl"

#include "Gnss.h"
#include <inttypes.h>
#include <log/log.h>
#include <utils/Timers.h>
#include <cutils/properties.h>
#include "Gnss.h"

#define DBG(f, ...) ALOGD("file: %s, func: %s, line: %d, " f ", kjw", __FILE__, __func__, __LINE__,  ##__VA_ARGS__)

namespace aidl::android::hardware::gnss {

using ndk::ScopedAStatus;
using GnssSvInfo = IGnssCallback::GnssSvInfo;

constexpr int TTFF_MILLIS = 2200;

std::shared_ptr<IGnssCallback> Gnss::sGnssCallback = nullptr;

Gnss::Gnss() : mMinIntervalMs(1000), mFirstFixReceived(false) {
    DBG("default constructor");
    char devname[PROP_VALUE_MAX];
    /* if (property_get(PROP_GNSS_DEVICE, devname, DEFAULT_GNSS_DEVICE) <= 0) {
        ALOGW("Failed to get property %s. Using default device %s", PROP_GNSS_DEVICE,
              DEFAULT_GNSS_DEVICE);

    } */
    /* sListener = make_shared<GnssListener>(devname, [this](const GnssEvent& event) {
            if (sGnssCallback != nullptr) {
                sGnssCallback->gnssNmeaCb(event.timeMs, event.sentence);
            }
    }); */
}

ScopedAStatus Gnss::setCallback(const std::shared_ptr<IGnssCallback>& callback) {
    ALOGD("setCallback");
    if (callback == nullptr) {
        ALOGE("%s: Null callback ignored", __func__);
        return ScopedAStatus::fromExceptionCode(STATUS_INVALID_OPERATION);
    }
    sGnssCallback = callback;

    // Neo 6m doesn't support any of these additional features
    /* int capabilities =
            (int)(IGnssCallback::CAPABILITY_MEASUREMENTS | IGnssCallback::CAPABILITY_SCHEDULING |
                  IGnssCallback::CAPABILITY_SATELLITE_PVT |
                  IGnssCallback::CAPABILITY_CORRELATION_VECTOR |
                  IGnssCallback::CAPABILITY_ANTENNA_INFO |
                  IGnssCallback::CAPABILITY_ACCUMULATED_DELTA_RANGE); */
    int capabilities = 0;
    auto status = sGnssCallback->gnssSetCapabilitiesCb(capabilities);
    if (!status.isOk()) {
        ALOGE("%s: Unable to invoke callback.gnssSetCapabilitiesCb", __func__);
    }

    IGnssCallback::GnssSystemInfo systemInfo = {
            .yearOfHw = 2023,
            .name = "Neo6M, Ray",
    };
    status = sGnssCallback->gnssSetSystemInfoCb(systemInfo);
    if (!status.isOk()) {
        ALOGE("%s: Unable to invoke callback.gnssSetSystemInfoCb", __func__);
    }
    GnssSignalType signalType1 = {
            .constellation = GnssConstellationType::GPS,
            .carrierFrequencyHz = 1.57542e+09,
            .codeType = GnssSignalType::CODE_TYPE_C,
    };
    // Neo6M only supports GPS, but other constellations
    /*
    GnssSignalType signalType2 = {
            .constellation = GnssConstellationType::GLONASS,
            .carrierFrequencyHz = 1.5980625e+09,
            .codeType = GnssSignalType::CODE_TYPE_C,
    };
    */
    status = sGnssCallback->gnssSetSignalTypeCapabilitiesCb(
            std::vector<GnssSignalType>({signalType1}));
    if (!status.isOk()) {
        ALOGE("%s: Unable to invoke callback.gnssSetSignalTypeCapabilitiesCb", __func__);
    }
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::start() {
    DBG();
    // ALOGD("start()");
    if (mIsActive) {
        ALOGW("Gnss has started. Restarting...");
        stop();
    }

    mIsActive = true;
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::stop() {
    DBG();
    // ALOGD("stop");
    mIsActive = false;
    if (mThread.joinable()) {
        mThread.join();
    }
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::close() {
    DBG();
    // ALOGD("close");
    sGnssCallback = nullptr;
    return ScopedAStatus::ok();
}

void Gnss::reportLocation(const GnssLocation& location) const {
    DBG();
    std::unique_lock<std::mutex> lock(mMutex);
    if (sGnssCallback == nullptr) {
        ALOGE("%s: GnssCallback is null.", __func__);
        return;
    }
    auto status = sGnssCallback->gnssLocationCb(location);
    if (!status.isOk()) {
        ALOGE("%s: Unable to invoke gnssLocationCb", __func__);
    }
    return;
}

void Gnss::reportNmea() const {
    DBG();
    if (mIsNmeaActive) {
        std::unique_lock<std::mutex> lock(mMutex);
        if (sGnssCallback == nullptr) {
            ALOGE("%s: sGnssCallback is null.", __func__);
            return;
        }
        nsecs_t now = systemTime(SYSTEM_TIME_MONOTONIC);
        auto status = sGnssCallback->gnssNmeaCb(now, "$TEST,0,1,2,3,4,5");
        if (!status.isOk()) {
            ALOGE("%s: Unable to invoke callback", __func__);
        }
    }
}

ScopedAStatus Gnss::startSvStatus() {
    ALOGD("startSvStatus");
    mIsSvStatusActive = true;
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::stopSvStatus() {
    ALOGD("stopSvStatus");
    mIsSvStatusActive = false;
    return ScopedAStatus::ok();
}
ScopedAStatus Gnss::startNmea() {
    ALOGD("startNmea");
    mIsNmeaActive = true;
    return ScopedAStatus::ok();
}
ScopedAStatus Gnss::stopNmea() {
    ALOGD("stopNmea");
    mIsNmeaActive = false;
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionAGnss(std::shared_ptr<IAGnss>* iAGnss) {
    ALOGD("Gnss::getExtensionAGnss");
    return ndk::ScopedAStatus::ok();
}

ScopedAStatus Gnss::injectTime(int64_t timeMs, int64_t timeReferenceMs, int uncertaintyMs) {
    ALOGD("injectTime. timeMs:%" PRId64 ", timeReferenceMs:%" PRId64 ", uncertaintyMs:%d", timeMs,
          timeReferenceMs, uncertaintyMs);
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionAGnssRil(std::shared_ptr<IAGnssRil>* iAGnssRil) {
    ALOGD("Gnss::getExtensionAGnssRil");
    return ndk::ScopedAStatus::ok();
}

ScopedAStatus Gnss::injectLocation(const GnssLocation& location) {
    ALOGD("injectLocation. lat:%lf, lng:%lf, acc:%f", location.latitudeDegrees,
          location.longitudeDegrees, location.horizontalAccuracyMeters);
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::injectBestLocation(const GnssLocation& location) {
    ALOGD("injectBestLocation. lat:%lf, lng:%lf, acc:%f", location.latitudeDegrees,
          location.longitudeDegrees, location.horizontalAccuracyMeters);
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::deleteAidingData(GnssAidingData aidingDataFlags) {
    ALOGD("deleteAidingData. flags:%d", (int)aidingDataFlags);
    mFirstFixReceived = false;
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::setPositionMode(const PositionModeOptions& options) {
    ALOGD("setPositionMode. minIntervalMs:%d, lowPowerMode:%d", options.minIntervalMs,
          (int)options.lowPowerMode);
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionPsds(std::shared_ptr<IGnssPsds>* iGnssPsds) {
    ALOGD("getExtensionPsds");
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssConfiguration(
        std::shared_ptr<IGnssConfiguration>* iGnssConfiguration) {
    ALOGD("getExtensionGnssConfiguration");
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssPowerIndication(
        std::shared_ptr<IGnssPowerIndication>* iGnssPowerIndication) {
    ALOGD("getExtensionGnssPowerIndication");

    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssMeasurement(
        std::shared_ptr<IGnssMeasurementInterface>* iGnssMeasurement) {
    ALOGD("getExtensionGnssMeasurement");
    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssBatching(std::shared_ptr<IGnssBatching>* iGnssBatching) {
    ALOGD("getExtensionGnssBatching");

    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssGeofence(std::shared_ptr<IGnssGeofence>* iGnssGeofence) {
    ALOGD("getExtensionGnssGeofence");

    return ScopedAStatus::ok();
}

ScopedAStatus Gnss::getExtensionGnssNavigationMessage(
        std::shared_ptr<IGnssNavigationMessageInterface>* iGnssNavigationMessage) {
    ALOGD("getExtensionGnssNavigationMessage");

    return ScopedAStatus::ok();
}

ndk::ScopedAStatus Gnss::getExtensionGnssDebug(std::shared_ptr<IGnssDebug>* iGnssDebug) {
    ALOGD("Gnss::getExtensionGnssDebug");

    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus Gnss::getExtensionGnssVisibilityControl(
        std::shared_ptr<visibility_control::IGnssVisibilityControl>* iGnssVisibilityControl) {
    ALOGD("Gnss::getExtensionGnssVisibilityControl");

    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus Gnss::getExtensionGnssAntennaInfo(
        std::shared_ptr<IGnssAntennaInfo>* iGnssAntennaInfo) {
    ALOGD("Gnss::getExtensionGnssAntennaInfo");

    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus Gnss::getExtensionMeasurementCorrections(
        std::shared_ptr<measurement_corrections::IMeasurementCorrectionsInterface>*
                iMeasurementCorrections) {
    ALOGD("Gnss::getExtensionMeasurementCorrections");

    return ndk::ScopedAStatus::ok();
}

void Gnss::setGnssMeasurementEnabled(const bool enabled) {
    mGnssMeasurementEnabled = enabled;
}

void Gnss::setGnssMeasurementInterval(const long intervalMs) {
    mGnssMeasurementIntervalMs = intervalMs;
}

}  // namespace aidl::android::hardware::gnss

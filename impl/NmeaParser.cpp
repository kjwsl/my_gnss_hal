#include <cstdio>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>

#include "include/NmeaParser.h"
namespace gnss::impl {


NmeaParser::NmeaParser(const string_view sentence, const NmeaCallbacks& callbacks) {
    setSentence(sentence);
    setCallbacks(callbacks);
}

void NmeaParser::reset() {
    mSentence = "";
    mCbs = {};
}

void NmeaParser::parse() {
    if (mSentence.empty()) {
        throw runtime_error("Sentence is empty");
    }

    istringstream ss(mSentence.data());
    string token;
    vector<string> tokens;
    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }
    if (tokens.empty()) {
        throw runtime_error("No tokens found in sentence");
    }

    if (tokens[0] == "$GPGGA") {
        if (!mCbs.ggaCallback.has_value()) {
            return;
        }
        auto event = parseGga_(tokens);
        event.isValid = isValid_(mSentence.data());
        mCbs.ggaCallback.value()(event);
    } else if (tokens[0] == "$GPRMC") {
        if (!mCbs.rmcCallback.has_value()) {
            return;
        }
        auto event = parseRmc_(tokens);
        event.isValid = isValid_(mSentence.data());
        mCbs.rmcCallback.value()(event);
    } else {
        throw runtime_error("Unsupported sentence type");
    }
}

GgaEvent NmeaParser::parseGga_(const vector<string>& tokens) {
    if (tokens.size() < 15) {
        throw runtime_error("Invalid number of tokens in GGA sentence");
    }
    return {
        .time = parseUtcTime_(tokens[1]),
        .latitude = parseLatitude_(tokens[2], tokens[3]),
        .longitude = parseLongitude_(tokens[4], tokens[5]),
        .fixMode = parseFixMode_(tokens[6]),
        .numSatellites = stoi(tokens[7]),
        .hdop = stod(tokens[8]),
        .altitude = stod(tokens[9]),
        .geoidHeight = stod(tokens[11]),
        .dgpsAge = tokens[13],
        .dgpsStationId = tokens[14],
    };
}

RmcEvent NmeaParser::parseRmc_(const vector<string>& tokens) {
    RmcEvent event;
    event.time = parseUtcTime_(tokens[1]);
    event.latitude = stod(tokens[3]);
    event.longitude = stod(tokens[5]);
    event.speed = stod(tokens[7]);
    event.course = stod(tokens[8]);
    event.date = parseDate_(tokens[9]);
    event.fixMode = tokens[12];
    event.magneticVariation = stod(tokens[10]);
    event.modeIndicator = tokens[11];
    return event;
}

bool NmeaParser::isValid_(const string& sentence) {
    int checksum{};
    int expected{};
    for (size_t i = 1; i < sentence.size(); i++) {
        if (sentence[i] == '*') {
            expected = stoi(sentence.substr(i + 1), nullptr, 16);
            break;
        }
        checksum ^= sentence[i];
    }

    return checksum == expected;
}

Date NmeaParser::parseDate_(const string& date) {
    return {
        .day = stoi(date.substr(0, 2)),
        .month = stoi(date.substr(2, 2)),
        .year = stoi(date.substr(4)),
    };
}

UtcTime NmeaParser::parseUtcTime_(const string& time) {

    return {
        .hour = stoi(time.substr(0, 2)),
        .minute = stoi(time.substr(2, 2)),
        .second = stoi(time.substr(4,2)),
        .millisecond = stoi(time.substr(7)),
    };
}

void NmeaParser::setCallbacks(const NmeaCallbacks& callbacks) {
    mCbs = callbacks;
}

void NmeaParser::setSentence(const string_view sentence) {
    if (sentence.empty()) {
        throw invalid_argument("Sentence cannot be empty");
    }
    mSentence = sentence;
}

FixMode NmeaParser::parseFixMode_(const string& mode) {
    return static_cast<FixMode>(stoi(mode));
}

double NmeaParser::parseLatitude_(const string& latitude, const string& latDir) {
    double lat = stoi(latitude.substr(0, 2)) + stod(latitude.substr(2)) / 60;
    return latDir == "S" ? -lat : lat;
}

double NmeaParser::parseLongitude_(const string& longitude, const string& lonDir) {
    double lon = stoi(longitude.substr(0, 3)) + stod(longitude.substr(3)) / 60;
    return lonDir == "W" ? -lon : lon;
}


}

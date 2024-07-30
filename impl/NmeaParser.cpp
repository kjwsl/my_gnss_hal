#include <iostream>
#include <cstdio>
#include <stdexcept>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "include/NmeaParser.h"
namespace gnss::impl {


NmeaParser::NmeaParser(const string& sentence, const NmeaCallbacks& callbacks) : m_sentence(sentence), m_callbacks(callbacks) {}

void NmeaParser::reset() {
    m_sentence = "";
    m_callbacks = {};
}

void NmeaParser::parse() {
    if (m_sentence.empty()) {
        throw runtime_error("Sentence is empty");
    }

    istringstream ss(m_sentence);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }
    if (tokens.empty()) {
        throw runtime_error("No tokens found in sentence");
    }

    unique_ptr<NmeaEvent> event {};

    if (tokens[0].find("GGA") != string::npos) {
        if (!m_callbacks.ggaCallback.has_value()) {
        }
        event = parseGga_(tokens);
        event->isValid = hasValidChecksum(m_sentence);
        m_callbacks.ggaCallback.value()(std::move(event));
    } else if (tokens[0].find("RMC") != string::npos) {
        if (!m_callbacks.rmcCallback.has_value()) {
        }
        event = parseRmc_(tokens);
        event->isValid = hasValidChecksum(m_sentence);
        m_callbacks.rmcCallback.value()(std::move(event));
    } else {
        cout << "Unsupported sentence: " << tokens[0] << endl;
        event = make_unique<NmeaEvent>();
        event->isValid = hasValidChecksum(m_sentence);
        m_callbacks.unknownCallback.value()(std::move(event));
    }
}

bool NmeaParser::isReady() const {
    return (!m_sentence.empty() && hasAnyCallback_());
}


bool NmeaParser::hasAnyCallback_() const noexcept {
    return m_callbacks.ggaCallback.has_value() || m_callbacks.rmcCallback.has_value();
}


unique_ptr<GgaEvent> NmeaParser::parseGga_(const vector<string>& tokens) {
    if (tokens.size() < 15) {
        throw runtime_error("Invalid number of tokens in GGA sentence");
    }

    auto event = make_unique<GgaEvent>();

    event->time = parseUtcTime_(tokens[1]);
    event->latitude = parseLatitude_(tokens[2], tokens[3]);
    event->longitude = parseLongitude_(tokens[4], tokens[5]);
    event->fixMode = parseFixMode_(tokens[6]);
    event->numSatellites = parseInt_(tokens[7]);
    event->hdop = parseDouble_(tokens[8]);
    event->altitude = parseDouble_(tokens[9]);
    event->geoidHeight = parseDouble_(tokens[11]);
    event->dgpsAge = tokens[13];
    event->dgpsStationId = tokens[14];

    return event;
}

unique_ptr<RmcEvent> NmeaParser::parseRmc_(const vector<string>& tokens) {
    auto event = make_unique<RmcEvent>();

    event->time = parseUtcTime_(tokens[1]);
    event->isDataValid = tokens[2] == "A";
    event->latitude = parseLatitude_(tokens[3], tokens[4]);
    event->longitude = parseLongitude_(tokens[5], tokens[6]);
    event->speed = parseDouble_(tokens[7]);
    event->course = parseDouble_(tokens[8]);
    event->date = parseDate_(tokens[9]);
    if (tokens.size() > 12) {
        event->magneticVariation = make_optional(parseDouble_(tokens[10])*(tokens[11] == "W" ? -1 : 1));
        event->positionMode = make_optional(parsePositionMode_(tokens[12]));
    } else {
        event->magneticVariation = nullopt;
        event->positionMode = nullopt;
    }

    return event;
}

bool NmeaParser::hasValidChecksum(const string& sentence) {
    if (sentence[0] != '$') {
        return false;
    }

    int checksum{};
    int expected{};
    for (size_t i = 1; i < sentence.size(); i++) {
        if (sentence[i] == '*') {
            expected = parseInt_(sentence.substr(i + 1, 2), 16);
            break;
        }
        checksum ^= sentence[i];
    }

    return checksum == expected;
}

Date NmeaParser::parseDate_(const string& date) {
    return {
        .day = parseInt_(date.substr(0, 2)),
        .month = parseInt_(date.substr(2, 2)),
        .year = parseInt_(date.substr(4)),
    };
}

PositionMode NmeaParser::parsePositionMode_(const string& mode) {
    if (mode == "A") {
        return PositionMode::AUTONOMOUS;
    } else if (mode == "D") {
        return PositionMode::DGPS;
    } else if (mode == "E") {
        return PositionMode::ESTIMATED;
    } else {
        throw invalid_argument{"Invalid position mode"};
    }
}

UtcTime NmeaParser::parseUtcTime_(const string& time) {

    return {
        .hour = parseInt_(time.substr(0, 2)),
        .minute = parseInt_(time.substr(2, 2)),
        .second = parseDouble_(time.substr(4)),
    };
}

void NmeaParser::setCallbacks(const NmeaCallbacks& callbacks) {
    m_callbacks = callbacks;
}

void NmeaParser::setSentence(const string& sentence) {
    if (sentence.empty()) {
        throw invalid_argument{"Sentence cannot be empty"};
    }
    m_sentence = sentence;
}

FixMode NmeaParser::parseFixMode_(const string& mode) {
    return static_cast<FixMode>(stoi(mode));
}

double NmeaParser::parseLatitude_(const string& latitude, const string& latDir) {
    double lat {parseInt_(latitude.substr(0, 2)) + parseDouble_(latitude.substr(2)) / 60};
    return latDir == "S" ? -lat : lat;
}

double NmeaParser::parseLongitude_(const string& longitude, const string& lonDir) {
    double lon { parseInt_(longitude.substr(0, 3)) + parseDouble_(longitude.substr(3)) / 60};
    return lonDir == "W" ? -lon : lon;
}


// TODO: Throw exception if str is empty
double NmeaParser::parseDouble_(const string& str) {
    if (str.empty()) {
        return 0.0;
    }
    return stod(str);
}

// TODO: Throw exception if str is empty
int NmeaParser::parseInt_(const string& str, int base) {
    if (str.empty()) {
        return 0;
    }
    return stoi(str, nullptr, base);
}

} // namespace gnss::impl

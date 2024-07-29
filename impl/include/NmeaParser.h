#ifndef __NMEA_PARSER_H__
#define __NMEA_PARSER_H__

#include <optional>
#include <string>
#include <functional>
#include <cstdint>

namespace gnss::impl {

using namespace std;

struct UtcTime {
    int hour;
    int minute;
    int second;
    int millisecond;
};

enum class FixMode {
    NO_FIX,
    GPS_FIX,
    DGPS_FIX,
    UNSUPPORTED_FIX,
    DEAD_RECKONING_FIX,
};

struct Date {
    int day;
    int month;
    int year;
};


struct GgaEvent {
    UtcTime time;
    double latitude;
    double longitude;
    FixMode fixMode;
    int numSatellites;
    double hdop;
    double altitude;
    double geoidHeight;
    string dgpsAge;
    string dgpsStationId;
    bool isValid{false};
};

struct RmcEvent {
    UtcTime time;
    bool isValid{false};
    double latitude;
    double longitude;
    double speed;
    double course;
    Date date;
    string fixMode;
    double magneticVariation;
    string modeIndicator;
};

using GgaCallback = function<void(const GgaEvent&)>;
using RmcCallback = function<void(const RmcEvent&)>;

struct NmeaCallbacks {
    optional<GgaCallback> ggaCallback;
    optional<RmcCallback> rmcCallback;
};
class NmeaParser {
    public:
        NmeaParser() = default;
        NmeaParser(const string_view sentence, const NmeaCallbacks& callbacks = {});

        void setSentence(const string_view sentence);
        void parse();
        void setCallbacks(const NmeaCallbacks& callbacks);
        void reset();

    
    private:
        NmeaCallbacks mCbs;
        string_view mSentence;

        GgaEvent parseGga_(const vector<string>& tokens);
        RmcEvent parseRmc_(const vector<string>& tokens);
        Date parseDate_(const string& date);
        UtcTime parseUtcTime_(const string& time);
        double parseLatitude_(const string& latitude, const string& latDir);
        double parseLongitude_(const string& longitude, const string& lonDir);
        FixMode parseFixMode_(const string& fixMode);

        bool isValid_(const string& sentence);
};

}

#endif // __NMEA_PARSER_H__

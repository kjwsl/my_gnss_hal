#include <cstdio>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <catch2/catch_test_macros.hpp>
#include "../include/NmeaParser.h"

using namespace gnss::impl;
using namespace std;

class NmeaParserTest : public NmeaParser {
    public:

        NmeaParser parser{};
        ifstream fs{};


        NmeaParserTest() {
            fs.open("../nmea_sample.txt");

            if (!fs.is_open()) {
                FAIL("Failed to open file");
            }
        }

        ~NmeaParserTest() {
            fs.close();
        }

        bool isValidChecksum() {
            bool result = false;
            parser.setCallbacks(NmeaCallbacks{
                    .ggaCallback = [&result](const unique_ptr<NmeaEvent> event) {
                    result = event->isValid;
                    },
                    .rmcCallback = [&result](const unique_ptr<NmeaEvent> event) { 
                    result = event->isValid;
                    },
                    .unknownCallback = [&result](const unique_ptr<NmeaEvent> event) { 
                    result = event->isValid;
                    }
                    });

            if (parser.isReady()) {
                try {
                    parser.parse();
                } catch (const exception& e) {
                    cout << "Exception happened: " << e.what() << endl;
                    return false;
                }
            }
            return result;
        }

        GgaEvent getGgaEvent() {
            parser.setCallbacks({
                    .ggaCallback = [](const unique_ptr<NmeaEvent> event) {
                    REQUIRE(gga != nullptr);
                    REQUIRE(gga->isValid);
                    REQUIRE(gga->time == "123519");
                    REQUIRE(gga->latitude == "4807.038");
                    REQUIRE(gga->longitude == "01131.000");
                    REQUIRE(gga->fixQuality == 1);
                    REQUIRE(gga->numSatellites == 8);
                    REQUIRE(gga->hdop == 1.5);
                    REQUIRE(gga->altitude == 280.2);
                    REQUIRE(gga->altitudeUnits == 'M');
                    REQUIRE(gga->geoidHeight == 0.0);
                    REQUIRE(gga->geoidHeightUnits == 'M');
                    REQUIRE(gga->dgpsAge == 0.0);
                    REQUIRE(gga->dgpsStationId == 0);

                    },
                    });

        }
};


TEST_CASE("NmeaParser: Checksum validation", "[nmea_parser]") {
    ifstream fs { "../nmea_sample.txt"};

    if (!fs.is_open()) {
        FAIL("Failed to open file");
    }

    for (string sentence; getline(fs, sentence);) {
        INFO("Sentence: " << sentence);
        parser.setSentence(sentence);

        auto res = isValidChecksum();
        CAPTURE(sentence, res, true);
        REQUIRE(res);
    }

    fs.close();
}

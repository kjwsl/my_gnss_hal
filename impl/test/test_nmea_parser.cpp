#include <iostream>
#include "../include/NmeaParser.h"

using namespace gnss::impl;
using namespace std;

int main() {

    NmeaCallbacks callbacks{
        .ggaCallback = [](const GgaEvent& event) {
            event.isValid ? cout << "GGA Callback: Valid" << endl : cout << "GGA Callback: Invalid" << endl;
        },
            .rmcCallback = [](const RmcEvent& event) { 
            event.isValid ? cout << "RMC Callback: Valid" << endl : cout << "RMC Callback: Invalid" << endl;
            }
    };
    NmeaParser parser{"$GPRMC,161229.487,A,3723.2475,N,12158.3416,W,0.13,309.62,120598,,*10", callbacks};
    try {
        parser.parse();
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}

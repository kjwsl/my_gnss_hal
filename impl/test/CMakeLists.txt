find_package(Catch2 3 REQUIRED)
add_executable(tests test_nmea_parser.cpp ../NmeaParser.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(tests)

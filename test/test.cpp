#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>
#include <string>
#include "HelloWorld.h"

TEST_CASE("Test heloWorld", "[test]") {
    HelloWorld helloWorld;

    REQUIRE("Hello World!" == helloWorld.show());
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Security.h"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

Security testSecuritySetup() {
    Security sec = Security("UBI");
    sec.setPrice(101.00);
    return sec;
}

TEST_CASE(" Basic Security test") {
    Security sec = testSecuritySetup();
    REQUIRE( sec.getName() == "UBI");
    REQUIRE( sec.getPrice() == 101);
}
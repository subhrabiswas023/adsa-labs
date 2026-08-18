#include <catch2/catch_test_macros.hpp>

#include "lab1/q6.h"

TEST_CASE("Greatest common divisor") 
{
    REQUIRE(gcd(48, 36) == 12);
}

TEST_CASE("Fast Exponentiation")
{
    REQUIRE(expo(2, 10) == 1024);
    REQUIRE(expo(2, 100) == 976371285);
}
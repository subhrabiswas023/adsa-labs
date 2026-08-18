#include <catch2/catch_test_macros.hpp>

#include "lab1/q2.h"

TEST_CASE("Maximum element")
{
    REQUIRE(max_element({7, 1, 5, 3, 6, 4}) == 7);
    REQUIRE(max_element({5, 5, 3, 1}) == 5);
}

TEST_CASE("Minimum element")
{
    REQUIRE(min_element({7, 1, 5, 3, 6, 4}) == 1);
    REQUIRE(min_element({5, 5, 3, 1}) == 1);
}

TEST_CASE("Second largest distinct element")
{
    REQUIRE(get_second_largest({7, 1, 5, 3, 6, 4}) == 6);
    REQUIRE(get_second_largest({5, 5, 3, 1}) == 3);
    
    REQUIRE(get_second_largest({5, 1, 4, 2}) == 4);
    REQUIRE(get_second_largest({10, 9}) == 9);
    REQUIRE(get_second_largest({7, 7, 6}) == 6);
    REQUIRE(get_second_largest({-5, -2, -10}) == -5);
}

TEST_CASE("Maximum stock profit")
{
    REQUIRE(max_profit({7, 1, 5, 3, 6, 4}) == 5);
    REQUIRE(max_profit({5, 5, 3, 1}) == 0);
    
    REQUIRE(max_profit({7, 6, 4, 3, 1}) == 0);
    REQUIRE(max_profit({1, 2, 3, 4}) == 3);
    REQUIRE(max_profit({5}) == 0);
    REQUIRE(max_profit({}) == 0);
}
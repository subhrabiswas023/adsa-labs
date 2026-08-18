#include <catch2/catch_test_macros.hpp>

#include "lab1/q3.h"

TEST_CASE("Two sum brute-force")
{
    REQUIRE(two_sum_brute({2, 7, 11, 15}, 9) == std::pair<size_t, size_t>({0, 1}));
}

TEST_CASE("Two sum sorting")
{
    REQUIRE(two_sum_sorting({2, 7, 11, 15}, 9) == std::pair<size_t, size_t>({0, 1}));
}

TEST_CASE("Two sum hashing")
{
    REQUIRE(two_sum_hashing({2, 7, 11, 15}, 9) == std::pair<size_t, size_t>({0, 1}));
}
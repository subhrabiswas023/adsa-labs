#include <catch2/catch_test_macros.hpp>

#include "test_utils.h"
#include "lab1/q5.h"

TEST_CASE("Factorial")
{
    REQUIRE(fact(5) == 120);
}

TEST_CASE("Recursive sum of digits")
{
    REQUIRE(sum_of_digits_recur(5) == 5);
}

TEST_CASE("Increasing numbers")
{
    Capture capture;
    print_increasing_numbers(5);
    REQUIRE(capture.str() == "1 2 3 4 5 ");
}

TEST_CASE("Decreasing numbers")
{
    Capture capture;
    print_decreasing_numbers(5);
    REQUIRE(capture.str() == "5 4 3 2 1 ");
}

TEST_CASE("Fibonacci counting calls")
{
    REQUIRE(fibonacci(10) == std::pair<int, int>{55, 177});
    REQUIRE(fibonacci(30) == std::pair<int, int>{832040, 2692537});
}
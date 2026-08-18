#include <catch2/catch_test_macros.hpp>

#include "lab1/q1.h"

TEST_CASE("Number of digits") {
    REQUIRE(num_digits(0) == 1);
    REQUIRE(num_digits(1230) == 4);
    REQUIRE(num_digits(-45) == 2);
    REQUIRE(num_digits(1999999999) == 10);
}

TEST_CASE("Sum of digits") {
    REQUIRE(sum_digits(1230) == 6);
    REQUIRE(sum_digits(-45) == 9);
    REQUIRE(sum_digits(1999999999) == 82);
}

TEST_CASE("Reverse of number") {
    REQUIRE(reverse(1230) == 321);
    REQUIRE(reverse(-45) == -54);
    REQUIRE_THROWS_AS(reverse(1999999999), int_overflow);
}

TEST_CASE("Palindrome number") {
    REQUIRE_FALSE(is_palindrome(1230));
    REQUIRE_FALSE(is_palindrome(-45));
    REQUIRE_FALSE(is_palindrome(1999999999));
}

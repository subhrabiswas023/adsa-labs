#include <catch2/catch_test_macros.hpp>

#include "lab1/q4.h"

TEST_CASE("Palindrome string")
{
    REQUIRE(is_palindrome("\"A man, a plan, a canal: Panama\""));
    REQUIRE_FALSE(is_palindrome("\"race a car\""));
}

TEST_CASE("Anagram string")
{
    REQUIRE(is_anagram("listen", "silent"));
}
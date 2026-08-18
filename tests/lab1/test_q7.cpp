#include <catch2/catch_test_macros.hpp>

#include "test_utils.h"
#include "lab1/q7.h"

TEST_CASE("Tower of Hanoi") {
    Capture capture;
    int c = move_disks(2, 'A', 'C', 'B', true);
    REQUIRE(capture.str() == "1 A B\n2 A C\n1 B C\n");
}
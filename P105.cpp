// Purpose: Implement unit tests for a C++ program using a testing framework (Catch2).

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int add(int a, int b) {
    return a + b;
}

TEST_CASE("Addition tests") {
    REQUIRE(add(1, 2) == 3);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}

TEST_CASE("Subtraction tests") {
    REQUIRE(add(5, 2) == 3); // This test should fail
}

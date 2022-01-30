// https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "vector.h"

TEST_CASE("constr", "[vector]")
{
    // Vector();
    Vector a;
    REQUIRE(a.getX() == 0.0);
    REQUIRE(a.getY() == 0.0);

    // Vector(double x/* = 0.0*/, double y/* = 0.0*/);
    Vector b = Vector(12.2, 23.2);
    REQUIRE(b.getX() == 12.2);
    REQUIRE(b.getY() == 23.2);
}

TEST_CASE("math", "[vector]")
{
    // void operator+=(const Vector& other);
    Vector a = Vector(1.0, 1.0);
    Vector b = Vector(12.2, 23.2);
    a += b;

    REQUIRE(a.getX() == 13.2);
    REQUIRE(a.getY() == 24.2);

    // bool operator==(const Vector& other) const;
    bool isEqual = (a == b);
    REQUIRE(isEqual == false);
}
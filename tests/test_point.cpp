#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Point.hpp"

TEST_CASE("adding a + a - a is a", "[tests]")
{
    Point a(1.0, 2.0);
    Point a1 = a.add(&a);
    Point a2 = a1.subtract(&a);

    REQUIRE(a.x() == a2.x());
    REQUIRE(a.y() == a2.y());
}

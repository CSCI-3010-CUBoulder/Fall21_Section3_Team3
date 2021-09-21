#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE ( "Factorials are tested", "[factorial]") {
  REQUIRE( Factorial(0) == 1 );
  REQUIRE( Factorial(1) == 1 );
  REQUIRE( Factorial(2) == 2 );
  REQUIRE( Factorial(4) == 24 );
  REQUIRE( Factorial(11) == 39916800 );
}

TEST_CASE ( "Signs are tested (double)", "[sign]") {
  REQUIRE( Sign(-1.0) == -1 );
  REQUIRE( Sign(10.5) == 1 );
  REQUIRE( Sign(0.0) == 1 );
  REQUIRE( Sign(-4.2) == -1 );
}

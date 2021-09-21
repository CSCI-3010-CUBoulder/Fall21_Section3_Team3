#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE ( "Signs are tested", "[sign]") {
  REQUIRE( Sign(0) == 1 );
  REQUIRE( Sign(1) == 1 );
  REQUIRE( Sign(-1) == -1 );
  REQUIRE( Sign(4003293) == 1 );
  REQUIRE( Sign(-113762874) == -1 );
}

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


TEST_CASE ("addN function is tested (double)", "[vector_addN]") {
  std::vector<double> testVector{1.0,2.0,3.0,4.0,5.0};
  
  int a = 2;
  std::vector<double> bVector = ADDN(testVector, a);
  REQUIRE( (testVector[0] + a) == bVector[0] );
  
  a = 3;
  bVector = ADDN(testVector, a);
  REQUIRE( (testVector[1] + a) == bVector[1] );
  
  REQUIRE(testVector.size() == bVector.size());


} 

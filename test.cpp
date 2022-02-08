#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Is this number 3" , "[isthree]"){
	REQUIRE ( isThree(4) != 3 );
	REQUIRE ( isThree(3) == 3 );
	REQUIRE ( isThree(2)  != 3 );
}

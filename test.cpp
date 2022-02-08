#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("testRemoveTwos","[Rem2Con]") {
	CATCH(RemoveTwos(16) == 1);
	CATCH(RemoveTwos(26) == 13);
	CATCH(RemoveTwos(52) == 13);
}

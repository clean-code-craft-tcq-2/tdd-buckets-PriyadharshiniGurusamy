#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "ChargeRangeCheck.h"

TEST_CASE("Check readings for 3 current samples") 
{
  ChargeRangeCheck obj;
  obj.getRangeandReadings({1,1,2});
 
  REQUIRE(obj.v_rangeCount[0].second == 3);
  REQUIRE(obj.v_rangeCount[0].first.first == 1);
  REQUIRE(obj.v_rangeCount[0].first.second == 2);
}

//TestgetRange(std::vector input, ChargeRangeCheck& obj)

#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "ChargeRangeCheck.h"

TEST_CASE("Check readings for 3 current samples") 
{
  ChargeRangeCheck obj;
  obj.getRange({1,1,2});
  REQUIRE(obj.v_rangeCount.second == 3);
}

//TestgetRange(std::vector input, ChargeRangeCheck& obj)

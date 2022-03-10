#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "ChargeRangeCheck.h"

TEST_CASE("Check readings for 3 current samples") 
{
  ChargeRangeCheck obj;
  obj.getRange({1,1,2});
  for (RangeCount::iterator itr = obj.v_rangeCount.begin(); itr != obj.v_rangeCount.end(); itr++)
  {
     REQUIRE((*itr).second == 3);
  }
}

//TestgetRange(std::vector input, ChargeRangeCheck& obj)

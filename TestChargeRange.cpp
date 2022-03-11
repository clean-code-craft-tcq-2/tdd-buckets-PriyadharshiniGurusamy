#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "ChargeRangeCheck.h"

TEST_CASE("Check readings for 3 current samples") 
{
  ChargeRangeCheck obj;
  obj.getRangeandReadings({1,1,2});
  
  AssetRangeandReadings (obj.v_rangeCount[0], 1,2,3);
}

AssetRangeandReadings(RangeCountPair pair, int minVal, int maxVal, int readings)
{
  REQUIRE(pair.second == readings);
  REQUIRE(pair.first.first == minVal);
  REQUIRE(pair.first.second == maxVal);  
}

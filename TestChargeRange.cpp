#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "ChargeRangeCheck.h"


void AssetRangeandReadings(RangeCountPair pair, int minVal, int maxVal, int readings)
{
  REQUIRE(pair.second == readings);
  REQUIRE(pair.first.first == minVal);
  REQUIRE(pair.first.second == maxVal);  
}

TEST_CASE("Check readings for 3 consecutive current samples") 
{
  ChargeRangeCheck obj;
  obj.getRangeandReadings({1,1,2});
  
  AssetRangeandReadings (obj.v_rangeCount[0], 1,2,3);
}

TEST_CASE("Check readings for 5 inconsecutive current samples") 
{
  ChargeRangeCheck obj;
  obj.getRangeandReadings({1,1,2,4,5});
  
  AssetRangeandReadings (obj.v_rangeCount[0], 1,2,3);
  AssetRangeandReadings (obj.v_rangeCount[1], 4,5,2);
}


TEST_CASE("Check readings for 7 inconsecutive current samples") 
{
  ChargeRangeCheck obj;
  obj.getRangeandReadings({2,4,5,4,9,7,5});
  
  AssetRangeandReadings (obj.v_rangeCount[0], 2,2,1);
  AssetRangeandReadings (obj.v_rangeCount[1], 4,5,4);
  AssetRangeandReadings (obj.v_rangeCount[2], 7,7,1);
  AssetRangeandReadings (obj.v_rangeCount[3], 9,9,1);
}

#include "ChargeRangeCheck.h"
#include <algorithm>
#include <cstdio>

void ChargeRangeCheck::getRangeandReadings(std::vector<int> inputValues)
{
    sort (inputValues.begin(), inputValues.end());
    for(int count = 0; inputValues.size() > count;)
    {
        count = count + getCountOfRange(inputValues, inputValues[count]);
    }
    printRangeandReadings();
}

int ChargeRangeCheck::getCountOfRange(std::vector<int> inputValues, int rangeMinValue )
{
    int totalcount, count = 0;
    int value  = rangeMinValue;
    while ((count = std::count(inputValues.begin(), inputValues.end(),value )))
    {
        totalcount = totalcount + count;
        value++;
    }
    Range newRange(rangeMinValue, value-1);
    v_rangeCount.push_back(std::make_pair(newRange, totalcount));    
    return totalcount;
}

void ChargeRangeCheck::printRangeandReadings()
{
    printf("Range   , Readings\n");
    for (RangeCount::iterator itr = v_rangeCount.begin(); itr != v_rangeCount.end(); itr++)
    {
        printf("%d - %d ,    %d\n",(*itr).first.first, (*itr).first.second, (*itr).second);
    }    
}

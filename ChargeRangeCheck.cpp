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
    int totalcount = 0;
    Range newRange;
    newRange.first = rangeMinValue;
    int value  = rangeMinValue;
    for(; ;)
    {
        int count = std::count(inputValues.begin(), inputValues.end(),value );
        if(count > 0)
        {
          totalcount = totalcount + count;
          value++;
        }
        else if ((count == 0) || (value > inputValues.back())
        {
            newRange.second = value-1;
            break;
        }
    }
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

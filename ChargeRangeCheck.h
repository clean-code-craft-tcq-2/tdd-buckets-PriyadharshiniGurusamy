#ifndef CHARGERANGECHECK_H
#define CHARGERANGECHECK_H

#include "ChargeRangeCheckDefines.h"


class ChargeRangeCheck
{
public:
  ChargeRangeCheck(){}
  ~ChargeRangeCheck(){}
  
  void getRangeandReadings(std::vector<int> inputValues);
  int getCountOfRange(std::vector<int> inputValues, int rangeMinValue );
  void printRangeandReadings();
  
  
  /* Variables */
  RangeCount v_rangeCount; 

};

#endif

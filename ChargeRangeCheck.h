#ifndef CHARGERANGECHECK_H
#define CHARGERANGECHECK_H

#include "ChargeRangeCheckDefines.h"


class ChargeRangeCheck
{
public:
  ChargeRangeCheck();
  ~ChargeRangeCheck();
  
  void getRange(std::vector<int> inputValues);
  int findRange(std::vector<int> inputValues, int rangeMinValue );
  void printRange();
  
  
  /* Variables */
  RangeCount v_rangeCount; 

};

#endif

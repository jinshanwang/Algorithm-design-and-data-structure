#ifndef ReduceMinimum_H
#define ReduceMinimum_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include "ReduceGeneric.h"
class ReduceMinimum : public ReduceGeneric {


public:
  ReduceMinimum (std::vector<int> input);
  int binaryOperator(int first_Num, int second_Num);
};
#endif

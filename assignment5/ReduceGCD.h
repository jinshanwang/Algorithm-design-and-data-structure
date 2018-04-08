#ifndef ReduceGCD_H
#define ReduceGCD_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include "ReduceGeneric.h"
class ReduceGCD :public ReduceGeneric {
 //define a greatest common denominator
int gcd;
public:
  ReduceGCD (std::vector<int> input);
  int binaryOperator(int first_Num, int second_Num);
};
#endif

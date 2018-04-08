#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <iostream>
#include <stdio.h>
#include <vector>
class ReduceGeneric {

private:
  virtual int binaryOperator(int first_Num, int second_Num)=0;
  //std::vector<int> return_my_vector;



public:
  ReduceGeneric(std::vector<int> input);
  std::vector<int> reduce(std::vector<int> input);
  int length;

};
#endif

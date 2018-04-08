#include <iostream>
#include <stdio.h>
#include <vector>
#include "ReduceGeneric.h"
using namespace std;
ReduceGeneric::ReduceGeneric(std::vector<int> input){
  length=input.size();
}
std::vector<int> ReduceGeneric::reduce(std::vector<int> input){
  if (input.size()==1) {
    return input;
  }
  int Num = binaryOperator(input[0],input[1]);
  input.push_back(Num);
  input.erase(input.begin());
  input.erase(input.begin());
  return reduce(input);
}

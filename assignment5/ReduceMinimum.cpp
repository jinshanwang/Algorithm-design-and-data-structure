#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include "ReduceMinimum.h"
using namespace std;
ReduceMinimum::ReduceMinimum(std::vector<int> input):ReduceGeneric(input){
  length=input.size();
}
int ReduceMinimum::binaryOperator(int first_Num, int second_Num){

if (first_Num<second_Num) {
  return first_Num;
}
  return second_Num;




}

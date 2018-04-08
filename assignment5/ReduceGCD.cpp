#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include "ReduceGCD.h"
using namespace std;
ReduceGCD::ReduceGCD(std::vector<int> input):ReduceGeneric(input){
  length=input.size();
}
int ReduceGCD::binaryOperator(int first_Num, int second_Num){
   //define a greatest common denominator

    //swap the two number if second_Num is large than the first_Num
    swap(first_Num,second_Num);
    //using forloop to calculate the gcd;
      for (int i = 1; i <=  second_Num; ++i) {
          if (first_Num % i == 0 && second_Num % i ==0) {
              gcd = i;
          }
      }
      return gcd;

}

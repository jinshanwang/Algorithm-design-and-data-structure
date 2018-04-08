#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterForTwoDigitPositive.h"
using namespace std;
FilterForTwoDigitPositive::FilterForTwoDigitPositive(std::vector<int> input):FilterGeneric(input){
  length = input.size();
}
bool FilterForTwoDigitPositive::g(int n){
  if (n>9 && n<100) {
    return true;
  }else{
    return false;
  }
}

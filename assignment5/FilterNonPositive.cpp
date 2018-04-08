#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterNonPositive.h"
using namespace std;
FilterNonPositive::FilterNonPositive(std::vector<int> input):FilterGeneric(input){
  length = input.size();
}
bool FilterNonPositive::g(int n){
  if (n<0) {
    return true;
  }else{
    return false;
  }
}

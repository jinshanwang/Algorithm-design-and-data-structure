#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include "MapAbsoluteValue.h"
using namespace std;
MapAbsoluteValue::MapAbsoluteValue(std::vector<int> input):MapGeneric(input){
  length=input.size();
}
int MapAbsoluteValue::f(int n){
  return abs(n);
}

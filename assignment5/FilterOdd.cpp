#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterOdd.h"
using namespace std;
FilterOdd::FilterOdd(std::vector<int> input):FilterGeneric(input){
length=input.size();
}
bool FilterOdd::g(int n){
  if (n<0) {
    n*=-1;
  }
  if (n%2==1) {
    return true;
  }
  else{
    return false;
  }
}

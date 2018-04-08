#include <iostream>
#include <stdio.h>
#include <vector>
#include "MapGeneric.h"
using namespace std;
MapGeneric::MapGeneric(std::vector<int> input){
  length=input.size();//the length is 20
}

std::vector<int> MapGeneric::map(std::vector<int>input){
  //base case
  //if the input is empty return the vector v
  if (input.empty()) {
    return v;
  }
  //else using the virtual function to get the result
  int b= f(input[0]);
  v.push_back(b);
  //delete the first element of the input
  input.erase(input.begin());
  //recursion
  return map(input);
}

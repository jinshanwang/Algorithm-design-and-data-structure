#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterGeneric.h"
using namespace std;


FilterGeneric::FilterGeneric(vector<int> input){
  length=input.size();//the length is 20
}

vector<int> FilterGeneric::filter(vector<int> input){
  //base case
  //if the input is empty return the vector v
  if (input.empty()) {
    return r;
  }
  //else using the virtual function to get the result
  bool b= g(input[0]);
  if (b==true) {
    r.push_back(input[0]);
  
  }

  //delete the first element of the input
  input.erase(input.begin());
  //recursion
  return filter(input);
}

#include <iostream>
#include <stdio.h>
#include <vector>
#include "MapTriple.h"
using namespace std;
MapTriple::MapTriple(std::vector<int> input):MapGeneric(input){
  length=input.size();
}
int MapTriple::f(int n){
  return 3*n;
}

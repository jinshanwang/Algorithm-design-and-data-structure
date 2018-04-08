#include <iostream>
#include <stdio.h>
#include <vector>
#include "MapSquare.h"
using namespace std;

MapSquare::MapSquare(std::vector<int> input):MapGeneric(input){
  length=input.size();
}
int MapSquare::f(int n){
  return n*n;
}

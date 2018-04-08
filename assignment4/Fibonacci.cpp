#include <iostream>
#include <stdio.h>
#include "Fibonacci.h"
using namespace std;

Fibonacci::Fibonacci (){

}
int Fibonacci::getFibonacci(int value){
  //if the value is 1 or 0;
  if (value<=1) {
      return value;
    }
   //recursion here
   //  Fn=F(n-1)+F(n-2)
  return getFibonacci(value-1)+getFibonacci(value-2);
}

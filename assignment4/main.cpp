#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
#include "Controller.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Controller Joseph;
  Joseph.setInput1();// call the reverseDigit()
  Joseph.setInput2();// call the reverseString()
  Joseph.setInput3();// call the Fibonacci
  Joseph.setInput4();// call the EfficientFibonacci
  return 0;
}

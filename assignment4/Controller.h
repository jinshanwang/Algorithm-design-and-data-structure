#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <iostream>
#include <stdio.h>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
class Controller {
private:
std::string value1; // original value like "123","234"
std::string value2; // original value like "sadas"
std::string value3_Fibonacci;// get the index of Fibonacci
std::string value4_EfficientFibonacci;// get the index of EfficientFibonacci

int reverse_digit;  //get int type of the string value1
int Fibonacci_index;//get the int type of the string value3_Fibonacci
int EfficientFibonacci_index;//get the int type of the string value4_EfficientFibonacci

int result1;        //the result of the value1
std::string result2;//the result of the value2
int result3;        //the result of the value3_Fibonacci
int result4;        //the result of the value4_EfficientFibonacci


public:
  Controller ();
  void setInput1();// call the reverseDigit()
  void setInput2();// call the reverseString()
  void setInput3();// call the Fibonacci
  void setInput4();// call the EfficientFibonacci

};
#endif

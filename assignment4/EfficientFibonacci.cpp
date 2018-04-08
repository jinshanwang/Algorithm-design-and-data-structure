#include <iostream>
#include <stdio.h>
#include "EfficientFibonacci.h"
using namespace std;

int EfficientFibonacci::count=2;
int EfficientFibonacci::num1=0;
int EfficientFibonacci::num2=1;
EfficientFibonacci::EfficientFibonacci(){


}
int EfficientFibonacci::getEfficientFibonacci(int value){
//if the value is 0 or 1
    if (value==0) {
        return value;
    }
    if (value==1) {
        return value;
    }
    else if (value==count) {
        return num2+num1;
  }
//assignment the value after the num2 and swap them
    int temp;
    temp=num2;
    num2=num1+num2;//  Fn=F(n-1)+F(n-2)
    num1=temp;
// recursion
    return getEfficientFibonacci(value-1);

}

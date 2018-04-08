#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
#include "Controller.h"
using namespace std;
Controller::Controller(){

}
void Controller::setInput1(){

  int number_of_digit=0;//it is a count
  cin >> value1;
  
  //get the length of the input
  int L1=value1.length();
  
  //check if it is a digit
  for (int i = 0; i <L1; i++) {
    if (value1[i]>='0' && value1[i]<='9') {
      number_of_digit++;
    }
    else{
      number_of_digit+=0;
    }
  }
  if (number_of_digit==L1) {
    
    //data type transformation
    std::stringstream ss;
    ss<<value1;
    ss>>reverse_digit;

    //initialize an object
    Reverse R;
    
    //get the result1 from the reversedigit function 
    result1=R.reverseDigit(reverse_digit);
    std::cout << result1 <<" ";
  }
  else{
    
    //error implementation
    std::cout << "ERROR" <<" ";
  }

}



void Controller::setInput2() {

  cin >> value2;
  Reverse S;
  result2=S.reverseString(value2);
  if (result2=="ERROR") {
    std::cout << "ERROR" << '\n';
  }else{
  cout << result2<<" ";
  }
}


void Controller::setInput3() {
  int number_of_digit=0;
  cin >>value3_Fibonacci ;

  //get the length of the input
  int L2=value3_Fibonacci.length();


  for (int i = 0; i <L2; i++) {
    if (value3_Fibonacci[i]>='0' && value3_Fibonacci[i]<='9') {
      number_of_digit++;
    }
    else{
      number_of_digit+=0;
    }
  }
  if (number_of_digit==L2) {
    std::stringstream ss;
    ss<<value3_Fibonacci;
    ss>>Fibonacci_index;

    Fibonacci F;
    result3=F.getFibonacci(Fibonacci_index);
    std::cout << result3 << " ";
  }

  else {
    cout << "ERROR" <<" ";
  }

}


void Controller::setInput4() {
  int number_of_digit=0;
  cin >>value4_EfficientFibonacci ;
  int L3=value4_EfficientFibonacci.length();
  for (int i = 0; i <L3; i++) {
    if (value4_EfficientFibonacci[i]>='0' && value4_EfficientFibonacci[i]<='9') {
      number_of_digit++;
    }
    else{
      number_of_digit+=0;
    }
  }
  if (number_of_digit==L3) {
    std::stringstream ss;
    ss<<value4_EfficientFibonacci;
    ss>>EfficientFibonacci_index;

    Fibonacci F;
    result3=F.getFibonacci(EfficientFibonacci_index);
    std::cout << result3 << " ";
  }

  else {
    cout << "ERROR" <<" ";
  }
}

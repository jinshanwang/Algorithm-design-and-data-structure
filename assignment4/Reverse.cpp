#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include "Reverse.h"
using namespace std;
int Reverse::index=0;
Reverse::Reverse(){

}

int Reverse::reverseDigit(int value){

  quotient=0;
  reminder=0;
  count=0;
  int V=0;

//if the value is less then 10 that means there is no Reverse.
  if(value<10) {
      return value;
  }
  //calculate the power of each reminder
  V=value;
  while (V>10) {
      V=V/10;
      count++;
  }

  quotient=value/10;
  reminder=value%10;
  //recursion
  return reminder*pow(10.0,count)+reverseDigit(quotient);
}

string Reverse::reverseString(string letters){
//calculate the length of the letters
  int len=letters.length();
//if for loop go to the midpoint
  if (index>(len-1)/2) {
      return letters;
  }
  //interchange the position of two characters
  swap(letters[index],letters[len-index-1]);
  index++;
  //recursion;
  return reverseString(letters);

}

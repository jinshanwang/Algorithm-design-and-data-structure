#include <iostream>
#include <string>
#include "computer.h"
using namespace std;
//  constructor for initialize the L
Computer::Computer (int length){
    L=length;
    name=" ";
}


//return the pointer to the main function
string *Computer::getInput_computer(){
  return computer_input;
}
string Computer::getName(){
  return name;
}

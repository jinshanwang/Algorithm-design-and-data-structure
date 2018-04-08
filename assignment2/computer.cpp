#include <iostream>
#include <string>
#include "computer.h"
using namespace std;
//  constructor for initialize the L
Computer::Computer (int length){
    L=length;
}
// we declare the virtual function here
void Computer::setInput_computer(){
  computer_input=new string[L];
  for (int i = 0; i <L; i++) {

    *(computer_input+i)="R";
    //std::cout << array1[i] << '\n';
  }
}
//return the pointer to the main function
string *Computer::getInput_computer(){
  return computer_input;
}

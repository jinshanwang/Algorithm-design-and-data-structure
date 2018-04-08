#include <iostream>
#include <string>
#include "Toolbox.h"
using namespace std;
//default constructor for initializing the length and name.
Toolbox::Toolbox (int length):Computer(length){
  L=length;
  name = "Toolbox";
}
//Toolbox always chooses Scissors.
void Toolbox::setInput_computer(){
  computer_input=new string[L];
  for (int i = 0; i <L; i++) {
    //S is equal to Scissors.
    *(computer_input+i)="S";

  }

}

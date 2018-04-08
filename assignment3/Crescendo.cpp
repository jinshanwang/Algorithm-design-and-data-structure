#include <iostream>
#include <string>
#include "Crescendo.h"
using namespace std;
//default constructor for initializing the length and name.
Crescendo::Crescendo (int length):Computer(length){
    L=length;
    name = "Crescendo";
}
//Crescendo moves in the following order: Paper, Scissors, Rock
void Crescendo::setInput_computer(){
    computer_input=new string[L];
    for (int i = 0; i <L; i++) {
      if (i%3==0) {
        // P is eqaul to Paper.
        *(computer_input+i)="P";
      }
      else if (i%3==1) {
        //S is equal to Scissors.
        *(computer_input+i)="S";
      }
      else if (i%3==2) {
        //R is eqaul to Rock.
        *(computer_input+i)="R";
      }
    }
  }

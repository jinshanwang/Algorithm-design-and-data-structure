#include <iostream>
#include <string>
#include "PaperDoll.h"
using namespace std;
//default constructor for initializing the length and name.
PaperDoll::PaperDoll(int length):Computer(length){
  L=length;
  name = "PaperDoll";
}
//Paper doll moves in the following order: Paper, Scissors, Scissors.
void PaperDoll::setInput_computer(){
  computer_input=new string[L];
  for (int i = 0; i <L; i++) {
    if (i%3==0) {
      //P is equal to Paper.
      *(computer_input+i)="P";
    }
    else if (i%3==1) {
      //S is equal to Scissors.
      *(computer_input+i)="S";
    }else if (i%3==2) {
      //S is equal to Scissors.
      *(computer_input+i)="S";
    }
  }
}

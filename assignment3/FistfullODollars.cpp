#include <iostream>
#include "FistfullODollars.h"
#include <string>
using namespace std;
//default constructor for initializing the length and name.
FistfullODollars::FistfullODollars (int length):Computer(length){
      L=length;
      name = "FistfullODollars";
}
//FistfullODollars moves in the following order: Rock, Paper, Paper.
void FistfullODollars::setInput_computer(){
  computer_input=new string[L];
  for (int i = 0; i <L; i++) {
    if (i%3==0) {
      //R is equal to Rock.
      *(computer_input+i)="R";
    }
    else if (i%3==1) {
      //P is equal to Paper.
      *(computer_input+i)="P";
    }
    else if (i%3==2) {
      //P is equal to Paper.
      *(computer_input+i)="P";
    }


  }

}

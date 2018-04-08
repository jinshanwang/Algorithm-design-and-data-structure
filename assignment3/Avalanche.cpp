#include <iostream>
#include <string>
using namespace std;
#include "Avalanche.h"

//default constructor for initializing the length and name.
Avalanche::Avalanche(int length):Computer(length){
  L=length;
  name="Avalanche";
}
//Avalanche always chooses Rock.
void Avalanche::setInput_computer(){

      computer_input=new string[L];
      for (int i = 0; i <L; i++) {
        //R is equal to Rock.
        *(computer_input+i)="R";

      }

    }

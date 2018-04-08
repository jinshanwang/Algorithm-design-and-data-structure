#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include "RandomComputer.h"
using namespace std;
//default constructor for initializing the length and name.
RandomComputer::RandomComputer(int length):Computer(length){
      L=length;
      name = "RandomComputer";
}
//RandomComputer returns a random move.
void RandomComputer::setInput_computer(){

      string A[3]={"P","S","R"};
      computer_input=new string[L];
      for (int i = 0; i <L; i++) {
        // initialize a random_index using rand()
          int random_index= rand() % (3);
          *(computer_input+i)=A[random_index];

      }

    }

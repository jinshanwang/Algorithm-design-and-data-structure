#include <iostream>
#include <string>
#include "Bureaucrat.h"
using namespace std;
//default constructor for initializing the length and name.
Bureaucrat::Bureaucrat (int length):Computer(length){
  L=length;
  name="Bureaucrat";
}
//Bureaucrat always chooses Paper
void Bureaucrat::setInput_computer(){
  computer_input=new string[L];
  for (int i = 0; i <L; i++) {
    //P is equal to paper.
    *(computer_input+i)="P";

  }

}

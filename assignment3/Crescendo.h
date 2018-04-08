#ifndef Crescendo_H
#define Crescendo_H
#include "computer.h"
#include <string>

class Crescendo : public Computer{



public:
  //default constructor for initializing the length and name.
  Crescendo (int length);
  //Crescendo moves in the following order: Paper, Scissors, Rock.
  void setInput_computer();

};
#endif

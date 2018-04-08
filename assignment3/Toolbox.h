#ifndef Toolbox_H
#define Toolbox_H
#include <string>
#include "computer.h"

class Toolbox : public Computer{


public:
  //default constructor for initializing the length and name.
  Toolbox (int length);
  //S is equal to Scissors.
  void setInput_computer();

};
#endif

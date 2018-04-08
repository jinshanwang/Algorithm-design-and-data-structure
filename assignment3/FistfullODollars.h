#ifndef FistfullODollars_H
#define FistfullODollars_H
#include <string>
#include "computer.h"

class FistfullODollars:public Computer{


public:
  //default constructor for initializing the length and name.
  FistfullODollars (int length);
  //FistfullODollars moves in the following order: Rock, Paper, Paper.
  void setInput_computer();

};
#endif

#ifndef PaperDoll_H
#define PaperDoll_H

#include <string>
#include "computer.h"

class PaperDoll : public Computer {


public:
  //default constructor for initializing the length and name.
  PaperDoll (int length);
  //Paper doll moves in the following order: Paper, Scissors, Scissors.
  void setInput_computer();

};
#endif

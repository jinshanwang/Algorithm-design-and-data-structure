#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "computer.h"
#include <string>


class RandomComputer : public Computer {


public:
  //default constructor for initializing the length and name.
  RandomComputer(int length);
  //RandomComputer returns a random move.
  void setInput_computer();

};
#endif

#ifndef AVALANCHE_H
#define  AVALANCHE_H
#include "computer.h"
#include <string>
class Avalanche :public Computer {


public:
  //default constructor for initializing the length and the name.
Avalanche(int length);
//Avalanche always chooses Rock.
void setInput_computer();

};
#endif

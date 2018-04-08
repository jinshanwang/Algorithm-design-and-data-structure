#ifndef Bureaucrat_H
#define Bureaucrat_H

#include <string>
#include "computer.h"


class Bureaucrat : public Computer {


public:
  //default constructor for initializing the length and name.
  Bureaucrat (int length);
  //Bureaucrat always chooses Paper.
  void setInput_computer();

};
#endif

#ifndef REFEREE
#define REFEREE

#include <string>
#include "FistfullODollars.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "computer.h"

class Referee {
  private:
    //initialize the count for the length of the games
    int count;
    //declare a variable for marks
    int num;
  public:
    //default constructor for initializing the length
    Referee(int length);
    //return the marks
    int compare(std::string *H_input, std::string *C_input);
};
#endif

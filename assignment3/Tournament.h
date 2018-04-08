#ifndef Tournament_H
#define Tournament_H
#include <string>
#include "FistfullODollars.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "referee.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "computer.h"
#include <vector>

class Tournament {
private:
  int N;

//std::vector<Computer*> v;
public:
  Tournament ();
  std::vector<Computer*> isWinner(std::vector<Computer*> member,int number_of_player);


};
#endif

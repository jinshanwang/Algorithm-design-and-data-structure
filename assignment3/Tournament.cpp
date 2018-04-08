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
#include "Tournament.h"
#include <iostream>
#include <vector>
using namespace std;

Tournament::Tournament(){

}
vector<Computer*> Tournament::isWinner(vector<Computer*> member,int number_of_player)
{

std::vector<Computer*> v;
  N=number_of_player;
  int i=0;

  while (i<N) {
    string *A=member[i]->getInput_computer();
    string *B=member[i+1]->getInput_computer();
    Referee R(5);
    int num_of_win=R.compare(A,B);

      if (num_of_win==0) {
        Computer *a=member[i];
        v.push_back(a);

    }
    else if (num_of_win<=0) {
      Computer *b=member[i+1];
        v.push_back(b);
    }
    else if (num_of_win>=0) {
      Computer *c=member[i];
        v.push_back(c);
    }



    i=i+2;
  }
  int count=v.size();
  if (count==1) {
  //for (int i = 0; i < count; i++) {
    //std::cout << v[i]->getName()<< '\n';
    return v;
  }
  else{
    return isWinner(v,v.size());
  }

}

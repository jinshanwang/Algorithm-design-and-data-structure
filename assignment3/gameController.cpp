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
#include "gameController.h"
#include <iostream>
#include <vector>
using namespace std;
GameController::GameController(){

}
void GameController::winnerInTournament(){
  int number_of_player=8;

  vector<Computer*> playerObject;
  string *name = new string[number_of_player];

  for (int i = 0; i < number_of_player; i++) {
    cin >> *(name+i);
  }


  for (int i = 0; i < number_of_player; i++) {
    if (*(name+i)=="Avalanche") {
      Computer *A=new Avalanche(5);
      A->setInput_computer();
      playerObject.push_back(A);




    }else if (*(name+i)=="Bureaucrat") {
      Computer *B=new Bureaucrat(5);
      B->setInput_computer();
      playerObject.push_back(B);

    }else if (*(name+i)=="Crescendo") {
      Computer *C=new Crescendo(5);
      C->setInput_computer();
      playerObject.push_back(C);

    }else if (*(name+i)=="PaperDoll") {
     Computer *P=new PaperDoll(5);
      P->setInput_computer();
      playerObject.push_back(P);

    }else if (*(name+i)=="Toolbox") {
      Computer *T=new Toolbox(5);
      T->setInput_computer();
      playerObject.push_back(T);

    }else if (*(name+i)=="RandomComputer") {
      Computer *R=new RandomComputer(5);
      R->setInput_computer();
      playerObject.push_back(R);
    }else if (*(name+i)=="FistfullODollars") {
      Computer *F=new FistfullODollars(5);
      F->setInput_computer();
      playerObject.push_back(F);

    }
  }

Tournament tour;
std::vector<Computer*> v=tour.isWinner(playerObject,number_of_player);
int length=v.size();
for (int i = 0; i < length; i++) {
  std::cout << v[i]->getName() << '\n';
}
}

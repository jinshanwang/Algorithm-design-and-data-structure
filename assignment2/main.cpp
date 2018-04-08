#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#include "human.h"

#include "computer.h"
#include "referee.h"
int main(int argc, char const *argv[]) {
//declare a integer for the times of the game
int length;
cin >> length;
// initialize a human object called Joseph
//Player *Joseph= new Human(length);
Human Joseph(length);
//get the input here
Joseph.setInput_human();
//return the input
string *B= Joseph.getInput_human();

// computer show the choice of the game ramdonly
//Player *macbook= new Computer(length);
Computer Computer(length);
// we set the input as "R"
Computer.setInput_computer();
string *C= Computer.getInput_computer();
// referee start to check the answer
Referee judge(length);
judge.compare(B,C);



  return 0;
}

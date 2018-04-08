#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;
class Human{
private:
  int L;

  //initialize a pointer for the human_input

  string *human_input;
public:
  //constructor
  Human(int length);
  //polymorphism from parent class
  void setInput_human();
  string *getInput_human();
};
#endif

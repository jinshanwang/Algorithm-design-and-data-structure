#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
using namespace std;


class Computer {
private:
  int L;
  string *computer_input;

public:

  // default constructor
  Computer (int length);
  // we declare the virtual function here
  void setInput_computer();
  // return the value
  string *getInput_computer();

};
#endif

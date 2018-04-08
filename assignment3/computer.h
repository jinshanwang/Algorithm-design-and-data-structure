#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include <vector>


class Computer {
protected:

  int L;
  std::string *computer_input;
  std::string name;
public:

  // default constructor
  Computer(int length);
  // we declare the virtual function here
  virtual void setInput_computer()=0;
  // return the value
  std::string *getInput_computer();
  std::string getName();

};
#endif

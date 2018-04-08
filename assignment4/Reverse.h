#ifndef Reverse_H
#define Reverse_H
#include <iostream>
#include <stdio.h>
#include <string>


class Reverse {
private:
  int quotient;
  int reminder;
  int count;
  int V;
  static int index;

public:
  Reverse();

  int reverseDigit(int value);
  std::string reverseString(std::string letters);

};
#endif

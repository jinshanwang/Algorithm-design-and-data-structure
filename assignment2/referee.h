#ifndef REFEREE
#define REFEREE

#include <string>
#include "human.h"
#include "computer.h"
using namespace std;
class Referee {
int count;

public:
  Referee(int length);
  void compare(string *H_input, string *C_input);

};
#endif

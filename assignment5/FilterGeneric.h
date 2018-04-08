#ifndef FilterGeneric_H
#define FilterGeneric_H
#include <stdio.h>
#include <vector>
#include <iostream>

class FilterGeneric {
private:
  std::vector<int> r;
  virtual bool g(int n)=0;
public:

  FilterGeneric(std::vector<int> input);
  std::vector<int> filter(std::vector<int> input);
protected:
  int length;
};
#endif

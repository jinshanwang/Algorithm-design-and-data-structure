#ifndef FilterOdd_H
#define FilterOdd_H
#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterGeneric.h"

class FilterOdd :public FilterGeneric{

public:
  FilterOdd(std::vector<int> input);
  bool g(int n);

};
#endif

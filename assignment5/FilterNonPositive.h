#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterGeneric.h"

class FilterNonPositive :public FilterGeneric{

public:
  FilterNonPositive(std::vector<int> input);
  bool g(int n);

};
#endif

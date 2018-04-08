#ifndef FilterForTwoDigitPositive_H
#define FilterForTwoDigitPositive_H
#include <stdio.h>
#include <vector>
#include <iostream>
#include "FilterGeneric.h"

class FilterForTwoDigitPositive :public FilterGeneric{

public:
  FilterForTwoDigitPositive(std::vector<int> input);
  bool g(int n);

    
};
#endif

#ifndef MapAbsoluteValue_H
#define MapAbsoluteValue_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include "MapGeneric.h"

class MapAbsoluteValue : public MapGeneric{
public:
  MapAbsoluteValue (std::vector<int> input);
  int f(int n);
};
#endif

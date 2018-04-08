#ifndef MapSquare_H
#define MapSquare_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include "MapGeneric.h"

class MapSquare : public MapGeneric{
public:
  MapSquare (std::vector<int> input);
  int f(int n);
};
#endif

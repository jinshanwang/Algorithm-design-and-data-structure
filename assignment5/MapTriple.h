#ifndef MapTriple_H
#define MapTriple_H
#include <iostream>
#include <stdio.h>
#include <vector>
#include "MapGeneric.h"
class MapTriple:public MapGeneric {
public:
MapTriple(std::vector<int> input);
int f(int n);

};
#endif

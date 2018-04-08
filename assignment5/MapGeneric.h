#ifndef MapGeneric_H
#define MapGeneric_H
#include <iostream>
#include <stdio.h>
#include <vector>
class MapGeneric {
private:

  virtual int f(int n)=0;
  std::vector<int> v;
public:


  MapGeneric(std::vector<int> input);
  std::vector<int> map(std::vector<int> input);
protected:
  int length;

};
#endif

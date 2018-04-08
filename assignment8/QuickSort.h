#ifndef QuickSort_H
#define QuickSort_H
#include <iostream>
#include <string>
#include "Sort.h"

class QuickSort:public Sort {
private:
  
  int divideAndConquer(int* listArray,int start, int end);

public:

  void sortingProcess(int* listArray, int start, int end);

};
#endif

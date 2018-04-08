#ifndef RecursiveBinarySearch_H
#define RecursiveBinarySearch_H
#include <iostream>
#include <stdio.h>

class RecursiveBinarySearch {
  private:
    int middle_value;
    bool findTheSix;

  public:
    RecursiveBinarySearch();
    void RecursiveBinarySearch_list(int *listArray, int target,int start, int end);
    bool getTheResult();
};
#endif

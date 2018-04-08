#ifndef Sort_H
#define Sort_H

#include <iostream>
#include <string>
#include <stdio.h>

class Sort {
  protected:
    int length;
  public:
    virtual void sortingProcess(int* listArray,int start, int end)=0;
    void setLength(int size);

};
#endif

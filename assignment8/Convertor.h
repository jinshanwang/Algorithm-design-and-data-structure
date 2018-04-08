#ifndef Convertor_H
#define Convertor_H

#include <iostream>
#include <string>
#include <vector>

class Convertor {
private:

int sizeOfList;     //the size of the real input_value

int *listArray;       // a pointer of int for listArray

public:
  Convertor (std::vector<int> input_value,int length);//convert the string and cut the string into single piece of integer
  int* getListArray();   //return the listArray
  int getSizeOfListArray();  //return the length of listArray
};
#endif

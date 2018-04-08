#include <iostream>
#include <stdio.h>
#include "Convertor.h"
#include <string>
#include <vector>
#include <sstream>
using namespace std;


Convertor::Convertor (std::vector<int> input_value,int length)
{
	// obtain the size of the list
	sizeOfList=length;
	// initialize a pointer with size of length;
	listArray = new int[length];
	// convert the vector to the listArray
	for (int i = 0; i < length; ++i)
	{
		listArray[i]=input_value[i];
	}

}
int* Convertor::getListArray()
{
	// return the pointer of listArray
  return listArray;
}
int Convertor::getSizeOfListArray(){
	// return the size of the listArray
	return sizeOfList;

}

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include "Sort.h"
#include "BubbleSort.h"
using namespace std;

void BubbleSort::sortingProcess(int* listArray,int start, int end) {

  for (int i = 0; i <end; i++) {

    for (int j = 1; j < end; j++) {
      if (listArray[j-1]>listArray[j]) {  // if the last element is lager than the element we need to swap them

        // swap implementation
        int tmp=listArray[j-1];
        listArray[j-1]=listArray[j];
        listArray[j]=tmp;
      }
    }
  }

}

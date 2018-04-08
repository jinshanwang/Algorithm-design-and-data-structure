#include <iostream>
#include <stdio.h>
#include <algorithm>
#include "QuickSort.h"
#include "Sort.h"
using namespace std;


int QuickSort::divideAndConquer(int* listArray,int start, int end)
{
  int position =start-1;
  int pivot_index=start+1;          //always choose the second element index
  int pivot=listArray[pivot_index]; //as a requirement we need to select the second element in the array as the pivot
  if (length>=2) {



    for (int i = start; i < length; i++) {

        if (listArray[i]<pivot) {
          //把value赋值到指定的位置
          position++;
          // if (position!=i) {
            if (position==pivot_index) {
              // 如果两数相邻， 则直接调换位置
              if (i-position==1) {
                swap(listArray[i],listArray[position]);
              }
              //否则分两步进行
              else{
                //第一步
                swap(listArray[position+1],listArray[position]);
                //第二步
                swap(listArray[position],listArray[i]);

              }
              pivot_index++;
            }
            else{
              swap(listArray[position],listArray[i]);

            }
          // }
        }

    }

}

    // move to next position and place the pivot to right location
    position+=1;
    // 以防最小值为基准值
    swap(listArray[position],listArray[pivot_index]);
    return position;
}

void QuickSort::sortingProcess(int* listArray, int start, int end)
{
  if (start<end) {
    int wall=divideAndConquer(listArray,start,end);
    sortingProcess(listArray,start,wall-1);
    sortingProcess(listArray,wall+1,end);
  }
}

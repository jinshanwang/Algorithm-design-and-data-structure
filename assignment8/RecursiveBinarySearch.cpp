#include <iostream>
#include <stdio.h>
#include "RecursiveBinarySearch.h"
using namespace std;
RecursiveBinarySearch::RecursiveBinarySearch()
{
  findTheSix=false;
}
void RecursiveBinarySearch::RecursiveBinarySearch_list(int *listArray, int target, int start, int end)
{
  // get the middle_value of the index
  middle_value=(start+end)/2;

  //To make sure the implementation is functional the start value must smaller than the end
  if (start<=end) {


  // if we find the element the variable findTheSix is assigned to true
      if (listArray[middle_value]==target) {
          findTheSix = true;
        }


  // recursion if the target is larger than the middle_value element then we need to search the number between teh middle_value and end
      else if (listArray[middle_value]>target) {
          end=middle_value-1;
          RecursiveBinarySearch_list(listArray,target,start,end);
        }
  // recursion if the target is less than the middle_value element then we need to search the number between teh middle_value and start
      else if (listArray[middle_value]<target) {
          start=middle_value+1;
          RecursiveBinarySearch_list(listArray,target,start,end);
        }

    }

}
// return the boolean findTheSix
bool RecursiveBinarySearch::getTheResult()
{
  return findTheSix;
}

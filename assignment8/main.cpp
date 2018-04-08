#include <iostream>
#include <string>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "Convertor.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main(int argc, char const *argv[]) {
  //initalize a sorting method
  string sortingtype;
  //initalize an input_value
  // string input_value;
  int input;
  std::vector<int> myInputVector;
  std::cin >> sortingtype;

  while(cin>>input){
    myInputVector.push_back(input);
    if (getchar()=='\n')
    {
      break;
    }
  }

  //get the input length
  int length=myInputVector.size();
  // initalize an object to convert the input and cut them into single value;
  Convertor convertor(myInputVector,length);
  //  store the listArray into the pointer
  int *intArr=convertor.getListArray();
  // get the size of the listArray
  int lengthOfIntArr=convertor.getSizeOfListArray();


// when it comes to B it will be the bobbule sortingProcess
  if (sortingtype=="B") {
  Sort *sort=new BubbleSort();
  sort->sortingProcess(intArr,0,lengthOfIntArr);


 }
 //  when it comes to Q it will be the QuickSort sortingProcess
 else if (sortingtype=="Q") {
   Sort *sort=new QuickSort();
   sort->setLength(lengthOfIntArr);
   sort->sortingProcess(intArr,0,lengthOfIntArr-1);

}
// using RecursiveBinarySearch to find the six->the target number
  RecursiveBinarySearch R;
  R.RecursiveBinarySearch_list(intArr,6,0,lengthOfIntArr-1);
  bool getSix=R.getTheResult();
  if (getSix==true) {
    std::cout << "true" << " ";
  }else{
    std::cout << "false" << " ";
  }


  for (int i = 0; i < lengthOfIntArr; i++) {
      std::cout << *(intArr+i) << " ";
 }
  cout  << endl;


  return 0;
}

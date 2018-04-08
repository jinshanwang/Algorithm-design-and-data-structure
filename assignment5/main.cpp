#include "Controller.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
      //start the program
      Controller C;
      //input implementation
      C.setInput();
      //return the input;
      vector<int> input =C.getInput();

      //f(x)=3*x, this is the first step of the program;
      vector<int> result1=C.triple_Num(input);


      //absolute value
      //the second step of the program
      vector<int> result3=C.absolute_Num(result1);


      //odd Number
      //the third step of the program
      vector<int> result4=C.odd_Num(result3);

      //print out the result;
      if (result4.empty()) {
            //if the result4 is empty
            std::cout << "sorry, we have no more number! try again later" << '\n';
      }else{
            //get the TwoDigitPositive_Num
            vector<int> result6= C.TwoDigitPositive_Num(result4);

            if (result6.empty()) {
                  //if the result6 is empty
                std::cout << "sorry, we have no more number! try again later" << '\n';
            }else{
                  //get the Minimum_Num
                  vector<int> result7 =C.Minimum_Num(result6);
                  //print the result
                  C.print_num(result7);

                  //get the gcd
                  vector<int> result8 = C.GCD_Num(result6);
                  //print the result
                  C.print_num(result8);
            }
      }
  return 0;
}

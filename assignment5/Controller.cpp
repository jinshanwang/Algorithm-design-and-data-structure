#include <iostream>
#include <stdio.h>
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "Controller.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <vector>
#include <string>
#include <sstream>
using namespace std;
//initialize the value
//input the list of the number
void Controller::setInput(){
  // using for loop to set input
  for (int i = 0; i < 20; i++) {
      //initialize a num for testing
      int test_num;
      //initialize an array;
      string array;
      //set input in a string type;
      cin >> array;
      //get the length of the single array
      int count=array.length();

      for (int j = 0; j < count; j++) {
            if (!isdigit(array[j]) && array[j]!='-') {
              array.erase(array.begin()+j);  //delete the illegal character except the number and '-'
            }
        }

        // data transformation from string to integer
        std::stringstream ss;
        ss<<array;
        ss>>test_num;
        //push_back the test num into the vector
        input.push_back(test_num);


    }
}

//return the number
vector<int> Controller::getInput(){
    return input;
}

//return the 3*x
vector<int> Controller::triple_Num(vector<int> input1){
    MapGeneric *Triple= new MapTriple(input1);
    result1=Triple->map(input1);
    return result1;
}

//g(x)=x^2
vector<int> Controller::square_Num(vector<int> input2){
    MapGeneric *Square= new MapSquare(input2);
    result2=Square->map(input2);
    return result2;
}

//h(n)=abs(n)
vector<int> Controller::absolute_Num(vector<int> input3){
    MapGeneric *Absolute= new MapAbsoluteValue(input3);
    result3=Absolute->map(input3);
    return result3;
}

//n%2==1
vector<int> Controller::odd_Num(vector<int> input4){
    FilterGeneric *Odd=new FilterOdd(input4);
    result4=Odd->filter(input4);
    return result4;
}

// if number is less than 0,return the negative number.
vector<int> Controller::NonPositiveNum(std::vector<int> input5){

    //initialize an pointer of the filterGeneric
    FilterGeneric *NonPositive=new FilterNonPositive(input5);

    // call the filter(vector<int>) function
    result5=NonPositive->filter(input5);
    //return the result(the non_positive_num)
    return result5;
}

//the number is between 9~100(exclusively)
vector<int> Controller::TwoDigitPositive_Num(vector<int> input6){//the number is between 9~100(exclusively)

    FilterGeneric *TwoDigitPositive=new FilterForTwoDigitPositive(input6);
    result6=TwoDigitPositive->filter(input6);
    return result6;

}

// Minimum_Num
vector<int> Controller::Minimum_Num(vector<int> input7){
    ReduceGeneric *MIN=new ReduceMinimum(input7);
    result7=MIN->reduce(input7);
    return result7;
}

// the greatest common denominator
vector<int> Controller::GCD_Num(vector<int> input8){
    ReduceGeneric *GCD=new ReduceGCD(input8);
    result8 =GCD->reduce(input8);
    return result8;
}

//print the result
void Controller::print_num(vector<int> result){

  for (std::vector<int>::iterator i = result.begin(); i != result.end(); ++i)
  {
        cout<<*i<<" ";
  }

}

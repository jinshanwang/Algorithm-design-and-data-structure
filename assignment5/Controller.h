#ifndef Controller_H
#define Controller_H

#include <iostream>
#include <stdio.h>
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapGeneric.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include "MapAbsoluteValue.h"
#include <vector>

class Controller {
private:
            std::vector<int> input;
            std::vector<int> result1;
            std::vector<int> result2;
            std::vector<int> result3;
            std::vector<int> result4;
            std::vector<int> result5;
            std::vector<int> result6;
            std::vector<int> result7;
            std::vector<int> result8;

public:

            void setInput();//initialize the number
            std::vector<int> getInput();//return the number
            std::vector<int> triple_Num(std::vector<int> input1);//f(x)=3*x
            std::vector<int> square_Num(std::vector<int> input2);//g(x)=x^2
            std::vector<int> absolute_Num(std::vector<int> input3);//h(n)=abs(n)
            std::vector<int> odd_Num(std::vector<int> input4);      //n%2==1
            std::vector<int> NonPositiveNum(std::vector<int> input5);// if number is less than 0;
            std::vector<int> TwoDigitPositive_Num(std::vector<int> input6);//the number is between 9~100(exclusively)
            std::vector<int> Minimum_Num(std::vector<int> input7);// Minimum_Num
            std::vector<int> GCD_Num(std::vector<int> input8);// the greatest common denominator
            //print the result
            //we are not going to use all of them
            void print_num(std::vector<int> result);
};

#endif

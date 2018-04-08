#include <iostream>
#include <string>

#include "human.h"
#include "computer.h"
#include "referee.h"
using namespace std;
//constructor for initializing the L
Referee::Referee(int length){
  count=length;

}
//return the marks
int Referee::compare(string *H_input,string *C_input){
  num  =0;
  for (int i = 0; i < count; i++) {
      //for the same input
      if (*(H_input+i)==*(C_input+i)) {
        num=num+0;

      }
      //get 1 score if player[i] win
      else if((*(H_input+i)=="S") && (*(C_input+i)=="P")){
        num=num+1;

      }
      //get 1 score if player[i] win
      else if ((*(H_input+i)=="P") && (*(C_input+i)=="R")) {
        num=num+1;

      }
      //get 1 score if player[i] win
      else if ((*(H_input+i)=="R") && (*(C_input+i)=="S")) {
        num=num+1;

      }
      //lose 1 scorefor player[i]  lose
      else {
        num=num-1;

      }
}
  //return the total marks
  return num;
}

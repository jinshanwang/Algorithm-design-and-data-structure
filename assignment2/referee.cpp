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
//judgement
void Referee::compare(string *H_input,string *C_input){
for (int i = 0; i < count; i++) {
      //for the same input
      if (*(H_input+i)==*(C_input+i)) {
        cout<<'T'<<" ";
      //the situation that people can win
      }else if((*(H_input+i)=="S") && (*(C_input+i)=="P")){
        cout << 'W' <<" ";
      }else if ((*(H_input+i)=="P") && (*(C_input+i)=="R")) {
        cout << 'W' <<" ";
      }
      else if ((*(H_input+i)=="R") && (*(C_input+i)=="S")) {
        cout << 'W' <<" ";
      }
      //the sistuation that people will lose
      else {
        cout << 'L' <<" ";
      }
}

}

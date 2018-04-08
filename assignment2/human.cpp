#include <iostream>
#include "human.h"
#include <string>
using namespace std;
//constructor
Human::Human(int length){
    //assigned length to L
    L=length;
}
void Human::setInput_human(){
  //dynamically new L space for human_input
  human_input= new string[L];

  for (int i = 0; i < L; i++) {
        cin >> *(human_input+i);
  }
}
//return the pointer to the main function
string *Human::getInput_human(){
  return human_input;
}

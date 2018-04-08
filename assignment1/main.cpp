#include <iostream>
#include <string>
#include "Palindrome.h"
using namespace std;

int main(int argc, char const *argv[]) {


  Palindrome A;  //--------------create an object
  A.removeNonLetters();// -------call the removeNonLetters function
  A.lowerCase();// --------------transformation from upperCase to lowerCase
  bool output=A.isPalindrome();//initialize a bool type variable and assign the value from the isPalindrome() function to it
  ////////////////////////////////////////////////////////
  if (output==true) {    // -----judge the array that if it is Palindrome
    cout << "Yes" <<endl;
  }
  else{
    cout<< "No" <<endl;
  }

  return 0;
}

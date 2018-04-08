#include <iostream>
#include "Palindrome.h"
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;


Palindrome::Palindrome ()//---------------------------this is a default constructor to initialize the input
{
    //Sample-data="Race fast, safe car.";
    //Sample-data="ADDS is fun ";
    //Sample-data="Bo1b";
    getline(cin,data);// -----------------------------initialize the input using cin
    length=data.length();// --------------------------get access to the length of the string
    count=0;// ---------------------------------------initialize the count for the following function that calculate the lengh of the letters
}

// ---------------------------------------------------this function is to find out the items which is not alpha and delete it to get a new data array
void Palindrome::removeNonLetters(){

      for (int i = 0; i < length; i++) {
        if (isalpha(data[i])) {           // ---------using if statement to test if it is alpha.
          letters[count]=data[i];         // ---------allocate the elements to a new string
          //cout << letters[count] <<endl; //---------test the functionality by using the output
          count++;
        }
      }
}

// ---------------------------------------------------this is function for transformation from uppercase to lowerCase
void Palindrome::lowerCase(){
for (int i = 0; i < count; i++) {
  if (isupper(letters[i])) {
    letters[i]=tolower(letters[i]); // ---------------assign the lowerCase of the elements to the original elements
  }
    //cout << letters[i] <<endl;
}
}


// ---------------------------------------------------boolean function return T or F back to the main function
bool Palindrome::isPalindrome(){
  int num=0;
  for (size_t i = 0; i < count/2; i++) {

    if (letters[i]!=letters[count-i-1]) {
      num++;                        // ---------------calculate the number of which is not Palindrome
      }
    }
    if (num==0) {
      return true;                 // ----------------return true if it is Palindrome
    }
    else{
      return false;                // ----------------otherwise return false
    }
}

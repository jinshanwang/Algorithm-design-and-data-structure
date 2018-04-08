#ifndef PALINDROME_H
#define PALINDROME_H
#include <iostream>
#include <string>
#include <cctype>


////////////////////////////////////////////////////////////////////////////////////////
class Palindrome {
private:
  string data; // -------------------------initialize a data array
  int length;  // -------------------------the size of the array
  int count;   // -------------------------calculate how many characters
  string letters; // ----------------------this is the array after removeNonLetters


/////////////////////////////////////////////////////////////////////////////////////////
public:
  Palindrome (); // -----------------------default constructor
  void removeNonLetters();// --------------this is the function for remove those non-alphabetical letters
  void lowerCase();// ---------------------transform the capital letters to lowerCase
  bool isPalindrome();// ------------------judge if the array is Palindrome or not
/////////////////////////////////////////////////////////////////////////////////////////
};
#endif

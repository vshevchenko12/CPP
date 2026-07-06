#include <iostream>
#include <string>
using namespace std;


int main() {
  auto myNum = 15;               // integer (whole number)
  auto myFloatNum = 5.99;     // floating point number
  auto myDoubleNum = 9.98;   // double floating point number
  auto myLetter = 'D';          // character
  auto myBoolean = true;        // boolean
  auto myString = string("Hello");  // string

  cout << "Integer: " << myNum << endl;
  cout << "Float: " << myFloatNum << endl;
  cout << "Double: " << myDoubleNum << endl;
  cout << "Character: " << myLetter << endl;
  cout << "Boolean: " << myBoolean << endl;
  cout << "String: " << myString << endl;

  return 0;
}
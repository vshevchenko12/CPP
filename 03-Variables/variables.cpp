#include <iostream>
using namespace std;


int main() {
  int myNum = 15;               // integer (whole number), 2 or 4 bytes depending on the system
  float myFloatNum = 5.99;     // floating point number, 6-7 decimal digits, 4 bytes
  double myDoubleNum = 9.98;   // double floating point number, 15-16 decimal digits, 8 bytes
  char myLetter = 'D';          // character, 1 byte, ASCII value of 'D' is 68, 7 bits, https://www.w3schools.com/charsets/ref_html_ascii.asp
  bool myBoolean = true;        // boolean, 1 byte
  string myText = "Hello";      // string, a sequence of characters, 1 byte per character, have to use #include <string> to use string type

  cout << "Integer: " << myNum << endl;
  cout << "Float: " << myFloatNum << endl;
  cout << "Double: " << myDoubleNum << endl;
  cout << "Character: " << myLetter << endl;
  cout << "Boolean: " << myBoolean << endl;
  cout << "String: " << myText << endl;

  return 0;
}
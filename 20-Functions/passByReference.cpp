#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

void changeValue(int &num) {
  num = 50;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void modifyStr(string &str) {
  str += " World!";
}


int main() {
  int value = 10;
  changeValue(value);  // Call the function and change the value to 50
  cout << value;  // Outputs 50 (the value has changed)


  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";  // Outputs 1020 (the values have not changed)

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";  // Outputs 2010 (the values have been swapped)

  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;  // Outputs "Hello World!" (the string has been modified)

  return 0;
}
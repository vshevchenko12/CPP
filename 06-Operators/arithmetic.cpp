#include <iostream>
using namespace std;


int main() {
  int num1 = 10;               // integer (whole number)
  int num2 = 5;                // integer (whole number)

  cout << "Addition: " << num1 + num2 << endl;          // addition
  cout << "Subtraction: " << num1 - num2 << endl;       // subtraction
  cout << "Multiplication: " << num1 * num2 << endl;    // multiplication
  cout << "Division: " << num1 / num2 << endl;          // division
  cout << "Modulus: " << num1 % num2 << endl;           // modulus (remainder)

  int z = 5;
  ++z;               // increment operator, increases the value of z by 1
  cout << z << "\n"; // 6
  --z;               // decrement operator, decreases the value of z by 1
  cout << z << "\n"; // 5

  return 0;
}
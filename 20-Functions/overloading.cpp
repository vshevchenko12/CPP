#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

// Function overloading allows multiple functions to have the same name, as long as their parameters are different in type or number:

/*
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
*/

// WITHOUT FUNCTION OVERLOADING

/*
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";  // Output: Int: 13
  cout << "Double: " << myNum2;  // Output: Double: 10.56
  return 0;
}

Problem: We had to create two different function names for the same logic.
*/

// WITH FUNCTION OVERLOADING
/*
Instead of defining two functions that should do the same thing, it is better to overload one.
In the example below, we overload the plusFunc function to work for both int and double:
*/
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";  // Output: Int: 13
  cout << "Double: " << myNum2;  // Output: Double: 10.56
  return 0;
}
// Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.


// FUNCTION OVERLOADING BY NUMBER OF PARAMETERS
/*
int plusFunc(int x, int y) {
  return x + y;
}

int plusFunc(int x, int y, int z) {
  return x + y + z;
}

int main() {
  int result1 = plusFunc(3, 7);
  int result2 = plusFunc(1, 2, 3);

  cout << "Sum of 2 numbers: " << result1 << "\n";  // Output: Sum of 2 numbers: 10
  cout << "Sum of 3 numbers: " << result2;  // Output: Sum of 3 numbers: 6
  return 0;
}
*/
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

//Global variables are available from within any scope, global and local

// Global variable x
int x = 5;

void myFunction() {
  cout << ++x << "\n"; // Increment the value of global variable x by 1 and print it

  // Local variable with the same name as the global variable (x)
  int x = 22; // local variable cannot be used outside the function it belongs to
  cout << x << "\n"; // Refers to the local variable x
}

int main() {
  myFunction();

  cout << x; // Refers to the global variable x
  return 0;
}

/*
If you operate with the same variable name inside and outside of a function, C++ will treat them as two separate variables; One available in the global scope (outside the function) and one available in the local scope (inside the function):

However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.

In general, you should be careful with global variables, since they can be accessed and modified from any function

*/
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

  // Create a function
void myFunction() {                // The function is declared with the name myFunction
  cout << "I just got executed!";  // The function definition contains a single statement that outputs a message to the screen
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"


/*
However, it is possible to separate the declaration and the definition of the function - for code optimization.

You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
*/
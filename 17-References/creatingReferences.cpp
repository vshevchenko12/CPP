#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {

  // operator & is used to create a reference variable. A reference variable is an alias for another variable. It allows you to create a new name for an existing variable, so that you can use either name to refer to the same value in memory. When you create a reference variable, it must be initialized with an existing variable, and it cannot be changed to refer to a different variable later on. Reference variables are often used in function parameters to allow functions to modify the original value of a variable passed as an argument.
  string food = "Pizza"; // food variable
  string &meal = food;   // reference to food

  cout << food << "\n"; // Outputs Pizza
  cout << meal << "\n"; // Outputs Pizza

  meal = "Burger"; // changes both meal and food

  cout << food << "\n"; // Outputs Burger
  cout << meal << "\n"; // Outputs Burger

  // operator & is also used to get the memory address of a variable. The memory address is a unique identifier for a location in the computer's memory where a variable's value is stored. When you use the & operator before a variable name, it returns the memory address of that variable, which can be useful for debugging or for passing variables by reference to functions.
  int x = 10; // x variable
  cout << &x << "\n"; // Outputs the memory address of x

  return 0;
}
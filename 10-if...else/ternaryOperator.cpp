#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  // Ternary operator syntax: variable = (condition) ? expressionTrue : expressionFalse;
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result << endl;  // Output: Good evening.
  // cout << ((time < 18) ? "Good day." : "Good evening.") << endl;  // Output: Good evening.
  return 0;
}

// Nested ternary operator example:
// int time = 20;
// string result = (time < 10) ? "Good morning."
  // : (time < 20) ? "Good day."
  // : "Good evening.";
// cout << result << endl;
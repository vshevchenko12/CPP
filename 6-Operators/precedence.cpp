#include <iostream>
using namespace std;

int main() {
  int result = 10 + 5 * 2; // multiplication has higher precedence than addition
  cout << "Result: " << result << endl; // Output: Result: 20

  int result2 = (10 + 5) * 2; // parentheses change the order of operations
  cout << "Result2: " << result2 << endl; // Output: Result2: 30

  int result3 = 10 > 5 && 5 < 10; // comparison operators have higher precedence than logical AND
  cout << "Result3: " << result3 << endl; // Output: Result3: 1 (true)

  /*
  Here are some common operators in C++, from highest to lowest priority:

    () - Parentheses
    *, /, % - Multiplication, Division, Modulus
    +, - - Addition, Subtraction
    >, <, >=, <= - Comparison
    ==, != - Equality
    && - Logical AND
    || - Logical OR
    = - Assignment
  */
  return 0;
}
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
/*
When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. When k becomes 0, the function just returns 0. When running, the program follows these steps:

10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
Since the function does not call itself when k is 0, the program stops there and returns the result.
*/

void countdown(int n) {
  if (n > 0) {
    cout << n << " ";
    countdown(n - 1);
  }
} //  The function calls itself with n - 1 until n becomes 0


int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}  // Factorial means multiplying a number by every number below it, down to 1 (for example, the factorial of 5 is: 5 * 4 * 3 * 2 * 1 = 120)

int main() {
  int result = sum(10);
  cout << result;

  cout << "\n";
  countdown(5);

  cout << "\n";
  cout << "Factorial of 5 is " << factorial(5);
  return 0;
}
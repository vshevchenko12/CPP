#include <iostream>
using namespace std;

int main() {
  int num1 = 10;               // integer (whole number)
  int num2 = 5;                // integer (whole number)

  cout << "Logical AND: " << (num1 > 0 && num2 > 0) << endl;          // logical AND
  cout << "Logical OR: " << (num1 > 0 || num2 < 0) << endl;           // logical OR
  cout << "Logical NOT: " << !(num1 > 0) << endl;                     // logical NOT

  return 0;
}
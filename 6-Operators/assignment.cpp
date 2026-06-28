#include <iostream>
using namespace std;


int main() {
  int num1 = 10;               // integer (whole number)

  num1 += 5;                  // addition assignment operator, adds 5 to num1, equivalent to num1 = num1 + 5
  cout << "After addition assignment: " << num1 << endl; // 15

  num1 -= 3;                  // subtraction assignment operator, subtracts 3 from num1, equivalent to num1 = num1 - 3
  cout << "After subtraction assignment: " << num1 << endl; // 12

  num1 *= 2;                  // multiplication assignment operator, multiplies num1 by 2, equivalent to num1 = num1 * 2
  cout << "After multiplication assignment: " << num1 << endl; // 24

  num1 /= 4;                  // division assignment operator, divides num1 by 4, equivalent to num1 = num1 / 4
  cout << "After division assignment: " << num1 << endl; // 6

  num1 %= 5;                  // modulus assignment operator, assigns the remainder of num1 divided by 5 to num1, equivalent to num1 = num1 % 5
  cout << "After modulus assignment: " << num1 << endl; // 1

  num1 &= 3;                  // bitwise AND assignment operator, performs bitwise AND on num1 and 3 and assigns the result to num1, equivalent to num1 = num1 & 3
  cout << "After bitwise AND assignment: " << num1 << endl; // 1

  num1 |= 2;                  // bitwise OR assignment operator, performs bitwise OR on num1 and 2 and assigns the result to num1, equivalent to num1 = num1 | 2
  cout << "After bitwise OR assignment: " << num1 << endl; // 3

  num1 ^= 1;                  // bitwise XOR assignment operator, performs bitwise XOR on num1 and 1 and assigns the result to num1, equivalent to num1 = num1 ^ 1
  cout << "After bitwise XOR assignment: " << num1 << endl; // 2

  num1 <<= 1;                 // left shift assignment operator, shifts the bits of num1 to the left by 1 and assigns the result to num1, equivalent to num1 = num1 << 1
  cout << "After left shift assignment: " << num1 << endl; // 4

  num1 >>= 2;                 // right shift assignment operator, shifts the bits of num1 to the right by 2 and assigns the result to num1, equivalent to num1 = num1 >> 2
  cout << "After right shift assignment: " << num1 << endl; // 1

  return 0;
}
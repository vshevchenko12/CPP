#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  if (20 > 18) {
    cout << "20 is greater than 18" << endl;  // Output: 20 is greater than 18
  }

  int x = 20;
  int y = 18;

  if (x > y) {  // Using a boolean expression directly in the if statement
    cout << "x is greater than y";
  }

  bool isGreater = x > y;

  if (isGreater) {  // Using a boolean variable in the if statement
    cout << "x is greater than y";
  }
  return 0;
}
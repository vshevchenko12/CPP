#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  bool isTrue = true;
  bool isFalse = false;
  cout << isTrue << endl;   // Output: 1
  cout << isFalse << endl;  // Output: 0
  cout << (5 > 3) << endl;  // Output: 1
  cout << (5 < 3) << endl;  // Output: 0
  cout << (5 == 5) << endl;  // Output: 1
  cout << (5 != 3) << endl;  // Output: 1
  cout << boolalpha;  // Output: true or false instead of 1 or 0
  cout << (5 > 3) << endl;  // Output: true
  cout << (5 < 3) << endl;  // Output: false
  cout << (5 == 5) << endl;  // Output: true
  cout << (5 != 3) << endl;  // Output: true
  cout << noboolalpha;  // Output: 1 or 0 instead of true or false
  cout << (5 > 3) << endl;  // Output: 1
  cout << (5 < 3) << endl;  // Output: 0
  cout << (5 == 5) << endl;  // Output: 1
  cout << (5 != 3) << endl;  // Output: 1
  return 0;
}
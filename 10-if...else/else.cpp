#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int time = 20;
  bool isDaytime = time < 18;  // Using a boolean expression to determine if it's daytime
  if (isDaytime) {
    cout << "Good day." << endl;  // Output: Good day .
  } else {
    cout << "Good evening." << endl;  // Output: Good evening.
  }
  return 0;
}
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int time = 16;

bool isMorning = time < 12;  // Using a boolean expression to determine if it's morning
bool isDay = time < 18;  // Using a boolean expression to determine if it's day

if (isMorning) {
  cout << "Good morning." << endl;  // Output: Good morning.
} else if (isDay) {
  cout << "Good day." << endl;  // Output: Good day.
} else {
  cout << "Good evening." << endl;  // Output: Good evening.
}
  return 0;
}
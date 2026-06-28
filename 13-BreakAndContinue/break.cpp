#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;  // break statement will terminate the loop when i is equal to 4
    }
    cout << i << "\n";
  }
  return 0;
}  // Output: 0, 1, 2, 3

// with while loop
/*
int i = 0;
while (i < 10) {
  if (i == 4) {
    break;  // break statement will terminate the loop when i is equal to 4
  }
  cout << i << "\n";
  i++;
}
// Output: 0, 1, 2, 3
*/
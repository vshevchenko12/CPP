#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  for (int i = 1; i <= 2; i++) {
    cout << "Outer loop iteration: i = " << i << "\n";  // This is the outer loop that runs 2 times (i = 1 and i = 2)
    for (int j = 1; j <= 3; j++) {
      cout << "Inner loop iteration: j = " << j << "\n";  // This is the inner loop that runs 3 times for each iteration of the outer loop
      cout << "i = " << i << ", j = " << j << "\n";
    }
  }
  return 0;
}


//EXAMPLES:

/*
for (int i = 1; i <= 3; i++) {
  for (int j = 1; j <= 3; j++) {
    cout << i * j << " ";
  }
  cout << "\n";
}
This code snippet demonstrates a nested loop structure where the outer loop runs 3 times (i = 1, 2, 3) and for each iteration of the outer loop, the inner loop also runs 3 times (j = 1, 2, 3). The output will be a multiplication table for the numbers 1 to 3.
Output:
1 2 3
2 4 6
3 6 9
*/
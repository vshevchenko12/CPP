#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int sum = 0;
  int numbers[] = {1, 2, 3, 4, 5};
  for (int i : numbers) {  // for each loop () iterates through each element in the array
    sum += i;
  }
  cout << "Sum is " << sum;
  return 0;
}  // Output: Sum is 15

// Loop Through a String
/*
string word = "Hello";
for (char c : word) {
  cout << c << "\n";
}
// Output:
H
e
l
l
o
*/
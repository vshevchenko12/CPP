#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Fixed-size array
  int fixedArray[5] = {10, 20, 30, 40, 50}; // The compiler allocates memory for 5 integers
  cout << "Size of fixedArray: " << sizeof(fixedArray) << " bytes" << endl; // Outputs the size in bytes

  int numElements = sizeof(fixedArray) / sizeof(fixedArray[0]); // Calculate number of elements
  cout << "Number of elements in fixedArray: " << numElements << endl; // Outputs the number of elements in the fixed-size array

  for (int i = 0; i < numElements; i++) {
    cout << "Element at index " << i << ": " << fixedArray[i] << endl; // Outputs each element in the fixed-size array
  }



  // Dynamic array
  vector<int> dynamicArray = {10, 20, 30, 40, 50};
  cout << "Size of dynamicArray: " << sizeof(dynamicArray) << " bytes" << endl; // Outputs the size in bytes

  return 0;
}
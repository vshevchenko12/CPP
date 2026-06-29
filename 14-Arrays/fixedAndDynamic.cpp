#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  // Fixed-size array
  int fixedArray[5] = {10, 20, 30, 40, 50}; // The compiler allocates memory for 5 integers
  fixedArray[6] = 60; // This will cause undefined behavior since the index is out of bounds

  // Dynamic array
  vector<int> dynamicArray = {10, 20, 30, 40, 50};
  dynamicArray.push_back(60); // This is valid and will add 60 to the end of the dynamic array

  return 0;
}
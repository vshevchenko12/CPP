#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int* ptr = new int;  // dynamically allocate memory for an int
  *ptr = 35;           // assign value to the allocated memory
  cout << *ptr;        // output the value stored in the allocated memory
  delete ptr;          // free the allocated memory to avoid memory leaks
  return 0;
}
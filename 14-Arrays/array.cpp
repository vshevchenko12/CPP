#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50}; // Create an array of integers
  string myCars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; // Create an array of strings
  cout << myNumbers[0] << "\n"; // Outputs 10
  cout << myCars[0] << "\n"; // Outputs Volvo
  myNumbers[0] = 100; // Change an array element
  cout << myNumbers[0] << "\n"; // Outputs 100
  myCars[0] = "Opel"; // Change an array element
  cout << myCars[0] << "\n"; // Outputs Opel
  return 0;
}
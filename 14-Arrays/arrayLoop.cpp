#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {  // Loop through the array elements
    cout << myNumbers[i] << "\n";
  }

  for (int num : myNumbers) {  //For each loop through the array elements
    cout << num << "\n";
  }

  string myCars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++) {  // Loop through the array elements
    cout << myCars[i] << "\n";
  }

  for (string car : myCars) {  // For each loop through the array elements
    cout << car << "\n";
  }
  return 0;
}
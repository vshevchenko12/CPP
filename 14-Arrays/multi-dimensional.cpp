#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  string cars[2][3] = {
    {"Volvo", "BMW", "Ford"},
    {"Mazda", "Toyota", "Honda"}
  };

  cout << cars[0][2] << endl;  // Outputs "Ford"
  cout << cars[1][0] << endl;  // Outputs "Mazda"

  cars[0][0] = "Opel";  // Change the value of the first element in the first array

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << cars[i][j] << " ";
    }
    cout << endl;
  }



  string letters[2][2][2] = {
    {{"A", "B"}, {"C", "D"}},
    {{"E", "F"}, {"G", "H"}}
  };

  cout << letters[0][1][1] << endl;  // Outputs "D"
  cout << letters[1][0][0] << endl;  // Outputs "E"

  letters[0][0][0] = "I";  // Change the value of the first element in the first array

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

struct Car {
  string brand;
  int year;
};

void myFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car &c) {
  c.year++;
}

int main() {
  Car myCar = {"Toyota", 2020};
  myFunction(myCar);  //Outputs: Brand: Toyota, Year: 2020
  /*
  Note: Since the structure is passed by value, the function gets a copy of the structure.
  This means that the original data is not changed.
  */

  /*
  You can also pass a structure by reference, using &.
  This allows the function to modify the original data:
  */
  updateYear(myCar);
  cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
  //Outputs: The Toyota is now from year 2021.

  /*
  Tip: Use reference if you want the function to change the structure's data, or to avoid copying large structures.
  */

  return 0;
}
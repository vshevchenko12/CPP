#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

// challenge
struct student {
  string name;
  int age;
  char grade;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";  // Outputs "BMW X5 1999"
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";  // Outputs "Ford Mustang 1969"

  // Create a student structure and store it in myStudent;
  student myStudent;
  myStudent.name = "Liam Smith";
  myStudent.age = 35;
  myStudent.grade = 'A';
  // Print the structure members
  cout << "Name: " << myStudent.name << "\n" << "Age: " << myStudent.age << "\n" << "Grade: " << myStudent.grade << "\n";
  // Outputs: "Name: Liam Smith, Age: 35, Grade: A"

  return 0;
}
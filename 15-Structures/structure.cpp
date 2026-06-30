#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  // Create a structure variable called myStructure
  struct {
    int myNum;
    string myString;
  } myStructure;

  // Assign values to members of myStructure
  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  // Print members of myStructure
  cout << myStructure.myNum << "\n";  // Outputs 1
  cout << myStructure.myString << "\n";  // Outputs "Hello World!"
  return 0;
}
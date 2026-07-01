#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  // Create a structure variable called myStructure
  struct {  // A structure is a user-defined data type that allows you to combine data items of different kinds. It is a way to group related variables together under one name. Each variable in the structure is called a member, and they can be of different data types.
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
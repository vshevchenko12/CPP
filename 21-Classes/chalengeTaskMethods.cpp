#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;


class Dog {  // The class
  public:    // Access specifier
    void bark() {   // Method/function defined inside the class
      cout << "Woof!" << endl;
    }
};

int main() {
  Dog myDog;  // Create an object of Dog class
  myDog.bark(); // Call the bark method

  return 0;
}
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food (Pizza)
  cout << food << "\n";

  // Output the memory address of food (0x6dfed4)
  cout << &food << "\n";

  // Access the memory address of food and output its value (Pizza)
  cout << *ptr << "\n";

  // Change the value of the pointer
  *ptr = "Hamburger";

  // Output the new value of the pointer (Hamburger)
  cout << *ptr << "\n";

  // Output the new value of the food variable (Hamburger)
  cout << food << "\n";
return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting1 = "Hello";  // Regular String
  char greeting2[] = "Hello";  // C-Style String (an array of characters)
  cout << greeting1 << endl;  // Output: Hello
  cout << greeting2 << endl;  // Output: Hello

  return 0;
}
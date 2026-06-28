#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello, World!";
  cout << "Original string: " << str << endl;

  // Accessing characters using at() method
  cout << "Character at index 7: " << str.at(7) << endl;  //Output: W

  // Accessing characters using operator[]
  cout << "Character at index 7 using operator[]: " << str[7] << endl;  //Output: W

  str[0] = 'J';  // Modifying the first character
  cout << "Character at index 0 using operator[]: " << str[0] << endl;  //Output: J

  // Accessing characters using at() method with bounds checking
  try {
    cout << "Character at index 13: " << str.at(13) << endl;  //Output: !
  } catch (const out_of_range& e) {
    cout << "Error: " << e.what() << endl;
  }

  // Accessing the first and last characters
  cout << "First character: " << str.front() << endl;  //Output: J
  cout << "Last character: " << str.back() << endl;  //Output: !
  cout << "Last character using index: " << str[str.length() - 1] << endl;  //Output: !



  return 0;
}
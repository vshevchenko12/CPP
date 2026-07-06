#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "We are the so-called \"Vikings\" from the north."; // Using escape characters to include double quotes in the string
  cout << txt << endl;  // Output: We are the so-called "Vikings" from the north.

  string txt2 = "It\'s alright."; // Using escape characters to include a single quote in the string
  cout << txt2 << endl;  // Output: It's alright.

  string txt3 = "The character \\ is called backslash."; // Using escape characters to include a backslash in the string
  cout << txt3 << endl;  // Output: The character \ is called backslash.

  return 0;
}
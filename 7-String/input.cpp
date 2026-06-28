#include <iostream>
#include <string>
using namespace std;

int main() {
  // string firstName;
  // cout << "Type your first name: ";
  // cin >> firstName; // get user input from the keyboard
  // cout << "Your name is: " << firstName << endl;

  // Type your first name: John
  // Your name is: John

  string fullName;
  // cout << "Type your full name: ";
  // cin >> fullName;  // get user input from the keyboard
  // cout << "Your full name is: " << fullName << endl;

  // Type your full name: John Doe
  // Your full name is: John
  // WRONG: Only "John" is captured because cin stops reading input at the first whitespace character (space, tab, etc.). To capture the full name including spaces, we need to use getline() instead of cin.

  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your full name is: " << fullName << endl;

// Type your full name: John Doe
// Your full name is: John Doe

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int userAge;                  // variable to store user's age
  cout << "Enter your age: ";   // prompt user for input
  cin >> userAge;               // read user input and store it in userAge variable

  cout << "You are " << userAge << " years old." << endl;  // output the user's age

  return 0;
}
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  return 0;
}  // Output: 0 1 2 3 4


/*  Conditional is False, but do-while loop will execute the code block once before checking the condition.  */
/*
int i = 10;
do {
  cout << "i is " << i << "\n";
  i++;
} while (i < 5);
 // Output: i is 10
*/


// EXAMPLES:

/*
// A variable with some specific numbers
int numbers = 12345;

// A variable to store the reversed number
int revNumbers = 0;

// Reverse and reorder the numbers
while (numbers) {
  // Get the last number of 'numbers' and add it to 'revNumbers'
  revNumbers = revNumbers * 10 + numbers % 10;
  // Remove the last number of 'numbers'
  numbers /= 10;
}

cout << "Reversed numbers: " << revNumbers << "\n";
*/

/*
int dice = 1;

while (dice <= 6) {
  if (dice < 6) {
    cout << "No Yatzy\n";
  } else {
    cout << "Yatzy!\n";
  }
  dice = dice + 1;
}
*/
#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  int sum = 0;
  for (int i = 1; i <= 5; i++) {
    /*
    Statement 1 sets a variable before the loop starts: int i = 0
    Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, if it is false, the loop will end.
    Statement 3 increases a value each time the code block in the loop has been executed: i++
    */
    sum += i;
  }
  cout << "Sum is " << sum;
  return 0;
}
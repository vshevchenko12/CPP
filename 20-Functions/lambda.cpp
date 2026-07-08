#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

// SYNTAX  [capture] (parameters) { code };
// The lambda version is great when you don't need to reuse the function later. It's quick and works well inside blocks or as arguments to other functions.

// Lambda with no parameters
auto greet = []() {
  cout << "Hello, World!" << endl;
};

// Lambda with parameters
auto add = [](int a, int b) {
  return a + b;
};

// Passing a lambda as a parameter to a function
void executeLambda(const function<void()>& func) {
  func();
}
/*
int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  myFunction(message);
  return 0;
} // The function myFunction() takes a lambda as a parameter and executes it. When the program runs, it prints "Hello World!" to the console.
*/


int main() {
  // Lambda with capture
  int x = 10;
  auto multiply = [x](int y) {
    return x * y;
  };
  cout << "Multiplying 10 by 5 gives: " << multiply(5) << endl; // Calls the multiply lambda

  // Lambda capturing by reference
  auto show = [&x]() {
    cout << "The value of x is: " << x << endl;
  };
  x = 20; // Change the value of x after the lambda is defined, but before it is called
  show(); // Calls the show lambda, which captures x by reference.
  // Output: The value of x is: 20

  // Lambda in a loop
  for (int i = 0; i < 5; ++i) {
    auto print = [i]() {
      cout << "Current value of i: " << i << endl;
    };
    print(); // Calls the print lambda
  }

  // Calls the greet lambda
  greet();

  // Calls the add lambda
  cout << "Sum of 3 and 5 is: " << add(3, 5) << endl;

  // Passing a lambda directly to a function
  executeLambda([]() {
    cout << "Executing a lambda passed as a parameter!" << endl;
  });

  return 0;
}


/*
Regular Functions vs Lambda Functions
Both regular functions and lambda functions let you group code and run it later, but they are used in slightly different situations.

Use a regular function when:
  You plan to reuse the function in multiple places
  You want to give the function a clear, meaningful name
  The logic is long or complex

Use a lambda function when:
  You only need the function once
  The code is short and simple
  You want to pass a quick function into another function

Both of these examples do the same thing. They return the sum of two numbers:

Regular Function
int add(int a, int b) {
  return a + b;
}
Lambda Function
auto add = [](int a, int b) {
  return a + b;
};
*/
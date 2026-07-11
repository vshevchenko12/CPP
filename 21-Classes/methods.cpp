#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

/*
Class Methods
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):

Sometimes it is better to declare the method in the class and define it later (especially in large programs).
This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function


*/

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
    void myMethod2();  // Method declared inside the class and defined later
};

// Method/function definition outside the class
void MyClass::myMethod2() {
  cout << "Hello World! 2";
}

// You can also pass values to methods just like regular functions:

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  myObj.myMethod2(); // Call the second method

  Car myCar;         // Create an object of Car class
  cout << myCar.speed(120); // Call the speed method with an argument and print the result

  return 0;
}
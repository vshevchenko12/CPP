#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

/*
Constructors
A constructor is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ():

Example
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}
Constructor Rules
The constructor has the same name as the class.
It has no return type (not even void).
It is usually declared public.
It is automatically called when an object is created.
*/


/*
Constructor with Parameters
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.

The following class have brand, model and year attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc).

When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:


You can also define the constructor outside the class using the scope resolution operator ::
*/


class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
    // Car(string x, string y, int z); // Constructor declared outside the class
};

// // Constructor definition outside the class
// Car::Car(string x, string y, int z) {
//   brand = x;
//   model = y;
//   year = z;
// }

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

/*
Why Constructors Are Useful
Constructors run by themselves when you create an object. They set things up so everything is ready right away.

Think of it like this: When you order a pizza (object), the constructor is the chef who adds the sauce, cheese, and toppings before it gets to you - you don't have to do it yourself!
*/
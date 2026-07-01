#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;

int main() {
  // Create an enum to represent the different types of ships in the game
  enum ShipType {  //enum is a group of constants that are related to each other. It is a user-defined data type that consists of integral constants. Each of the enumerators has an associated value, which is an integer constant. By default, the first enumerator has the value 0, and each subsequent enumerator has a value that is one greater than the previous enumerator.
    CARRIER,      // 0 by default
    BATTLESHIP,   // 1
    CRUISER,      // 2
    SUBMARINE,    // 3
    DESTROYER     // 4
  };

  enum Color {
    RED = 3,
    GREEN,  // now 4
    BLUE    // now 5
  };

  enum Level {
    EASY = 25,     // 25
    MEDIUM = 50,   // 50
    HARD = 75      // 75
  };


  // Create a variable of type ShipType and assign it a value
  ShipType myShip = BATTLESHIP;

  cout << "The value of myShip is: " << myShip << endl;  // Outputs: The value of myShip is: 1, since BATTLESHIP is the second value in the enum (0-indexed)

  // Use a switch statement to print out the name of the ship based on its type
  switch (myShip) {
    case CARRIER:
      cout << "My ship is a Carrier." << endl;
      break;
    case BATTLESHIP:
      cout << "My ship is a Battleship." << endl;
      break;
    case CRUISER:
      cout << "My ship is a Cruiser." << endl;
      break;
    case SUBMARINE:
      cout << "My ship is a Submarine." << endl;
      break;
    case DESTROYER:
      cout << "My ship is a Destroyer." << endl;
      break;
    default:
      cout << "Unknown ship type." << endl;
  }

  return 0;
}
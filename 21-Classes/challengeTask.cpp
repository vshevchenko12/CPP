#include <iostream>  // https://www.w3schools.com/cpp/cpp_ref_iostream.asp
using namespace std;


class Book {
  public:
    string title;
    string author;
    int year;
};

int main() {
  // Create an object of Book class
  Book myBook;

  // Access attributes and set values
  myBook.title = "Matilda";
  myBook.author = "Roald Dahl";
  myBook.year = 1988;


  Book myBook2;

  myBook2.title = "The Giving Tree";
  myBook2.author = "Shel Silverstein";
  myBook2.year = 1964;

  // Print attribute values
  cout << "Title: " << myBook.title << "\n";
  cout << "Author: " << myBook.author << "\n";
  cout << "Year: " << myBook.year << "\n";

  cout << "Title: " << myBook2.title << "\n";
  cout << "Author: " << myBook2.author << "\n";
  cout << "Year: " << myBook2.year << "\n";

  return 0;
}
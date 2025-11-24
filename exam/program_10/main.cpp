/*
   Q: Consider a book rental management system which stores the
      details of books and customers who rent books from it.
      Develop a class Book and calculate the volume of two books
      using parameterized constructor.
*/

#include <iostream>
using namespace std;

class Book {
 private:
  string title;
  string author;
  float height, width, thickness;  // dimensions for volume
  float volume;

 public:
  // Parameterized Constructor
  Book(string t, string a, float h, float w, float th) {
    title = t;
    author = a;
    height = h;
    width = w;
    thickness = th;
    volume = height * width * thickness;
  }

  // Display Book Details
  void display() {
    cout << "\n--- Book Details ---\n";
    cout << "Title      : " << title << endl;
    cout << "Author     : " << author << endl;
    cout << "Volume     : " << volume << " cubic units" << endl;
  }
};

int main() {
  // Input for two books
  string title, author;
  float h, w, th;

  cout << "Enter details of Book 1:\n";
  cout << "Title: ";
  cin >> title;
  cout << "Author: ";
  cin >> author;
  cout << "Enter Height, Width, Thickness: ";
  cin >> h >> w >> th;
  Book b1(title, author, h, w, th);

  cout << "\nEnter details of Book 2:\n";
  cout << "Title: ";
  cin >> title;
  cout << "Author: ";
  cin >> author;
  cout << "Enter Height, Width, Thickness: ";
  cin >> h >> w >> th;
  Book b2(title, author, h, w, th);

  // Display details of both books
  b1.display();
  b2.display();

  return 0;
}

/*
Create a class Rectangle with private member variables length (double) and width
(double). Implement: A default constructor that initializes both length and
width to 0.0. A parameterized constructor that takes one argument (double side)
and initializes both length and width to side (for a square). Another
parameterized constructor that takes two arguments (double l, double w) and
initializes length to l and width to w. A calculateArea() method to return the
area of the rectangle. In main(), create Rectangle objects using each of the
three constructors and print their areas.
*/

#include <iostream>
using namespace std;

class Rectangle {
 private:
  double length;
  double width;

 public:
  Rectangle() {
    length = 0.0;
    width = 0.0;
  }
  Rectangle(double side) {
    length = side;
    width = side;
  }
  Rectangle(double l, double w) {
    length = l;
    width = w;
  }
  double calculateArea() { return length * width; }
};

int main() {
  Rectangle r1;
  cout << "Area of r1 : " << r1.calculateArea() << endl;

  double side;
  cout << "Enter side of square (r1) : ";
  cin >> side;
  Rectangle r2(side);
  cout << "Area of r2 : " << r2.calculateArea() << endl;

  double l, r;
  cout << "Enter lenght and width of rectangle (r3) : ";
  cin >> l >> r;
  Rectangle r3(l, r);
  cout << "Area of r3: " << r3.calculateArea() << endl;
}

/* OUTPUT
Area of r1 : 0
Enter side of square (r1) : 2
Area of r2 : 4
Enter lenght and width of rectangle (r3) : 2 3
Area of r3: 6
*/
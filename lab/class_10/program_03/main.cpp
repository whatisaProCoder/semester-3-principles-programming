/*
You will model a Rectangle which "is a" Shape, but the Shape "has a" Point (for
its origin). Class Point: Private members: x (int), y (int). Public
parameterized constructor: Point(int x_val, int y_val). Public default
constructor: Point() (initializes x and y to 0). Public get_coords() method that
prints "Point: (x, y)". Class Shape (Base Class): Protected member: origin (a
Point object). Public parameterized constructor: Shape(int x, int y) that
initializes its origin Point object. Class Rectangle (Derived Class): Inherits
from Shape. Private members: width (int), height (int). Public parameterized
constructor: Rectangle(int x, int y, int w, int h). Public display() method that
prints the origin's coordinates (using the Point's method) and its own width and
height. Task: Implement all three classes as described. Pay close attention to
the constructor for Rectangle. It needs to initialize its Shape base, which in
turn needs to initialize its Point member. The Rectangle constructor's
initializer list will need to call the Shape constructor. The Shape
constructor's initializer list will need to initialize its origin member.

In main(), create a Rectangle object and call its display() method.
*/

#include <iostream>
using namespace std;

class Point {
 private:
  int x;
  int y;

 public:
  Point(int x_val, int y_val) {
    x = x_val;
    y = y_val;
  }
  Point() {
    x = 0;
    y = 0;
  }
  void get_coords() { cout << "Point : (" << x << "," << y << ")" << endl; }
};

class Shape {
 protected:
  Point origin;

 public:
  Shape(int x, int y) { origin = Point(x, y); }
};

class Rectangle : public Shape {
 private:
  int width;
  int height;

 public:
  Rectangle(int x, int y, int w, int h) : Shape(x, y) {
    width = w;
    height = h;
  }
  void display() {
    Shape::origin.get_coords();
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
  }
};

int main() {
  int x, y, w, h;

  cout << "Enter details...." << endl;
  cout << "x : ";
  cin >> x;
  cout << "y : ";
  cin >> y;
  cout << "w : ";
  cin >> w;
  cout << "h : ";
  cin >> h;

  Rectangle r(x, y, w, h);
  cout << "Printing details...." << endl;
  r.display();
}

/* OUTPUT
Enter details....
x : 1
y : 2
w : 3
h : 4
Printing details....
Point : (1,2)
Width : 3
Height : 4
*/

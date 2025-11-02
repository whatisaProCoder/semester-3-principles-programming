/*
Create a class Point with private member variables x and y (integers).
Implement: A parameterized constructor that initializes x and y. A copy
constructor that takes another Point object as a const reference and copies its
x and y values. A display() method to print the point's coordinates. In main(),
create a Point object, then create another Point object using the copy
constructor, and display both.
*/

#include <iostream>
using namespace std;

class Point {
 private:
  int x, y;

 public:
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
  Point(const Point& b) {
    x = b.x;
    y = b.y;
  }
  void display() { cout << "Coordinates : (" << x << ", " << y << ")" << endl; }
};

int main() {
  int x, y;

  cout << "Enter coordinates : ";
  cin >> x >> y;

  Point a(x, y);

  Point b = a;

  a.display();
  b.display();
}

/* OUTPUT
Enter coordinates : 1 2
Coordinates : (1, 2)
Coordinates : (1, 2)
*/
/* Create overloaded functions to calculate area and perimeter for different
 * geometric shapes such as circle, rectangle, triangle using different
 * parameter combinations. */

#include <cmath>
#include <iostream>
using namespace std;

class ShapeOps {
 public:
  double area(double r);
  double perimeter(double r);
  double area(double l, double w);
  double perimeter(double l, double w);
  double area(double a, double b, double c);
  double perimeter(double a, double b, double c);
};

double ShapeOps::area(double r) { return 3.14 * r * r; }

double ShapeOps::perimeter(double r) { return 2 * 3.14 * r; }

double ShapeOps::area(double l, double w) { return l * w; }

double ShapeOps::perimeter(double l, double w) { return 2 * (l + w); }

double ShapeOps::area(double a, double b, double c) {
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

double ShapeOps::perimeter(double a, double b, double c) { return a + b + c; }

int main() {
  ShapeOps ops;

  double r = 5;
  cout << "Circle area: " << ops.area(r) << endl;
  cout << "Circle perimeter: " << ops.perimeter(r) << endl;

  double l = 4, w = 6;
  cout << "Rectangle area: " << ops.area(l, w) << endl;
  cout << "Rectangle perimeter: " << ops.perimeter(l, w) << endl;

  double a = 3, b = 4, c = 5;
  cout << "Triangle area: " << ops.area(a, b, c) << endl;
  cout << "Triangle perimeter: " << ops.perimeter(a, b, c) << endl;

  return 0;
}

/* OUTPUT
Circle area: 78.5
Circle perimeter: 31.4
Rectangle area: 24
Rectangle perimeter: 20
Triangle area: 6
Triangle perimeter: 12
*/

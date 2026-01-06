/*
Write a menu driven program to perform Complex Number Addition and Complex
Number Subtraction thereby accepting choice from command line.
*/

#include <iostream>
using namespace std;

class Complex {
 private:
  double x, y;

 public:
  Complex() {
    this->x = 0;
    this->y = 0;
  }
  Complex(int x, int y) {
    this->x = x;
    this->y = y;
  }
  Complex operator+(const Complex& b) { return Complex(x + b.x, y + b.y); }
  Complex operator-(const Complex& b) { return Complex(x - b.x, y - b.y); }
  void display() {
    cout << x;
    if (y > 0) cout << "+";
    cout << y << "i" << endl;
  }
};

int main() {
  int x, y;

  cout << "Enter first complex number:" << endl;
  cin >> x >> y;

  Complex a(x, y);

  cout << "Enter second complex number:" << endl;
  cin >> x >> y;

  Complex b(x, y);

  int ch;

  cout << "Enter choice :-" << endl;
  cout << "1. for addition" << endl;
  cout << "2. for subtraction" << endl;

  cin >> ch;

  Complex res;

  switch (ch) {
    case 1:
      cout << "Result of addition..." << endl;
      res = a + b;
      res.display();
      break;

    case 2:
      cout << "Result of subtraction..." << endl;
      res = a - b;
      res.display();
      break;

    default:
      cout << "Invalid choice";
  }
}

/*
Enter first complex number:
2 3
Enter second complex number:
3 4
Enter choice :-
1. for addition
2. for subtraction
1
Result of addition...
5+7i
*/
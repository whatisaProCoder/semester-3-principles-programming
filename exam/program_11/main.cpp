/*
   Q: Develop a C++ program to perform binary and unary
      operator overloading.
*/

#include <iostream>
using namespace std;

class Number {
 private:
  int value;

 public:
  // Constructor
  Number(int v = 0) { value = v; }

  // Display function
  void display() { cout << "Value: " << value << endl; }

  // Unary Operator Overloading (++ to increment)
  void operator++() { value++; }

  // Binary Operator Overloading (+ to add two Number objects)
  Number operator+(Number obj) {
    Number temp;
    temp.value = value + obj.value;
    return temp;
  }
};

int main() {
  Number n1(10), n2(20), n3;

  cout << "Initial Values:\n";
  n1.display();
  n2.display();

  // Unary Operator Usage
  ++n1;
  cout << "\nAfter applying unary ++ to n1:\n";
  n1.display();

  // Binary Operator Usage
  n3 = n1 + n2;
  cout << "\nAfter applying binary + (n1 + n2):\n";
  n3.display();

  return 0;
}

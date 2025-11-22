/*
   Q: You need to design a class that models complex numbers
      and supports addition of two complex numbers using
      a parameterized constructor.
*/

#include <iostream>
using namespace std;

class Complex {
 private:
  float real;
  float imag;

 public:
  // Parameterized Constructor
  Complex(float r, float i) {
    real = r;
    imag = i;
  }

  // Method to add two complex numbers
  Complex add(Complex c) { return Complex(real + c.real, imag + c.imag); }

  // Display function
  void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  Complex c1(3.5, 2.5);  // First complex number
  Complex c2(1.5, 4.5);  // Second complex number

  Complex c3 = c1.add(c2);  // Add using method

  cout << "Result: ";
  c3.display();  // Output: 5 + 7i

  return 0;
}

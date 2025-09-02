/* Create overloaded functions to perform mathematical operations such as add,
   subtract, multiply, divide, that work with integers, floats. */

#include <iostream>
using namespace std;

class MathOps {
 public:
  int add(int a, int b);
  float add(float a, float b);
  int subtract(int a, int b);
  float subtract(float a, float b);
  int multiply(int a, int b);
  float multiply(float a, float b);
  int divide(int a, int b);
  float divide(float a, float b);
};

int MathOps::add(int a, int b) { return a + b; }

float MathOps::add(float a, float b) { return a + b; }

int MathOps::subtract(int a, int b) { return a - b; }

float MathOps::subtract(float a, float b) { return a - b; }

int MathOps::multiply(int a, int b) { return a * b; }

float MathOps::multiply(float a, float b) { return a * b; }

int MathOps::divide(int a, int b) {
  if (b != 0)
    return a / b;
  else
    return -1;
}

float MathOps::divide(float a, float b) {
  if (b != 0)
    return a / b;
  else
    return -1;
}

int main() {
  int a = 5, b = 10;
  float fa = 5.3, fb = 4.7;

  MathOps op;

  cout << "add (int) : " << op.add(a, b) << endl;
  cout << "add (float) : " << op.add(fa, fb) << endl;

  cout << "subtract (int) : " << op.subtract(a, b) << endl;
  cout << "subtract (float) : " << op.subtract(fa, fb) << endl;

  cout << "multiply (int) : " << op.multiply(a, b) << endl;
  cout << "multiply (float) : " << op.multiply(fa, fb) << endl;

  cout << "divide (int) : " << op.divide(a, b) << endl;
  cout << "divide (float) : " << op.divide(fa, fb) << endl;

  return 0;
}

/* OUTPUT
add (int) : 15
add (float) : 10
subtract (int) : -5
subtract (float) : 0.6
multiply (int) : 50
multiply (float) : 24.91
divide (int) : 0
divide (float) : 1.12766
*/
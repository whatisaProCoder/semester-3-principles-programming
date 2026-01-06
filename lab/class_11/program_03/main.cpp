// Write a program to implement Exception Handling.

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter a and b :" << endl;

  cin >> a >> b;

  try {
    if (b == 0) {
      throw runtime_error("Division by zero");
    }
    int c = a / b;
    cout << "Result of division : " << c << endl;
  } catch (const runtime_error& e) {
    cerr << "Caught exception : " << e.what();
  }
}

/*
Enter a and b :
1 0
Caught exception : Division by zero
*/
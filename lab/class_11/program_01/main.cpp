// Write a program to perform call by value and call by reference using class

#include <iostream>
using namespace std;

class Call {
 public:
  void increment_CallByValue(int x) {
    x++;
    cout << "Incrementing by call by value: " << x << endl;
  }
  void increment_CallByReference(int& x) {
    x++;
    cout << "Incrementing by call by reference: " << x << endl;
  }
};

int main() {
  Call c;

  int x;
  cout << "Enter value of x: ";
  cin >> x;

  c.increment_CallByValue(x);
  cout << "x in main(): " << x << endl;

  c.increment_CallByReference(x);
  cout << "x in main(): " << x << endl;
}

/*
Enter value of x: 5
Incrementing by call by value: 6
x in main(): 5
Incrementing by call by reference: 6
x in main(): 6
*/
// Write a C++ program to find the factorial of a number.

#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

int main() {
  int n;

  cout << "Enter number : " << endl;
  cin >> n;

  cout << "Factorial : " << fact(n) << endl;
}

/* OUTPUT
Enter number :
5
Factorial : 120
*/
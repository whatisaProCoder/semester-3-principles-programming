// Redo the above program using a class called Factorial and appropriate member
// functions.

#include <iostream>
using namespace std;

class Factorial {
 public:
  int fact(int n);
};

int Factorial::fact(int n) {
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

int main() {
  Factorial f;
  int n;

  cout << "Enter number : " << endl;
  cin >> n;

  cout << "Factorial : " << f.fact(n) << endl;
}

/* OUTPUT
Enter number :
5
Factorial : 120
*/
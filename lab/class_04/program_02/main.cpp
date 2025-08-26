// Redo the above program using class called Number and appropriate member
// functions.

#include <iostream>
using namespace std;

class Number {
 public:
  int max(int a, int b, int c);
};

int Number::max(int a, int b, int c) {
  if (a >= b && a >= c)
    return a;
  else if (b >= a && b >= c)
    return b;
  else
    return c;
}

int main() {
  Number nn;
  int a, b, c;

  cout << "Enter the three numbers :" << endl;
  cin >> a >> b >> c;

  int maxn = nn.max(a, b, c);

  cout << "Maximum number : " << maxn << endl;
}

/* OUTPUT
Enter the three numbers :
1 8 5
Maximum number : 8
*/
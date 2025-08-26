// Redo the above program using a class called Prime and appropriate member
// functions.

#include <iostream>
using namespace std;

class Prime {
 public:
  bool check(int num);
};

bool Prime::check(int num) {
  if (num <= 1) return false;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  Prime p;
  int num;

  cout << "Enter number : " << endl;
  cin >> num;

  if (p.check(num))
    cout << num << " is prime." << endl;
  else
    cout << num << " is not prime." << endl;
}

/* OUTPUT
Enter number :
6
6 is not prime.
*/
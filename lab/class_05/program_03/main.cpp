/* Create overloaded functions to process arrays of different types such as int,
   double, char with different operations i. sort, ii. reverse, iii. max/min.
*/

#include <iostream>
using namespace std;

class ArrayOps {
 public:
  void sort(int a[], int n);
  void sort(double a[], int n);
  void sort(char a[], int n);
  void reverse(int a[], int n);
  void reverse(double a[], int n);
  void reverse(char a[], int n);
  int minmax(int a[], int n, bool getMax);
  double minmax(double a[], int n, bool getMax);
  char minmax(char a[], int n, bool getMax);
};

void ArrayOps::sort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}

void ArrayOps::sort(double a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        double t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}

void ArrayOps::sort(char a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        char t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}

void ArrayOps::reverse(int a[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
}

void ArrayOps::reverse(double a[], int n) {
  for (int i = 0; i < n / 2; i++) {
    double t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
}

void ArrayOps::reverse(char a[], int n) {
  for (int i = 0; i < n / 2; i++) {
    char t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
}

int ArrayOps::minmax(int a[], int n, bool getMax) {
  int res = a[0];
  for (int i = 0; i < n; i++) {
    if (getMax && a[i] > res)
      res = a[i];
    else if (!getMax && a[i] < res)
      res = a[i];
  }
  return res;
}

double ArrayOps::minmax(double a[], int n, bool getMax) {
  double res = a[0];
  for (int i = 0; i < n; i++) {
    if (getMax && a[i] > res)
      res = a[i];
    else if (!getMax && a[i] < res)
      res = a[i];
  }
  return res;
}

char ArrayOps::minmax(char a[], int n, bool getMax) {
  char res = a[0];
  for (int i = 0; i < n; i++) {
    if (getMax && a[i] > res)
      res = a[i];
    else if (!getMax && a[i] < res)
      res = a[i];
  }
  return res;
}

int main() {
  ArrayOps ops;

  int a1[] = {5, 3, 8, 1, 9, 2};
  int n1 = sizeof(a1) / sizeof(a1[0]);

  ops.sort(a1, n1);
  cout << "Sorted int array..." << endl;
  ;
  for (int i = 0; i < n1; i++) cout << a1[i] << " ";
  cout << endl;

  double a2[] = {5.5, 3.3, 8.8, 1.1, 9.9, 2.2};
  int n2 = sizeof(a2) / sizeof(a2[0]);

  ops.reverse(a2, n2);
  cout << "Reversed double array..." << endl;
  for (int i = 0; i < n2; i++) cout << a2[i] << " ";
  cout << endl;

  char a3[] = {'d', 'b', 'f', 'a', 'z', 'c'};
  int n3 = sizeof(a3) / sizeof(a3[0]);

  cout << "Max char: " << ops.minmax(a3, n3, true) << endl;
  cout << "Min char: " << ops.minmax(a3, n3, false) << endl;

  return 0;
}

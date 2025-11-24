/*
   Q: Develop a menu driven C++ program to find whether a number
      is a Krishnamurthy number and Armstrong number or not.
      (Krishnamurthy Number: Sum of factorials of digits = number)
*/

#include <cmath>
#include <iostream>
using namespace std;

// Factorial function
int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) fact *= i;
  return fact;
}

// Check Krishnamurthy Number
bool isKrishnamurthy(int n) {
  int temp = n, sum = 0;
  while (temp > 0) {
    sum += factorial(temp % 10);
    temp /= 10;
  }
  return sum == n;
}

// Function to count digits for general Armstrong check
int digits(int n) {
  int c = 0;
  while (n > 0) {
    n /= 10;
    c++;
  }
  return c;
}

// Check Armstrong Number
bool isArmstrong(int n) {
  int temp = n, sum = 0;
  int d = digits(n);

  while (temp > 0) {
    int digit = temp % 10;
    sum += pow(digit, d);
    temp /= 10;
  }
  return (sum == n);
}

int main() {
  int choice, num;

  do {
    cout << "\n===== MENU =====\n";
    cout << "1. Check Krishnamurthy Number\n";
    cout << "2. Check Armstrong Number\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
      cout << "Enter a number: ";
      cin >> num;
    }

    switch (choice) {
      case 1:
        if (isKrishnamurthy(num))
          cout << num << " is a Krishnamurthy Number.\n";
        else
          cout << num << " is NOT a Krishnamurthy Number.\n";
        break;

      case 2:
        if (isArmstrong(num))
          cout << num << " is an Armstrong Number.\n";
        else
          cout << num << " is NOT an Armstrong Number.\n";
        break;

      case 3:
        cout << "Exiting...\n";
        break;

      default:
        cout << "Invalid choice! Try again.\n";
    }

  } while (choice != 3);

  return 0;
}

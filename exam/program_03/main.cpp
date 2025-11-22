/*
   Q: Develop a menu driven C++ program to check whether a number
      is a Perfect number or Armstrong number. Use a function to
      get the number of digits for Armstrong number.
*/

#include <cmath>
#include <iostream>
using namespace std;

// Function to count digits
int numOfDigits(int n) {
  int count = 0;
  while (n != 0) {
    count++;
    n /= 10;
  }
  return count;
}

// Function to check Perfect Number
bool isPerfect(int n) {
  int sum = 0;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) sum += i;
  }
  return (sum == n);
}

// Function to check Armstrong Number (for any digit length)
bool isArmstrong(int n) {
  int temp = n, sum = 0;
  int digits = numOfDigits(n);

  while (temp != 0) {
    int digit = temp % 10;
    sum += pow(digit, digits);  // power based on no. of digits
    temp /= 10;
  }
  return (sum == n);
}

int main() {
  int choice, num;

  do {
    cout << "\n===== MENU =====\n";
    cout << "1. Check Perfect Number\n";
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
        if (isPerfect(num))
          cout << num << " is a Perfect Number.\n";
        else
          cout << num << " is NOT a Perfect Number.\n";
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

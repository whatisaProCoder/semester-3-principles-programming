/*
   Q: Develop a menu driven C++ program to find the sum of digits
      of a number and swap two numbers.
*/

#include <iostream>
using namespace std;

// Function to calculate sum of digits
int sumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

// Function to swap two numbers
void swapNumbers(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int choice, num, a, b;

  do {
    cout << "\n===== MENU =====\n";
    cout << "1. Find Sum of Digits\n";
    cout << "2. Swap Two Numbers\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter a number: ";
        cin >> num;
        cout << "Sum of digits = " << sumOfDigits(num) << endl;
        break;

      case 2:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        swapNumbers(a, b);
        cout << "After swapping: a = " << a << "  b = " << b << endl;
        break;

      case 3:
        cout << "Exiting Program...\n";
        break;

      default:
        cout << "Invalid choice! Please try again.\n";
    }

  } while (choice != 3);

  return 0;
}

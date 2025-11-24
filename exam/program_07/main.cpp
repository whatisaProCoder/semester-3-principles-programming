/*
   Q: Write a C++ program for a bank account deposit system.
      The system should store:
      - Account holder name
      - Current amount
      - Amount deposit and amount withdrawn
      Use constructor to initialize and update account details.
*/

#include <iostream>
using namespace std;

class Bank {
 private:
  string name;
  float balance;

 public:
  // Parameterized constructor
  Bank(string n, float bal) {
    name = n;
    balance = bal;
  }

  // Deposit function
  void deposit(float amt) {
    balance += amt;
    cout << "Amount Deposited: " << amt << endl;
  }

  // Withdraw function
  void withdraw(float amt) {
    if (amt > balance) {
      cout << "Insufficient Balance! Withdrawal Failed.\n";
    } else {
      balance -= amt;
      cout << "Amount Withdrawn: " << amt << endl;
    }
  }

  // Display details
  void display() {
    cout << "\n--- Account Details ---\n";
    cout << "Account Holder: " << name << endl;
    cout << "Current Balance: " << balance << endl;
  }
};

int main() {
  string name;
  float bal, dep, wd;

  cout << "Enter Account Holder Name: ";
  cin >> name;

  cout << "Enter Opening Balance: ";
  cin >> bal;

  Bank acc(name, bal);  // Constructor call

  cout << "\nEnter Deposit Amount: ";
  cin >> dep;
  acc.deposit(dep);

  cout << "Enter Withdraw Amount: ";
  cin >> wd;
  acc.withdraw(wd);

  acc.display();

  return 0;
}

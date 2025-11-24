/*
   Q: Consider a human resource management system which stores the
      salary details of the employees working in the company "ABC".
      Develop a class Employee wherein you will accept user input
      for salary and allowance of three employees and display the
      total salaries of these employees using array of objects.
*/

#include <iostream>
using namespace std;

class Employee {
 private:
  float salary;
  float allowance;
  float total;

 public:
  // Function to accept details
  void input() {
    cout << "Enter Basic Salary: ";
    cin >> salary;
    cout << "Enter Allowance: ";
    cin >> allowance;
  }

  // Calculate total salary
  void calculate() { total = salary + allowance; }

  // Display details
  void display() { cout << "\nTotal Salary: " << total << endl; }
};

int main() {
  Employee emp[3];  // Array of objects

  cout << "Enter details of 3 employees:\n";

  // Input and process each employee
  for (int i = 0; i < 3; i++) {
    cout << "\nEmployee " << i + 1 << ":\n";
    emp[i].input();
    emp[i].calculate();
  }

  // Display results
  cout << "\n--- Salary Details of Employees (Company ABC) ---\n";
  for (int i = 0; i < 3; i++) {
    cout << "\nEmployee " << i + 1 << ":";
    emp[i].display();
  }

  return 0;
}

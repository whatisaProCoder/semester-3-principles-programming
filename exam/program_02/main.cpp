/*
   Q: A company evaluates its employees based on their job type.
      Developer - evaluated based on number of projects completed,
      Manager - evaluated based on number of teams handled.
      The company wants a flexible evaluation system using virtual
      functions allowing different evaluation criteria for each
      employee type.
*/

#include <iostream>
using namespace std;

class Employee {
 public:
  virtual void evaluate() {  // virtual function
    cout << "General employee evaluation" << endl;
  }
};

class Developer : public Employee {
 private:
  int projects;

 public:
  Developer(int p) { projects = p; }

  void evaluate() override {
    cout << "Developer Evaluation: " << projects << " projects completed."
         << endl;
  }
};

class Manager : public Employee {
 private:
  int teams;

 public:
  Manager(int t) { teams = t; }

  void evaluate() override {
    cout << "Manager Evaluation: " << teams << " teams handled." << endl;
  }
};

int main() {
  Employee* emp;

  Developer d1(6);
  Manager m1(3);

  emp = &d1;
  emp->evaluate();  // Calls Developer version

  emp = &m1;
  emp->evaluate();  // Calls Manager version

  return 0;
}

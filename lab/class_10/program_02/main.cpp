/*
Model a relationship between a Person and an Employee, where an Employee "is a"
Person. The Person class has protected members: name (string) and age (int). The
Employee class inherits from Person and has private members: employee_id (int)
and salary (double). Task: Implement a default constructor for Person that
initializes name to "Unknown" and age to 0. Implement a parameterized
constructor for Person that takes a name and age. Implement a default
constructor for Employee. It should call the Person default constructor and
initialize employee_id to 0 and salary to 0.0. Implement a parameterized
constructor for Employee that takes a name, age, employee_id, and salary. It
must pass the name and age up to the Person constructor. Add a print_details()
method to Employee that displays all four data members.

In main(), create one Employee using the default constructor and another using
the parameterized constructor. Call print_details() on both.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
 protected:
  string name;
  int age;

 public:
  Person() {
    name = "Unknown";
    age = 0;
  }
  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
};

class Employee : public Person {
 private:
  int employee_id;
  double salary;

 public:
  Employee() : Person() {
    employee_id = 0;
    salary = 0.0;
  }
  Employee(string name, int age, int employee_id, double salary)
      : Person(name, age) {
    this->employee_id = employee_id;
    this->salary = salary;
  }
  void print_details() {
    cout << "Name : " << Employee::name << endl;
    cout << "Age : " << Employee::age << endl;
    cout << "Employee ID : " << employee_id << endl;
    cout << "Salary : " << salary << endl;
  }
};

int main() {
  string name;
  int age;
  int employee_id;
  double salary;

  cout << "Enter details...." << endl;
  cout << "Name : ";
  getline(cin, name);
  cout << "Age : ";
  cin >> age;
  cout << "Employee ID : ";
  cin >> employee_id;
  cout << "Salary : ";
  cin >> salary;

  Employee e(name, age, employee_id, salary);
  cout << "Printing details...." << endl;
  e.print_details();
}

/*
Enter details....
Name : Pritam Debnath
Age : 20
Employee ID : 200
Salary : 20000
Printing details....
Name : Pritam Debnath
Age : 20
Employee ID : 200
Salary : 20000
*/
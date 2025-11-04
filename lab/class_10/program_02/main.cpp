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
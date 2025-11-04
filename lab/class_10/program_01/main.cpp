/*
You need to model a simple vehicle hierarchy. Create a base class Vehicle and a
derived class Car. The Vehicle class should have two private member variables:
manufacturer (string) and year (int). The Car class should inherit from Vehicle
and add a private member variable: num_doors (int). Task: Implement a
parameterized constructor for Vehicle that takes a manufacturer and a year to
initialize its members. Implement a parameterized constructor for Car that takes
a manufacturer, a year, and the number of doors. This constructor must properly
initialize the Vehicle part of the object using the Vehicle's constructor. Add a
display() method to Vehicle that prints its manufacturer and year.

Add a display() method to Car that prints its manufacturer, year, and num_doors.
This method should call the Vehicle's display() method to avoid duplicating
code.

In main(), create a Car object using its parameterized constructor and call its
display() method.
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
 private:
  string manufacturer;
  int year;

 public:
  Vehicle(string manufacturer, int year) {
    this->manufacturer = manufacturer;
    this->year = year;
  }
  void display() {
    cout << "Manufacturer : " << manufacturer << endl;
    cout << "Year         : " << year << endl;
  }
};

class Car : public Vehicle {
 private:
  int num_doors;

 public:
  Car(string manufacturer, int year, int num_doors)
      : Vehicle(manufacturer, year) {
    this->num_doors = num_doors;
  }
  void display() {
    Vehicle::display();
    cout << "No. of doors  : " << num_doors << endl;
  }
};

int main() {
  string manufacturer;
  int year, num_doors;

  cout << "Enter car details :- " << endl;
  cout << "Manufacturer : ";
  getline(cin, manufacturer);
  cout << "Year         : ";
  cin >> year;
  cout << "No. of doors  : ";
  cin >> num_doors;

  Car c(manufacturer, year, num_doors);
  cout << "Displaying details...." << endl;
  c.display();
}

/*OUTPUT
Enter car details :-
Manufacturer : BMW
Year         : 2025
No. of doors  : 6
Displaying details....
Manufacturer : BMW
Year         : 2025
No. of doors  : 6
*/

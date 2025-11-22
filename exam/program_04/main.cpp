/*
   Q: Consider a car rental management system which stores the
      details of various brands of cars rented by its customers.
      Develop a class Car wherein you will accept user input for
      id, brand and price of three cars and display the car details
      using array of objects.
*/

#include <iostream>
using namespace std;

class Car {
 private:
  int id;
  string brand;
  float price;

 public:
  // Function to accept details
  void input() {
    cout << "Enter Car ID: ";
    cin >> id;
    cout << "Enter Car Brand: ";
    cin >> brand;
    cout << "Enter Car Price: ";
    cin >> price;
  }

  // Function to display details
  void display() {
    cout << "\nCar ID: " << id;
    cout << "\nCar Brand: " << brand;
    cout << "\nCar Price: " << price;
    cout << "\n------------------------";
  }
};

int main() {
  Car cars[3];  // array of objects

  cout << "Enter details for 3 cars:\n";

  for (int i = 0; i < 3; i++) {
    cout << "\nCar " << i + 1 << ":\n";
    cars[i].input();
  }

  cout << "\nDisplaying Car Details:\n";
  for (int i = 0; i < 3; i++) {
    cars[i].display();
  }

  return 0;
}

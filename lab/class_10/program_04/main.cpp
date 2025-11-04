/*
You need to model a Phone which "is a" Gadget. This problem focuses on how copy
constructors are chained in an inheritance hierarchy. Class Gadget (Base Class):
Private member: model_id (int).
Public parameterized constructor: Gadget(int id).
Public copy constructor: Gadget(const Gadget& other). This should print a
message like "Gadget copy constructor called." Public get_id() method (returns
int). Class Phone (Derived Class): Inherits from Gadget. Private member:
phone_number (string). Public parameterized constructor: Phone(int id, string
number). Public copy constructor: Phone(const Phone& other). This should print
"Phone copy constructor called." Public display() method that prints the
model_id and phone_number. Task: Implement both classes. Crucially, the Phone
copy constructor must explicitly call the Gadget copy constructor in its member
initializer list. If you don't, the base Gadget part will be default-constructed
(or fail to compile if Gadget has no default constructor). In main(), create an
initial Phone object. Create a new Phone object by copying the first one (e.g.,
Phone phone2 = phone1;). Call display() on the new copied object to verify all
data was copied correctly. Observe the console output to see the order in which
the constructors were called.
*/

#include <iostream>
#include <string>
using namespace std;

class Gadget {
 private:
  int model_id;

 public:
  Gadget(int id) { model_id = id; }
  Gadget(const Gadget& other) {
    cout << "Gadget copy constructor called." << endl;
    model_id = other.model_id;
  }
  int get_id() { return model_id; }
};

class Phone : public Gadget {
 private:
  string phone_number;

 public:
  Phone(int id, string number) : Gadget(id) { phone_number = number; }
  Phone(const Phone& other) : Gadget(other) {
    cout << "Phone copy constructor called." << endl;
    phone_number = other.phone_number;
  }
  void display() {
    cout << "Model ID : " << Gadget::get_id() << endl;
    cout << "Phone number : " << phone_number << endl;
  }
};

int main() {
  int id;
  string number;

  cout << "Enter details...." << endl;
  cout << "Model ID : ";
  cin >> id;
  cout << "Phone number : ";
  cin >> number;

  Phone p(id, number);
  cout << "Printing details...." << endl;
  p.display();
}

/* OUTPUT
Enter details....
Model ID : 172635
Phone number : 9064327588
Printing details....
Model ID : 172635
Phone number : 9064327588
*/
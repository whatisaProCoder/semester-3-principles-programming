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
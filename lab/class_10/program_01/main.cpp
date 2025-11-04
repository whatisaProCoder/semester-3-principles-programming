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

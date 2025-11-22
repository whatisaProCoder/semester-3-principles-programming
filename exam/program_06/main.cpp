/*
   Q: Consider a student management system which stores the result
      of the students of an institute. Develop a class Student
      wherein you will accept user input for roll number and marks
      of three subjects of a student and display the total marks
      and grade of the student.
      Grade Criteria:
        Total >= 80      → Grade A
        70 - 79          → Grade B
        60 - 69          → Grade C
        50 - 59          → Grade D
        Total < 50       → Fail
*/

#include <iostream>
using namespace std;

class Student {
 private:
  int roll;
  int m1, m2, m3;
  int total;
  char grade;

 public:
  // Function to input student details
  void input() {
    cout << "\nEnter Roll Number: ";
    cin >> roll;
    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;
  }

  // Function to calculate total and grade
  void calculate() {
    total = m1 + m2 + m3;

    if (total >= 80)
      grade = 'A';
    else if (total >= 70)
      grade = 'B';
    else if (total >= 60)
      grade = 'C';
    else if (total >= 50)
      grade = 'D';
    else
      grade = 'F';  // Fail
  }

  // Function to display student result
  void display() {
    cout << "\nRoll Number: " << roll;
    cout << "\nTotal Marks: " << total;
    cout << "\nGrade: " << grade << endl;
  }
};

int main() {
  Student s;

  s.input();
  s.calculate();
  s.display();

  return 0;
}

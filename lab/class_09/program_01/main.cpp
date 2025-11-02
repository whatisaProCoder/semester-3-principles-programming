/*
Create a class Book with private member variables title (string) and author
(string). Implement: A default constructor that initializes title to "Unknown"
and author to "Anonymous". A parameterized constructor that takes title and
author as arguments and initializes the member variables accordingly. A
display() method to print the book's title and author. In main(), create one
Book object using the default constructor and another using the parameterized
constructor, then display their details.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
 private:
  string title;
  string author;

 public:
  Book() {
    title = "Unknown";
    author = "Anonymous";
  }
  Book(string title, string author) {
    this->title = title;
    this->author = author;
  }
  void display() {
    cout << "Title : " << title << endl;
    cout << "Author : " << author << endl;
  }
};

int main() {
  Book a;

  string title, author;
  cout << "Enter title of book 2: ";
  getline(cin, title);
  cout << "Enter author of book 2: ";
  getline(cin, author);
  Book b(title, author);

  cout << "Book 1 :-" << endl;
  a.display();

  cout << "Book 2 :-" << endl;
  b.display();
}

/* OUTPUT
Enter title of book 2: Harry Potter
Enter author of book 2: Author1
Book 1 :-
Title : Unknown
Author : Anonymous
Book 2 :-
Title : Harry Potter
Author : Author1
*/
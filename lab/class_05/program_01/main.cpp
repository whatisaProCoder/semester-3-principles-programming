/* Create overloaded functions to manipulate strings : concatenation,
 * repetition, substring extraction, case conversion */

#include <ctype.h>

#include <cstring>
#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
 public:
  string concatenate(string s1, string s2);
  string concatenate(char a[], char b[]);
  string repeat(string s, int times);
  string repeat(char a[], int times);
  string substring(string s, int start, int length);
  string substring(char a[], int start, int length);
  string convertCase(string s, bool toUpper);
  string convertCase(char a[], bool toUpper);
};

string StringManipulator::concatenate(string s1, string s2) { return s1 + s2; }

string StringManipulator::concatenate(char a[], char b[]) {
  char temp[1000];
  strcpy(temp, a);
  strcat(temp, b);
  return string(temp);
}

string StringManipulator::repeat(string s, int times) {
  string result = "";
  for (int i = 0; i < times; i++) result += s;
  return result;
}

string StringManipulator::repeat(char a[], int times) {
  string result = "";
  for (int i = 0; i < times; i++) result += a;
  return result;
}

string StringManipulator::substring(string s, int start, int length) {
  return s.substr(start, length);
}

string StringManipulator::substring(char a[], int start, int length) {
  string s(a);
  return s.substr(start, length);
}

string StringManipulator::convertCase(string s, bool toUpper) {
  string result = s;
  for (char &c : result) c = (toUpper ? toupper(c) : tolower(c));
  return result;
}

string StringManipulator::convertCase(char a[], bool toUpper) {
  string result(a);
  for (char &c : result) c = (toUpper ? toupper(c) : tolower(c));
  return result;
}

int main() {
  char ca[] = "Hello";
  char cb[] = "World";

  string sa = "Hello";
  string sb = "World";

  StringManipulator op;

  cout << "Concatenation (string): " << op.concatenate(sa, sb) << endl;
  cout << "Concatenation (char[]): " << op.concatenate(ca, cb) << endl;

  cout << "Repetition (string): " << op.repeat(sa, 2) << endl;
  cout << "Repetition (char[]): " << op.repeat(ca, 2) << endl;

  cout << "Substring (string): " << op.substring(sa, 0, 4) << endl;
  cout << "Substring (char[]): " << op.substring(ca, 0, 4) << endl;

  cout << "Case conversion (string): " << op.convertCase(sa, true) << endl;
  cout << "Case conversion (char[]): " << op.convertCase(ca, false) << endl;

  return 0;
}

/* OUTPUT
Concatenation (string): HelloWorld
Concatenation (char[]): HelloWorld
Repetition (string): HelloHello
Repetition (char[]): HelloHello
Substring (string): Hell
Substring (char[]): Hell
Case conversion (string): HELLO
Case conversion (char[]): hello
*/

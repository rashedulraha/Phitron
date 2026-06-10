#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  string name;
  int roll;

  Student(string name, int roll) {
    this->name = name;
    this->roll = roll;
  };

  // function to print hello;
  void printHello(string name) {
    cout << "Hello"
         << " " << name << endl;
  }
};

int main() {
  Student rashed("Rashed", 32);
  cout << rashed.name << " " << rashed.roll << endl;

  rashed.printHello("rashed");
  return 0;
}
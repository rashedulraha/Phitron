#include <bits/stdc++.h>
using namespace std;

//* create class  with  constructor and not receive parameters
class MyClass {
public:
  MyClass() { cout << "Hello world" << endl; }
};

//* create class with constructor and  receive parameters;
class Car {
public:
  string brand;
  string model;
  int year;

  Car(string brand, string model, int year) {
    this->brand = brand;
    this->model = model;
    this->year = year;
  }
};

int main() {

  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  return 0;
}

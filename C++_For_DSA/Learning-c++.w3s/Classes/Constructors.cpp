#include <bits/stdc++.h>
using namespace std;

//* create class  with  constructor and not receive parameters
class MyClass {
public:
  MyClass() { cout << "Hello world" << endl; }
};

//* create class with constructor in inside  and  receive parameters;
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

//* create class  with constructor outside and receive parameters
class Mobile {
public:
  string model;
  int price;
  int year;
  Mobile(string model, int price, int year); // constructor declaration
};

Mobile::Mobile(string brand, int price, int year) {
  this->model = model;
  this->price = price;
  this->year = year;
}

int main() {

  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // call the outside the constructor
  Mobile myMobile("onePlus", 4000, 2023);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  // print outside the function
  cout << myMobile.model << " " << myMobile.price << " " << myMobile.year
       << "\n";

  return 0;
}

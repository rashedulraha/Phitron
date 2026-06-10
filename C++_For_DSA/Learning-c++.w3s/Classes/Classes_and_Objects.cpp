#include <bits/stdc++.h>
using namespace std;

class MyClass {
public: // access specifier
  string myName;
  string myString;
};

// create a car class with same attributes
class Car {
public:
  string brand;
  string model;
  int year;
};

int main() {
  // learning class and object

  // cout << "Hello class and object" << endl;

  // create an object
  // MyClass myObj;

  // myObj.myName = "Some text";
  // myObj.myString = "Some  more text";

  // print some text  with object

  // cout << myObj.myName << endl << myObj.myString << endl;

  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
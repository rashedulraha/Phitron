#include <bits/stdc++.h>
using namespace std;

/**'
 * inheritances
 * 1. multilevel inheritances
 * 2. multiple inheritances
 * 3. access specifier
 */

//  base class
class Vehicle {
public:
  string brand = "Ford";
  void hunk() { cout << "Tuut, tuut! \n"; };
};
// derived class
class Car : public Vehicle {
public:
  string model = "Mustang";
};

// * Multilevel Inheritance
class MyClass {
public:
  void myFunction() { cout << "some content in parent class"; };
};

class MYChild : public MyClass {};
class MYGrandChild : public MyClass {};

// * Inheritance Access
// Base class
class Employee {
protected: // Protected access specifier
  int salary;
};

class Programmer : public Employee {
public:
  int bonus;
  void setSalary(int salary) { this->salary = salary; }
  int getSalary() { return salary; }
};

// base class
class MyClass1 {
public:
  void myFunction() { cout << "Some content in parent class."; }
};

// another base class
class MyOtherClass {
public:
  void myOtherFunction() { cout << "Some content in another class."; }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {};

// * Inheritance Access

int main() {
  // Car myCar;
  // myCar.hunk();
  // cout << myCar.brand << " " << myCar.model;

  // multiple class
  MyChildClass obj;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Car {
  string brand;
  int year;
};

// void myFunction(Car c) { cout << "Brand" << c.brand << "Year" << c.year; }

// declare struct pass by references

void ChangeCarValue(Car &c) { c.year++; };
int main() {
  // pass by stucture

  Car myCar = {"BMW", 303};

  cout << myCar.brand << endl << myCar.year << endl;

  // myFunction(myCar);

  ChangeCarValue(myCar);
  cout << myCar.brand << endl << myCar.year << endl;

  return 0;
}
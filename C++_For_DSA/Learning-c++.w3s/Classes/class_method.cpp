#include <bits/stdc++.h>
using namespace std;

// class and method
class myClass {
public: // access specifier
  // inside method function;
  int myMethod(int x, int y) {
    int sum = x + y;
    return sum;
  }
  void method();
};

class Car {
public:
  int speed(int max_speed);
};
// define a method outsite the class
void myClass::method() { cout << "Hello world"; }
// define a method outsite the class with parameters
int Car::speed(int max_speed) { return max_speed; }

int main() {
  // learning class and method;
  myClass my_class;

  // my_class.myMethod(4, 6);
  // cout << my_class.myMethod(8, 5);

  // print the method
  // my_class.method();

  // print method with parameters;

  Car speed;
  int speedResult = speed.speed(200);
  cout << speedResult << endl;
  return 0;
}
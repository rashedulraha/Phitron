#include <bits/stdc++.h>
using namespace std;

// class and method

class myClass {
public:
  int myMethod(int x, int y) {
    int sum = x + y;
    return sum;
  }
};

int main() {
  // learning class and method;
  myClass my_class;

  my_class.myMethod(4, 6);
  // cout << my_class.myMethod(8, 5);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  // learning lambda

  auto message = []() { cout << "Hello world"; };
  // message();

  // calculate square
  auto square = [](int x, int y) { return x * y; };
  cout << square(3, 4) << endl;

  return 0;
}
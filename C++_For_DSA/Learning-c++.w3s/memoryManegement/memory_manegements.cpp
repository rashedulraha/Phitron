#include <bits/stdc++.h>
using namespace std;

int main() {
  // memory managements

  int myNumber = 10;

  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  cout << sizeof(myInt) << "\n";    // 4 bytes (typically)
  cout << sizeof(myFloat) << "\n";  // 4 bytes
  cout << sizeof(myDouble) << "\n"; // 8 bytes
  cout << sizeof(myChar) << "\n";   // 1 byte

  return 0;
}
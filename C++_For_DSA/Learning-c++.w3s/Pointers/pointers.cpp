#include <bits/stdc++.h>
using namespace std;

int main() {
  // * crate pointers

  string food = "Pizza";
  // *print actual value
  // cout << food << endl;
  // * print memory address ;
  // cout << &food;

  string *str = &food;
  // cout << *str;

  // print the actual value
  cout << food << endl;
  // print memory address
  cout << &food << endl;
  // print memory address
  cout << str << endl;

  return 0;
}
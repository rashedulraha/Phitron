#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Dereference";

  // get memory address and values
  string food = "Pizza";
  string *prt = &food;

  // print memory address
  cout << prt << endl;
  // print memory address to values
  cout << *prt << endl;

  //* dereferences

  *prt = "Hello";
  cout << *prt;

  return 0;
}
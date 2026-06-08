#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Modifed pointers";

  string food = "Pizza";
  string *ptr = &food;

  // cout << *ptr;

  // print food actual value
  // cout << food << endl;
  // cout << &food << endl;

  //* change the valuse using dereferences
  *ptr = "Hamburger";

  cout << *ptr << endl;
  cout << food << endl;

  return 0;
}
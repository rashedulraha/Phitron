#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Hello world References";

  // creating reference

  // string food = "Pizza";
  // string &meal = food;

  // meal = "Burger";

  // cout << meal << endl << food;

  //* memory address

  string food = "Pizza";
  cout << &food;
  string a = food;
  cout << a;

  return 0;
}
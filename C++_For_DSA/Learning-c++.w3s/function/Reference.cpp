#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

// pass string by references

void modifyString(string &std) { std += "world"; }
int main() {
  // pass by references

  int firstNumber = 10;
  int secondNumer = 20;

  // cout << firstNumber << endl << secondNumer << endl;

  // // swap the main values
  // swapNumbers(firstNumber, secondNumer);
  // cout << firstNumber << endl << secondNumer <<

  string name = "Hello ";
  modifyString(name);

  cout << name << endl;
  return 0;
}
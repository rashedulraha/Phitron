#include <bits/stdc++.h>
using namespace std;
void swapSum(int &x, int &y) { cout << x << y; };

int main() {
  //* pass by references

  int xValue = 34;
  int yValue = 80;
  swapSum(xValue, yValue);
  return 0;
}
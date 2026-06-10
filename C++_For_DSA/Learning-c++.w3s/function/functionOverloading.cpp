#include <bits/stdc++.h>
using namespace std;

//* with out function over loading
int plusFuncInt(int x, int y) { return x + y; }
int decrement(int x, int y) { return x - y; }

//* with function over loading
int myFunction(int x, int y) { return x + y; }
double myFunction(double x, double y) { return x + y; }

int main() {
  // function over loading

  // * with out function over loading
  plusFuncInt(4, 5);
  decrement(4, 6);

  //* with function over loading
  int result = myFunction(4, 5);
  double result2 = myFunction(4.6, 4.7);
  cout << result << endl;

  cout << result2 << endl;

  return 0;
}
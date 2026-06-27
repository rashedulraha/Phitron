#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  int sum = 0;

  // * using loop
  // for (int i = 1; i <= a; i++) {
  //   sum += i;
  // }

  //  using formula

  sum = (a * (a + 1) / 2);

  cout << sum;

  return 0;
}
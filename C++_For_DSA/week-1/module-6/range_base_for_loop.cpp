#include <bits/stdc++.h>
using namespace std;

int main() {
  //  range base for loop

  string s;
  cin >> s;

  //* using for loop function one
  // for (int i = 0; i < s.size(); i++) {
  //   cout << s[i] << endl;
  // }

  // * using for loop second way

  for (char c : s) {
    cout << c << endl;
  }

  return 0;
}
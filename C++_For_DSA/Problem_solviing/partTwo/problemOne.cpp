#include <bits/stdc++.h>
using namespace std;

int main() {

  // cout << "Hello world";

  string s;
  cin >> s;

  // find x
  int idx = s.find('X');

  if (idx != -1) {
    s.replace(idx, 1, " ");
  }

  cout << s << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "HEllo";
  cout << s.size() << endl;
  // cout << s.max_size() << endl;
  // cout << s.capacity() << endl;

  // s.clear();
  // cout << s << endl;

  // cout << s.empty() << endl;

  // if (s.empty()) {
  //   cout << "Empty" << endl;
  // } else {
  //   cout << "Not Empty" << endl;
  // }

  // resize value
  s.resize(15, 'e');
  cout << s << endl;

  //! clear function;

  return 0;
}
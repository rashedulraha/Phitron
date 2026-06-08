#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Hello string constructor";

  // *method one
  string s1 = "Hello";
  //* method two
  string s2("Hello world");
  //* method three
  string nothing("Hello world", 4);
  // cout << s1 << endl << s2 << endl;

  // resize string values
  string s = "Hello world";
  string t(s, 4);
  cout << t << endl;

  // create string with string constructor
  string r(20, 'H');
  cout << r << endl;

  cout << nothing << endl;
  return 0;
}
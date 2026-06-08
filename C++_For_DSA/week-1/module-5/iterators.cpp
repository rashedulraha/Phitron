#include <bits/stdc++.h>
using namespace std;

int main() {
  string world = "Hello";

  // for (int i = 0; i < world.size(); i++) {
  //   cout << world[i] << endl;
  // }

  // cout << *world.begin() << endl;
  // cout << *(world.end() - 1) << endl;

  // * string iterator

  string s = "Hello world";
  for (auto it = s.begin(); it < s.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  // learning string stream
  string s;
  getline(cin, s);
  cout << s << endl;
  stringstream ss(s);

  string world;

  // ss >> world;
  // cout << world << endl;

  // ss >> world;
  // cout << world << endl;

  // print world using while loop

  int count = 0;

  while (ss >> world) {
    cout << world << endl;
    count++;
  }

  cout << count << " "
       << "Word" << endl;

  return 0;
}
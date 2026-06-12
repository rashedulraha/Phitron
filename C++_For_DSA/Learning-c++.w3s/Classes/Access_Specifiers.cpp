#include <bits/stdc++.h>
using namespace std;

// public and private access modifier
class myClass {
public:
  int x = 3;

private:
  int y = 5;
};

int main() {
  // learning access modifier

  myClass my_class;

  cout << my_class.x;

  return 0;
}
#include <iostream>
using namespace std;

void func(int a, int b) {

  cout << a << " "
       << "+"
       << " " << b << " "
       << "="
       << " " << a + b << endl;
  cout << a << " "
       << "*"
       << " " << b << " "
       << "="
       << " " << a * b << endl;

  if (a > b) {
    cout << a << " "
         << "-"
         << " " << b << " "
         << "="
         << " " << a - b << endl;

  } else {
    cout << "subtraction failed";
  }
}
int main() {
  func(9, 4);
  return 0;
}
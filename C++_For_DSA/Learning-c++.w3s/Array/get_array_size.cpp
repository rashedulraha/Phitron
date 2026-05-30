#include <iostream>
using namespace std;

int main() {
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // cout << sizeof(myNumbers) / sizeof(myNumbers[0]);

  //* Loop Through an Array with sizeof();
  // int myNumbers[5] = {10, 20, 30, 40, 50};
  // for (int i = 0; i < 5; i++) {
  //   cout << myNumbers[i] << "\n";
  // }

  //* It is better to write:

  // int myNumbers[] = {10, 20, 30, 40, 50};
  // for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
  //   cout << myNumbers[i] << endl;
  // }

  int myNumbers[5] = {10, 20, 30, 40, 50};

  // for (int num : myNumbers) {
  //   cout << num << endl;
  // }

  return 0;
}
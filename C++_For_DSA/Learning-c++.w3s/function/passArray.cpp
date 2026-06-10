#include <bits/stdc++.h>
using namespace std;

void myFunctoin(int numberArray[5]) {
  for (int i = 0; i < 5; i++) {
    cout << numberArray[i] << endl;
  }
}

int main() {
  // pass by array as a  function parameters
  int myNumbers[5] = {10, 20, 30, 40, 50};

  myFunctoin(myNumbers);
  return 0;
}
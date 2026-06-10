#include <bits/stdc++.h>
using namespace std;

int main() {
  // reverse function

  int arraySize;
  cin >> arraySize;

  int arrayInput[arraySize];

  for (int i = 0; i < arraySize; i++) {
    cin >> arrayInput[i];
  }

  for (int i = 0; i < arraySize; i++) {
    cout << arrayInput[i];
  }

  return 0;
}
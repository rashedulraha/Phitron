#include <bits/stdc++.h>
using namespace std;

void countdown(int countNumber) {
  if (countNumber > 0) {
    cout << "Print 0";
    return;
  }
  countdown(countNumber - 1);
}

int main() {
  //* learning recursion

  countdown(5);

  return 0;
}
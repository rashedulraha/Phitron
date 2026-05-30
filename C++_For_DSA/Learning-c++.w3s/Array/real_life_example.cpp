#include <iostream>
using namespace std;

int main() {
  // get the avarage age in this array  ;
  int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
  float sum, avg;

  int length = sizeof(ages) / sizeof(ages[0]);

  for (int age : ages) {
    sum += age;
  }

  avg = sum / length;
  // cout << avg << endl;

  // * print min age  ;

  int minAge = ages[0];

  for (int age : ages) {
    if (minAge > age) {
      minAge = age;
    }
  }

  cout << minAge;

  // cout << sum << endl;
  return 0;
}
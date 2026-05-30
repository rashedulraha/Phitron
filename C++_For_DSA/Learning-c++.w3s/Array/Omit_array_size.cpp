#include <iostream>
#include <vector>
using namespace std;

int main() {
  // string cars[0];
  // cars[0] = "Volvo";

  // cout << cars[0];

  // string cars[3] = {"Volvo", "BMW", "Ford"};
  // cars[3] = "Tesla";
  // for (int i = 0; i < 3; i++) {
  //   cout << cars[i];
  // }

  // for (string c : cars) {
  //   cout << c << endl;
  // }

  // *
  // string cars[3] = {"Volvo", "BMW", "Ford"};

  vector<string> cars = {"Volvo", "BMW", "Ford"};

  for (string car : cars) {
    cout << car << endl;
  }

  cars.push_back("Hello");
  for (string car : cars) {
    cout << car << endl;
  }

  // cout << cars[1];
  return 0;
}
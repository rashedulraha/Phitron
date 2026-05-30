#include <iostream>
using namespace std;
int main() {

  // string cars[4];
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  int myNumber[4] = {4, 5, 6, 6};

  cout << cars[2] << endl;
  cars[2] = "Raha";
  cout << cars[2];

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

//* function with out default paramiters
void printName(string fName) { cout << "Hello : " << fName << endl; }

//* function with default paramiters
void printNameDefault(string fName = "Guest") {
  cout << "Name : " << fName << endl;
}

//* Multiple Parameters
void multipleParameters(string name, int age) {
  cout << "Your name is : " << name << endl << "your age is : " << age << endl;
};

//* return function

int sumValue(int a, int b) {
  int sum = a + b;
  return sum;
}

int main() {
  // function Parameters

  // call function with name to print
  // printName("Rashedul");
  // printName("Rumman");

  // printNameDefault();

  //* call multiple parameters

  // multipleParameters("Rabiul", 33);

  // * call return sum values to print

  // cout << sumValue(4, 5) << endl;
  // * retrun  and store the values

  int sumStore = sumValue(45, 7);

  cout << sumStore << endl;

  return 0;
}
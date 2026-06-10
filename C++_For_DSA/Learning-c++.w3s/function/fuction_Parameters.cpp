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

//* pass by value
void consoleLog(string name) { cout << name << endl; }
//* return function
// * pass by references
void changeValue(int &num) { num = 48; }

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

  // int sumStore = sumValue(45, 7);

  // cout << sumStore << endl;

  // pass by value to print
  // consoleLog("Hello");

  // pass by references
  int value = 10;
  changeValue(value);
  cout << value << endl;
  return 0;
}
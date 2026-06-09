#include <bits/stdc++.h>
using namespace std;

//* learning paramiter and arguments
void myFunction(string name, int age, double gpa) {
  cout << name << endl << age << endl << gpa << endl;
  cout << endl;
}

//* default paramiters
void defaultValue(string name = "Rashedul") { cout << name << endl; }

//* multiples paramiters
void multipleParamiters(string name, int age, double gpa) {
  cout << name << endl << age << endl << gpa << endl;
  cout << endl;
}

//* return types in single paramiters
int calculate(int calculate) { return 5 + calculate; }

// * retrun types in a multiples paramiters
string helloWithName(string name) {
  string s = "Hello";
  string return_string = s + name;
  return return_string;
};

string helloNameReturn(const string &name) { return "Hello " + name; }
int doubleGame(int x) { return x * 2; }

int main() {
  //* single
  // defaultValue("Rumman");

  //* multiples
  // multipleParamiters("Rashedul", 34, 4.4);

  //* rerun function
  // int FNumber = calculate(4);
  // cout << &FNumber << endl;

  //* hello print
  // string name = helloWithName("Rashedul");
  // cout << name << endl;

  // cout << helloNameReturn("Rashedul");

  //* double of i print
  for (int i = 1; i <= 5; i++) {
    cout << "Double of " << i << " is " << doubleGame(i) << endl;
  }
  return 0;
}
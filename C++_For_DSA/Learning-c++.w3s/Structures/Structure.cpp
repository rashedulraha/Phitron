#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Hello world";

  // * learning Structure

  struct {

    int myNumber;
    string myString;
  } myStruct;

  myStruct.myNumber = 2;
  myStruct.myString = "Hello world";

  // cout << myStruct.myNumber << endl;
  // cout << myStruct.myString << endl;

  // create multiple user store struct

  struct {
    string name;
    int age;
    string DateOfBirth;
  } userOne, userTwo, Userthree;
  // *create first user ;
  userOne.name = "Rashedul";
  userOne.age = 45;
  userOne.DateOfBirth = "11/12/2004";

  //* create second suer
  userTwo.name = "Romman";
  userTwo.age = 34;
  Userthree.DateOfBirth = "11/12/2003";

  // * create user three
  Userthree.name = "Shafi";
  userTwo.age = 32;
  Userthree.DateOfBirth = "11/12/2005";

  // print any user in this case

  cout << userOne.name << endl
       << userTwo.name << endl
       << Userthree.name << endl;

  return 0;
}
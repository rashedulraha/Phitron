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

  // cout << userOne.name << endl
  //      << userTwo.name << endl
  //      << Userthree.name << endl;

  // named structured
  // struct studentData {
  //   string name;
  //   int className;
  //   int roll;
  //   double gpa;
  // };

  // complete Challenge Task ;

  struct {
    string name;
    int age;
    char grade;
  } student;

  student.name = "Nothing";
  student.age = 45;
  student.grade = 'A';

  // print the value to the screen ;

  cout << student.name << student.age << student.grade << endl;

  return 0;
}
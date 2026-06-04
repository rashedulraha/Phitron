#include <iostream>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int age, double gpa)
  {
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

int main()
{
  // * create static object
  // Student rahim(34, 43, 4.6);

  // * create dynamic object
  Student *karim = new Student(4, 3, 34.5);

  // de refer to print
  // cout << (*karim).cls << endl
  //      << (*karim).gpa << endl
  //      << (*karim).roll;

  //*  manual  call
  cout << karim->roll << endl
       << karim->cls << endl
       << karim->gpa;

  return 0;
}
#include <iostream>
using namespace std;

class Student {
public:
  int roll;
  int cls;
  double gpa;

  Student(int r, int c, double g) {
    roll = r;
    cls = c;
    gpa = g;
  }
};

int main() {
  // cout << "Hello";
  Student Rashed(3, 5, 6.6);
  // Student karim;

  // print using cout ;
  cout << Rashed;
  // cout << Rashed.roll << endl << Rashed.cls << endl << Rashed.gpa << endl;
  // cout << karim.roll << endl << karim.cls << endl << karim.gpa << endl;

  return 0;
}
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int age;
    double gpa;

    Student(int r, int a, double g)
    {
        roll = r;
        age = a;
        gpa = g;
    };
};

int main()
{
    // constructor
    Student karim(43, 3, 4.4);

    cout << karim.roll << endl
         << karim.age << endl
         << karim.gpa << endl;

    return 0;
}
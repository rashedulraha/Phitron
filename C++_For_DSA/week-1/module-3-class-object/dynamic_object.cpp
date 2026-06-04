#include <iostream>
using namespace std;

//* cls create object
class Person
{
public:
  int age;
  string status;

  Person(int age, string status)
  {
    this->age = age;
    this->status = status;
  }
};

//* create function return void ;
Person create_person_name()
{
  Person meherin(0, "single");
  // cout << "print name :  meherin ";
  return meherin;
}
int main()
{

  // call create  person name
  Person meherin = create_person_name();
  cout << meherin.age << endl
       << meherin.status << endl;

  // cout << meherin.age << endl
  //      << meherin.status << endl;

  return 0;
}
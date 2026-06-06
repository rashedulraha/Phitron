#include <iostream>
using namespace std;

int main()
{
  string someValue;
  string someTwo;

  getline(cin, someValue);
  cin.ignore();
  getline(cin, someTwo);

  cout << someValue;

  return 0;
}
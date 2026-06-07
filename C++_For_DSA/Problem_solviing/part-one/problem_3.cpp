#include <iostream>
using namespace std;

int main()
{
  string someValue;
  string someTwo;

  getline(cin, someValue);
  getline(cin, someTwo);

  cout << "First line: " << someValue << endl;
  cout << "Second line: " << someTwo << endl;

  return 0;
}
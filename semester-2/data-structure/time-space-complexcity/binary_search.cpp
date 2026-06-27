#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int array[b];

  for (int x = 1; x <= b; x++)
  {

    cin >> array[x];
  }

  for (int x = 1; x <= b; x++)
  {

    cout << array[x];
  }

  cout << a << " " << b;

  return 0;
}

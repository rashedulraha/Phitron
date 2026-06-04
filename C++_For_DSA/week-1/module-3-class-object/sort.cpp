#include <iostream>
using namespace std;

int main()
{

  int a;

  cin >> a;
  cout << a << endl;

  int arr[a];
  for (int i = 0; i < a; i++)
  {
    cin >> arr[i];
  };

  // sort(a, a + 5);
  //* ascending
  sort(arr, arr + a);
  //* descending
  sort(arr, arr + a, greater<int>());
  for (int i = 0; i < a; i++)
  {
    cout << arr[i] << endl;
  };

  return 0;
}
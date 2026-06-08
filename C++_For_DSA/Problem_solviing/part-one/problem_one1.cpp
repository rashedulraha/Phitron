#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int inputArray;
  cin >> inputArray;

  // cout << inputArray;

  // input some array ;

  int inputArraySome[inputArray];

  for (int i = 0; i < inputArray; i++)
  {
    cin >> inputArraySome[i];
  }

  // ascending to descending oder print value

  sort(inputArraySome, inputArraySome + inputArray);

  // print some values
  for (int i = 0; i < inputArray; i++)
  {
    cout << inputArraySome[i] << " ";
  };

  cout << endl;
  sort(inputArraySome, inputArraySome + inputArray, greater<int>());
  for (int i = 0; i < inputArray; i++)
  {
    cout << inputArraySome[i] << " ";
  }

  return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int arraySize;
  cin >> arraySize;
  // cout << arraySize;

  // input random array;

  int inputArray[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    cin >> inputArray[i];
  }

  //* sorting array ascending order to descending order
  sort(inputArray, inputArray + arraySize);

  // print random array ;

  for (int i = 0; i < arraySize; i++)
  {
    cout << inputArray[i] << " ";
  }
  cout << endl;

  sort(inputArray, inputArray + arraySize, greater<int>());

  for (int i = 0; i < arraySize; i++)
  {
    cout << inputArray[i] << " ";
  }

  return 0;
}
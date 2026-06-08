#include <iostream>
#include <algorithm>
using namespace std;

int *sort_it(int arraySize)
{
  //* static memory
  // int arraySomeInput[arraySize];
  // * dynamic memory  using heap
  int *arraySomeInput = new int[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    cin >> arraySomeInput[i];
  }
  // for (int i = 0; i < arraySize; i++)
  // {
  //   cout << arraySomeInput[i] << " ";
  // }
  sort(arraySomeInput, arraySomeInput + arraySize, greater<int>());

  return arraySomeInput;
};

int main()
{

  int arraySize;
  cin >> arraySize;

  int *myarray = sort_it(arraySize);

  for (int i = 0; i < arraySize; i++)
  {
    cout << myarray[i] << " ";
  }

  return 0;
}
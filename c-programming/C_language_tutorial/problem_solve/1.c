#include <stdio.h>

int main()
{
  int myArray[] = {4, 6, 7, 7, 8, 9, 5, 3, 4, 1};

  // problem find the minimum number

  // first get array size
  int length = sizeof(myArray) / sizeof(myArray[0]);

  int tempValue = myArray[0];

  for (int i = 0; i < length; i++)
  {
    if (tempValue < myArray[i])
    {
      tempValue = myArray[i];
    }
  }

  printf("%d", tempValue);
  return 0;
}
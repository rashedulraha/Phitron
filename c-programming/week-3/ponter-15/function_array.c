#include <stdio.h>

void func(int x[])
{
  // x = 5;
  x[0] = 300;
  // printf("%d\n", x);
}
int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  // int x = 60;

  func(arr);
  // printf("%d", x);

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }
  return 0;
}
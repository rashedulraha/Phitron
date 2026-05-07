#include <stdio.h>

int main()
{
  int arr[5] = {4, 5, 6, 7, 8};

  *(arr + 1) = 100;

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }
  // printf("%p\n", &arr[0]);
  // printf("%p\n", &arr[1]);
  // printf("%p\n", &arr[2]);
  // printf("%p\n", &arr[3]);
  // printf("%p\n", &arr[4]);

  printf("%p\n", &arr[0]);
  printf("%p", *arr + 1);
  return 0;
}
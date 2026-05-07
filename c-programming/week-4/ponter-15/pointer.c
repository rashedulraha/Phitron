#include <stdio.h>

int main()
{
  int x = 10;

  printf("%d\n", x);
  // printf("%p\n", &x);

  // int *pointer;
  // pointer = &x;

  int *pointer;
  pointer = &x;

  *pointer = 499;

  printf("%p\n", pointer);
  printf("%d\n", x);
  return 0;
}
#include <stdio.h>

void func(int *pointer)
{

  *pointer = 34;
}

int main()
{

  int x = 39;
  func(&x);
  printf("%d", x);
  return 0;
}
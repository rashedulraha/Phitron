#include <stdio.h>

void func(int x)
{
  x = 10;
  printf("func function of x location: %p\n", &x);
}

int main()
{
  int x = 10;
  func(x);
  // printf("%d", x);
  printf("main function of x location : %p\n", &x);
  return 0;
}
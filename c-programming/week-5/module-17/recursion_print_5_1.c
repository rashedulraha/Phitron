#include <stdio.h>

void hello(int i)
{
  if (i == 0)
  {
    return;
  }
  printf("%d", i);
  hello(i - 1);
}
int main()
{

  int i = 5;

  hello(i);
  printf("recursion print 5 to 1");
  return 0;
}

// for(start,stop,step) / for(starting,stoping,increment/decrement);
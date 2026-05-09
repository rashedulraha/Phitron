#include <stdio.h>

void hello(int i)
{
  if (i == 5)
  {
    return;
  }
  hello(i + 1);
  printf("%d", i);
}
int main()
{

  int i = 1;

  hello(i);
  printf("recursion print 5 to 1");
  return 0;
}

// for(start,stop,step) / for(starting,stoping,increment/decrement);

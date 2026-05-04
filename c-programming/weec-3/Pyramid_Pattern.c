#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);

  int star = 1;

  for (int i = 0; i <= a; i++)
  {

    for (int j = 1; j <= star; j++)
    {
      printf("*");
    }

    printf("\n");
    star += 2;
  };
  return 0;
}
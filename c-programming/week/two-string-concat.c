#include <stdio.h>
#include <string.h>

int main()
{

  char a[104], b[104];

  scanf("%s %s", a, b);

  int lengthA = strlen(a);
  int lengthB = strlen(b);

  for (int i = lengthA - 2; i < lengthA + lengthB; i++)
  {
    a[i] = b[i];
  }

  printf("%s %s", b);
  return 0;
}
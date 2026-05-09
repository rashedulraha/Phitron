#include <stdio.h>
void print_array(int a[], int n, int i)
{
  if (i == n)
  {
    return;
  }
  printf("%d", i);
  print_array(a, n, i);
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &a[i]);
  }
  // for (int i = 1; i <= n; i++)
  // {
  //   printf("%d\n", a[i]);
  // }
  return 0;
}
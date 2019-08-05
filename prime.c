#include <stdio.h>
#include <conio.h>
int main()
{
  /* code */
  int x, y, t;
  printf("Enter the number upto the last prime number you want:");
  scanf("%d", &t);
  for (x = 1; x <= t; x++)
  {
    for (y = 2; y <= x; y++)
    {
      if (x%y ==0)
      break;
      }
      if (x==y)
      printf("%d\t", y);
    }
  return 0;
}

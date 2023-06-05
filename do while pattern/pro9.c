#include <stdio.h>
int main()
{
  int i=1, j,z=11;
 while (i<=5)
  {
    j=1;
    while (j<=i)
      z+=5;
    {
      printf("\t %d",z++);
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
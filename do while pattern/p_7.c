#include <stdio.h>
int main()
{
  int i=1, j,z;
 while (i<=6)
  {
    j=1;
    while (j<=i)
    {
      printf("\t %d", z+=1);
      j++;
    }
    printf("\n", j);
    i++;
  }
  return 0;
}

/* output :-
         1
         2       3
         4       5       6
         7       8       9       10
         11      12      13      14      15
         16      17      18      19      20      21
*/
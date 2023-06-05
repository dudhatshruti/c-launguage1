#include <stdio.h>
int main()
{
  int i=1, j;
 while (i<=5)
  {
    j=1;
    while (j<=i)
    {
      printf("\t %d", i);
      j++;
    }
    printf("\n", j);
    i++;
  }
  return 0;
}
/* output :-
         1
         2       2
         3       3       3
         4       4       4       4
         5       5       5       5       5
*/
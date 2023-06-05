#include<stdio.h>
int main()
{
    int n,i;
    printf("n:");
    scanf("%d",&n);
    i=-n;
    while (i<=n)
    {
        printf("\t %d",i);
        i++;
    }
    return 0;
}
/* output :-
 -12     -11     -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
  3       4       5       6       7       8       9       10      11      12
*/

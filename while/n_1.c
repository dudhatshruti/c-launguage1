#include<stdio.h>
int main()
{
    int n,i;
    printf("n:");
    scanf("%d",&n);
    i=n;
    do
    {
        printf("\t %d",i);
        i--;
    }
    while (i>=1);
    return 0;
}

/* output :-
n:15
        15      14      13      12      11      10      9       8       7       6       5       4       3       2       1
*/


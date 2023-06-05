#include<stdio.h>
int main()
{
    int n,i=1;
    printf("n:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("\t %d",i++);
    }
}

/*output :-
n:12

   1       2       3       4       5       6       7       8       9       10      11      12
*/
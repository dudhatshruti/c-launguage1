#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=9; i+=2)
    {
        for ( j = 1; j <=i; j+=2)
        {
            printf("\t %d",i);
        }
        printf("\n",j);
    }
    return 0;
}
/*output :-
         1
         3       3
         5       5       5
         7       7       7       7
         9       9       9       9       9
*/
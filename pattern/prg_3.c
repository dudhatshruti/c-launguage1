#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("\t %d",j);
        }
        printf("\n",i); 
    }
}

/*output :-
         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5
*/
#include<stdio.h>
int main()
{
    int i,j;
    for (i=2; i<=10; i=i+2)
    {
        for (j=2; j<=i; j=j+2)
        {
            printf("\t %d",i);
        }
        printf("\n");
    }
    
}

/*output:-
         2
         4       4
         6       6       6
         8       8       8       8
         10      10      10      10      10
*/
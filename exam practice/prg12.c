#include<stdio.h>
int main()
{
    int i,j;
    for (i='A'; i<='E'; i++ )
    {
        for (j='A'; j<=i; j++)
        {
            printf("\t %c",i);
        }
        printf("\n");
    } 
}

/*output :-
         A
         B       B
         C       C       C
         D       D       D       D
         E       E       E       E       E
*/
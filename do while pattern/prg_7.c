#include <stdio.h>
int main()
{
    int i = 1,j,z;
    while (i<=5){
        j=1;
        while (j<=5)
        {
            printf("\t %d",z+=1);
            j++;
        }
        printf("\n");
        i++;   
    }
}

/* output :-
         1       2       3       4       5
         6       7       8       9       10
         11      12      13      14      15
         16      17      18      19      20
         21      22      23      24      25
*/
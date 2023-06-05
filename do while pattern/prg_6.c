#include<stdio.h>
int main()
{
    int i=1,j;
    do{
        j=1;
        do{
            printf("\t %d",i);
            j+=2;
        }
        while (j<=9);
        printf("\n");
        i+=2;  
    }
    while (i<=9);
   return 0;
}
/* output :-
         1       1       1       1       1
         3       3       3       3       3
         5       5       5       5       5
         7       7       7       7       7
         9       9       9       9       9
*/
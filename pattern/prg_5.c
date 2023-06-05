#include<stdio.h>
int main()
{
    int i,j;
    for(i=2; i<=10; i=i+2)
    {
        for(j=2; j<=10; j=j+2)
        {
            printf("\t %d",i);
        }
        printf("\n",j); 
    }
}
/*output :-
         2       2       2       2       2 
         4       4       4       4       4 
         6       6       6       6       6 
         8       8       8       8       8 
         10      10      10      10      10
*/
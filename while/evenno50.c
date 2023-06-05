#include<stdio.h>
int main()
{
    int i;
    i=2;
    while (i<=50)
    {
        printf("\t %d",i);
        i=i+2;
    }
    return 0; 
}
/* output :-
   2       4       6       8       10      12      14      16      18      20      22      24      26      28
   30      32      34      36      38      40      42      44      46      48      50
*/
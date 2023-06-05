#include<stdio.h>
int main()
{
    char z='A';
    int i,j;
    for(i='A'; i<='F'; i++)
    {
        for ( j = 'A'; j <=i; j++)
        {
            printf("\t %c",z++);
        }
        printf("\n",j);
    }
    return 0;
}

/* output :-
         A
         B       C
         D       E       F
         G       H       I       J
         K       L       M       N       O
         P       Q       R       S       T       U
*/
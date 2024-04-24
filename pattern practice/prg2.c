#include<stdio.h>
int main()
{
    int i,j,n='A';
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
        {
            if (i%2==1)
                printf(" %c",n);
            else
                printf(" %c",n+32);
            n++;
        }
        printf("\n");
    }
}

/*
 A
 b c
 D E F
 g h i j
 K L M N O
*/
// relational operator //

#include<stdio.h>
int main()
{
    int a=100;
    printf("\n %d",a>100);
    printf("\n %d",a>=100);
    printf("\n %d",a>=101);

    printf("\n %d",a<100);
    printf("\n %d",a<=100);
    printf("\n %d",a<=101);

     printf("\n %d",a==100);
    printf("\n %d",a==101);
    printf("\n %d",a==99);
}

/*
 0
 1
 0
 0
 1
 1
 1
 0
 0
*/
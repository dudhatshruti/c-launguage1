// ladder if //

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    printf("c:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("\n a(%d) is largest..",a);
    }
    else if(b>c)
    {
         printf("\n b(%d) is largest...",b);
    }
    else if(c>a)
    {
         printf("\n c(%d) is largest...",c);   
    }
}
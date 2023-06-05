//  logical operator   //        
    // nested if //    

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
        printf("\na(%d) is largest..",a);
    }
    else
    {
        if(b>c)
        {
            printf("\n b(%d) is largest...",b);
        }
        else
        {
            printf("\n c(%d) is largest...",c);
        }
    }
    return 0;


}

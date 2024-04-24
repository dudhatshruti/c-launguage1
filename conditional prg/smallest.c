//  conditional statment //

// 1. enter two value find smallest //

#include<stdio.h>
int main()
{
    int a,b;
    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    if(a<b){
        printf("\n a is Smllest:%d",a);
    }
    else{
        printf("\n b is smallest:%d",b);
    }
}


/*  output :-

a:76
b:23

 b is smallest:23
 
*/
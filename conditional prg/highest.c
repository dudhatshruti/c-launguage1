// 1. enter two value find highest value //

#include<stdio.h>
int main()
{
    int a,b;
    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    if(a>b){
    printf("\n a is highest value:%d",a);
    }
    else{
        printf("\n highest value is:%d",b);
    }
}

/* output :-

a:79
b:90

 highest value is:90   
 
*/
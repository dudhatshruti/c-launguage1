//  2.take two numbers and prints their square and cube //
      //using scan function //

#include<stdio.h>
int main()
{
    int a,b,square,cube;
    printf("a:");
    scanf("%d",&a);
    square = a*a;
    printf("square of a = %d",square);

    cube=a*a*a;
    printf("\ncube of a = %d",cube);


    printf("\nb:");
    scanf("\n%d",&b);
    square = b*b;
    printf("square of b = %d",square);
   
    cube=b*b*b;
    printf("\ncube of b = %d",cube);
    return 0;
}

/* output :- 

a:6
square of a = 36
cube of a = 216 

b:8
square of b = 64       
cube of b = 512    

*/
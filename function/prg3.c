/* with argument   no return */

#include<stdio.h>
int square( int n, int m){
int a;
a= n*m;
printf("answer is:%d",a);
}
int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    square(x, 10);
}

/* output :-
    enter number:20
    answer is:200
*/
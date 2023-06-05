#include<stdio.h>
int main()
{
    float a,c,b,s;
    printf("a:");
    scanf("%f",&a);

    printf("c:");
    scanf("%f",&c);

    printf("b:");
    scanf("%f",&b);

    s=((4*a+c)-2*a*b)/100;
    printf("s:=%f",s);
}

/* output :-

a:23
c:30
b:5
s:=-1.080000

*/
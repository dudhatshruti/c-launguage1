// 8.verify the formula s=((4*a+c)-2*a*b)/100 //

#include<stdio.h>
int main()
{
    float a=23,c=30,b=5,s;
    s=((4*a+c)-2*a*b)/100;
    printf("s=%f",s);
    return 0;
}

/* output :- -1.080000 */
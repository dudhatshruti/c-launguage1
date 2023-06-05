#include<stdio.h>
int main()
{
    float p=1000,r=8,n=3,a;
    a=p*(1+(r/100)/n)-p;
    printf("\np*(1+(r/100)/n)-p=%f",a);
    return 0;
}
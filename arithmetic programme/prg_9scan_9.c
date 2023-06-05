//verify the formula a=p*(1+(r/100)/n)-p //
      //using scanf function//

#include<stdio.h>
int main()
{
    float  p,r,n,a;
    printf("p:");
    scanf("%f",&p);

    printf("r:");
    scanf("%f",&r);

     printf("n:");
    scanf("%f",&n);

    a=p*(1+(r/100)/n)-p;
    printf("a=%f",a);
}

/* output :-

p:1000
r:8
n:3
a=26.666666

*/
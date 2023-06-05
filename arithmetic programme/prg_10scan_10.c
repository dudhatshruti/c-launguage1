// verify the formula t=((v+s)+(1-m)*1) //
    //using scanf function //

#include<stdio.h>
int main()
{
    float v,s,m,t;
    printf("v:");
    scanf("%f",&v);

    printf("s:");
    scanf("%f",&s);

    printf("m:");
    scanf("%f",&m);

    t=((v+s)+(1-m)*1);
    printf("t=%f",t);

}

/* output :-

v:10
s:55
m:18
t=48.000000

*/
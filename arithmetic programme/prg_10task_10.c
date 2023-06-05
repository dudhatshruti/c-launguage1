// 10.verify the formula t=((v+s)+(1-m)*1) //

#include<stdio.h>
int main()
{
    int v=10,s=55,m=18,t;
    t=((v+s)+(1-m)*1);
    printf("t=%d",t);
    return 0;
}

/* output :- t=48  */
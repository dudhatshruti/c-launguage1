 // 3.verify the formula of simple interest //
   //using scanf function //
     


#include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("p:");
    scanf("%f",&p);
    printf("t:");
    scanf("%f",&t);
    printf("r:");
    scanf("%f",&r);
    SI=p*t*r/100;
    printf("SI:%f",SI);  
}

/* output :- 

p:34
t:52
r:10
SI:176.800003

*/
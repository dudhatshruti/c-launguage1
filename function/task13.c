#include<stdio.h>
void thirty()
{
    int a,b,c;
    printf("enter a: b:");
    scanf("%d %d",&a,&b);

    c=(a+b)*(a+b);
    printf("area of circle = %d",c);
}
int main()
{
    thirty();
}

/* output :-
enter a: b:18
22
area of circle = 1600
*/
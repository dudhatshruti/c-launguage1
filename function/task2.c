#include<stdio.h>
int second()
{
    int a,square;
    printf("enter a:");
    scanf("%d",&a);
   
    square=a*a;

    return square;

}
int second1()
{
    int a,qube;
    printf("enter a:");
    scanf("%d",&a);
   
    qube=a*a*a;

    return qube;

}
int main()
{
    int x;
    x=second();
    printf("square a:%d \n",x);

    int y;
    y=second1();
    printf("qube a:%d",y);
}
 
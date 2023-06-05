#include<stdio.h>
int main()
{
    int a=20, *p,**q;
    p= &a;
    q=&p;
    printf("value of p is:%d",a);
    printf("\n address of a:%u",&a);
    printf("\n address of a using p: %d",p);
    printf("\n address of p using q:%d",q);
    printf("\n value of a using q:%d",**q);

}
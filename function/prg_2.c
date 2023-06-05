/* no argument  with return */

#include<stdio.h>
int add(){
    int a,b,c;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}
int main()
{
    int x;
    x=add();
    printf("addition a and b:%d",x);

}
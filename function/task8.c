#include<stdio.h>
int eight(){
    float a,c,b,s;
    printf("enter a: c: b:");
    scanf("%f %f %f",&a,&c,&b);
    s=((4*a+c)-2*a*b)/100;
    return s;
}
int main()
{
    int x;
    x=eight();
    printf("answer is:%f",x);

}

/* output :-

*/
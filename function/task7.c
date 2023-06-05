#include<stdio.h>
void seven()
{
    float k,a,x;
    printf("enter k: a:");
    scanf("%f %f",&k,&a);
    x=((k-4)*(a*4)/100);
    printf("x= %f",x);
}
int main()
{
    seven();
}
/* output :-
enter k: a:40
12
x= 17.280001
*/
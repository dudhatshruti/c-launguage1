#include<stdio.h>
void nine()
{
    float p,r,n,a;
    printf("enter p:r:n");
    scanf("%f %f %f",&p,&r,&n);

    a=p*(1+(r/100)/n)-p;
    printf("a = %f",a);
}
int main()
{
    nine();
}

/*output :-
enter p:r:n1000
8
3
a = 26.666666
 */
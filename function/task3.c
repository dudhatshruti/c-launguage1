#include<stdio.h>
int third()
{
    float p,t,r,si;
    printf("enter p ,t,r :");
    scanf("%f %f %f",&p,&t,&r);

    si=p*t*r/100;
    printf("si is: %f",si);

    return 0;
}
int main()
{
    third();
}

/* output :-
enter p ,t,r :50
5
6
si is: 15.000000
*/

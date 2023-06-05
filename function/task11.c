#include<stdio.h>
void eleven()
{
    float pi,r,area;
    printf("enter pi: r:");
    scanf("%f %f",&pi,&r);

    area=pi*r*r;
    printf("area of circle = %f",area);
}
int main()
{
    eleven();
}

/* output :-
enter pi: r:3.14
15
area of circle = 706.500000
*/
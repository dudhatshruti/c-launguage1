//calculate the area of circle //

#include<stdio.h>
int main()
{
    float pi,r,area;
    printf("pi:");
    scanf("%f",&pi);

    printf("r:");
    scanf("%f",&r);

    area=pi*r*r;
    printf("area of circle=%f",area);

}

/* output :-

pi:3.14
r:15
area of circle=706.500000

*/
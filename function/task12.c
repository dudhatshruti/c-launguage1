#include<stdio.h>
int ten(){
    float base,height,area;
    printf("enter base: height:");
    scanf("%f %f",&base,&height);
    area = 0.5*base*height;
    return area;
}
int main()
{
    int x;
    x=ten();
    printf("area of triangle is:%f",x);

}
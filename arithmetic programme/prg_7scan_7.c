// 7.verify the formula x=((k-4)*(a*4))/100  //

#include<stdio.h>
int main()
{
    float k,a,x;
    printf("k:");
    scanf("%f",&k);

    printf("a:");
    scanf("%f",&a);

    x=((k-4)*(a*4)/100);
    printf("x=%f",x);

}

/* output:-

k:40
a:12
x=17.280001

*/
/*  no argument    no return    */

#include<stdio.h>
void mul()
{
    int a,b,c;
    printf("enter a and b:");
    scanf("%d %d:",&a,&b);

    c=a*b;
    printf("multiplication of a and b: %d",c);
}
// void add()
// {
//       int a,b,c;
//     printf("\n enter a and b:");
//     scanf("%d %d:",&a,&b);

//     c=a+b;
//     printf("\n addition of a and b: %d",c);
// }
int main()
{
    printf("hello \n");
    mul();
    // add();

}
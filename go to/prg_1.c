#include<stdio.h>
int main()
{
    int i=1;
    lable:
    if(i<=10)
    printf("\t %d",i++);
     goto lable;
     return 0;
}
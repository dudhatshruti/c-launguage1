// 1 to 10 odd number total

#include<stdio.h>
int main()
{
    int a,total=0;
    for(a=1; a<=10; a=a+2)
    {
        total+=a;
        printf("\n total is:%d",total);
    }
    return 0;
}
/* output :- 
 total is:1
 total is:4
 total is:9
 total is:16
 total is:25 */
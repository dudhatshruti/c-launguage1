// enter one value and find its divisable by 5 or not //

#include<stdio.h>
int main()
{
    int a;
    printf("a:");
    scanf("%d",&a);
    if(a % 5==0)
    {
        printf("value is divisable by 5");
    }
    else
    {
        printf("value is not divisable by 5");
    }

}

/* output :-
a:30
value is divisable by 5

a:18
value is not divisable by 5

*/
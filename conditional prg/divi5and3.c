// enter one value find its divisable by 5 and 3 or not //

#include<stdio.h>
int main()
{
    int a;
    printf("a:");
    scanf("%d",&a);

    if(a % 15 == 0)
    {
        printf("value is divisable by 5 and 3");
    }
    else{
        printf("value is not divisable by 5 and 3");
    }
}

/* output :-
a:45
value is divisable by 5 and 3

a:23
value is not divisable by 5 and 3

*/
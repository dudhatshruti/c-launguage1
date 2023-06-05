#include<stdio.h>
int fourth()
{
    int rupees,dollar;
    printf("enter rupees:");
    scanf("%d",&rupees);

    dollar=rupees*75;
    return dollar;
}

int main()
{
    int x;
    x=fourth();
    printf("dollar is %d",x);
}

/* output :-
enter rupees:10
dollar is 750
*/
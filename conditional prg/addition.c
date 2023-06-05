// enter two value and find its multiplication is divisable by its addition or not //

#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("a:");
    scanf("%d",&a);

    printf("b:");
    scanf("%d",&b);

    c=a*b;
    d=a+b;

    if(c%d==0)
    {
    printf("yes %d",c);
    }
    else{
        printf("no %d",d);
    }
}

/* output :-
a:50
b:50
yes 2500

a:23
b:67
no 90


*/
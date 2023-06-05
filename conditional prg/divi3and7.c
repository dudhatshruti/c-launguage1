// enter two value and find its multiplication is divisable by 3 and 7 //

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a:");
    scanf("%d",&a);

     printf("b:");
    scanf("%d",&b);

    c=a*b;

    printf("%d",c);

    if(c % 21 == 0)
    {
        printf("value is divisable by 3 and 7");
    }
    else{
        printf("value is not divisable by 3 and 7");
    }

}

/*  output :-
a:10
b:20
200value is not divisable by 3 and 7

a:49
b:15
735value is divisable by 3 and 7

*/
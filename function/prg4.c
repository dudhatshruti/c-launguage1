/* with argument  with return */

#include<stdio.h>
int square(int n, int m){
    return n*m;
}
int main()
{
    int x,a;
    printf("enter number:");
    scanf("%d",&x);
    a=square(x,10);
    printf("product is: %d",a);
}

/* output :-
enter number:12
product is: 120
*/
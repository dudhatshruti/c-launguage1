#include<stdio.h>
int main()
{
    int a,n;
    printf("n:");
    scanf("%d",n);
    
    for(a=-n; a<=n; a++)
    {
        printf("%d\n",a);
    }
}
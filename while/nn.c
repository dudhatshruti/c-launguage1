#include<stdio.h>
int main()
{
    int n;
    printf("n:");
    scanf("%d",&n);
    while (n>=1)
    {
        printf("\t %d",n);
        n--;
    }
    return 0;
}


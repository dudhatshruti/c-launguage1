#include<stdio.h>
int main()
{
    int i, a, j=0;
    printf("Enter A : ");
    scanf("%d", &a);

    for(i=1; i<a; i++)
    {
        if(a%i==0){
            printf(" %d",i);
            j = j+i;
        }
    }
    if(a==j)
    {
        printf("\n Number is perfect");
    }
    else{
        printf("\nnumber is not perfect");
    }
}
#include<stdio.h>
int main()
{
    int i=1,j;
    do{
        j=1;
        do
        {
            printf("\t %d",i);
            j+=2;
        }   
        while (i<=9);
        printf("\n");
        i+=2;
    }
    while (j<=1);
    return 0;
}
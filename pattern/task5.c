#include<stdio.h>
int main()
{
    int i,j;
    for (i=4;i>=1; i--)
    {
        for (j=4; j>=i; j--)
        {
            printf("\t %d",j);
        }
        printf("\n");  
    }
    for (i=1;i<=4; i++)
    {
        for (j=4; j>=i; j--)
        {
            printf("\t %d ",j);
        }
        printf("\n");    
    }
}

/* output :_
4 
4 3
4 3 2
4 3 2 1
4 3 2
4 3
4
*/
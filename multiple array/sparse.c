#include<stdio.h>
int main()
{
    int a[10][10],i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\n enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\t------matrix a-------\n\n");
    for (i=0; i<3;i++)
    {
     for (j=0; j<3; j++)
      {
        if (a[i][j]==0)
        {
            printf("  ");
        }  
        else{

            printf("%d ",a[i][j]);
        }    
      }
    printf("\n");
    }
    return 0;
}

/* output :-
1 2 3
  5 6
7 8 9
*/
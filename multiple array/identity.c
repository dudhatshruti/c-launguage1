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
        {
            if (i==j)
            {    
            printf("1");
            }
            else{
                printf("0");
            }
            
        }      
      }
    printf("\n");
    }
    return 0;
}

 
//         ------matrix a-------

// 1 0 0
// 0 1 0
// 0 0 1
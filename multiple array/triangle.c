#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],total=0,b=0,c=0,i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        printf("\n enter a[ %d ][ %d ]:",i,j);
        scanf("%d",&a[i][j]);
        }
        
    }

    printf("\n\t-----------matrix a------------\n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
     for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        printf("\n enter b[ %d ][ %d ]:",i,j);
        scanf("%d",&b[i][j]);
        }
        
    }

    printf("\n\t-----------matrix a------------\n\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("\t %d",b[i][j]);
        }
        printf("\n");
    }
    
      for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(i==j)
            {
                total+=a[i][j];
            }
        }  
    printf("\n");
    }
    printf("total diagonal= %d",total);
}

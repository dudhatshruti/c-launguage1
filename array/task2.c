#include<stdio.h>
int main()
{
    int a[5],b[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("\t\tenter b[%d]:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n-----array is-----\n");
    printf("  A");
    printf("\t  B");
    for(i=0;i<5;i++)
    
        printf("\n %d",a[i]);
        printf("\t %d",b[i]);
    }

/* output :-
----array is-----
  A       B
 100     100
 200     200
 300     300
 400     400
 500     500
*/





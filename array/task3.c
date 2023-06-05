#include<stdio.h>
int main()
{
    int a[5],b[5];
    int i;
    for (i=0; i<5; i++)
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
    printf("\ttotal");
    for(i=0;i<5;i++)
    {
        printf("\n %d\t %d \t%d",a[i],b[i], a[i]+b[i]);
    }
}



/*output :-
  A       B     total
 45      56     101
 45      56     101
 56      526    582
 56      56     112
 45      66     111
*/
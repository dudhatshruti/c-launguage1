#include<stdio.h>
int main()
{
    int a[10],total=0;
    int i;
    for (i=0;i<10; i++)
    {
       printf("enter a[%d]:",i+1);
       scanf("%d",&a[i]);
    }
    printf("\n-----------array is----------\n");
    for (i=0; i<=10; i++)
    {
        printf("\n a[%d]:%d",i+1,a[i]);
    }
    printf("\n odd no:");
    for (i=0; i<10; i++)
        if(a[i]%2==1)
        {
        printf("\n %d  %d",i+1,a[i]);
        }  
    printf("\n odd no total:");
     for (i=0; i<10;i++)
     {   if(a[i]%2==1)
        total=total+a[i];
     }  
     printf("%d",total);
}

/* output :-
 a[1]:1
 a[2]:3
 a[3]:2
 a[4]:6
 a[5]:5
 a[6]:95
 a[7]:84
 a[8]:0
 a[9]:7
 a[10]:8
 a[11]:10
 even no:
 1  1
 2  3
 5  5
 6  95
 9  7
 even no total:111
*/

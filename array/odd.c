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
    for (i=0; i<10; i++)
    {
        printf("\n a[%d]:%d",i+1,a[i]);
    }
    printf("\n odd no:");
    for (i=0; i<10;i=i+2)
    {
        printf("\n %d",a[i]);
    }  
    printf("\n odd no total:");
     for (i=0; i<10;i=i+2)
     {
        total=total+a[i];
     }  
     printf("%d",total);
}

/* output :-
-----------array is----------
 a[1]:51
 a[2]:26
 a[3]:48
 a[4]:4
 a[5]:58
 a[6]:96
 a[7]:63
 a[8]:51
 a[9]:28
 a[10]:17
 odd no:
 51
 48
 58
 63
 28
 odd no total:248
*/
#include<stdio.h>
int main()
{
    int a[10],total=0;
    int i;
    for (i=0; i<10; i++)
    {
       printf("enter a[%d]:",i+1);
       scanf("%d",&a[i]);
    }
    printf("\n-----------array is----------\n");
    for (i=0; i<10; i++)
    {
        printf("\n a[%d]:%d",i+1,a[i]);
    }
    printf("\n even no:");
    for (i=1; i<10; i=i+2)
    {
        printf("\n %d",a[i]);
    }  
    printf("\n even no total:");
     for (i=1; i<10; i=i+2){ 
        total=total+a[i];
     }  
     printf("%d",total);
}

/* output :-
 a[1]:74
 a[2]:36
 a[3]:65
 a[4]:95
 a[5]:64
 a[6]:84
 a[7]:78
 a[8]:32
 a[9]:21
 a[10]:63
 even no:
 36
 95
 84
 32
 63
 even no total:310
*/
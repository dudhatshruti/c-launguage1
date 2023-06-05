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
   //   printf("\n-----------array is----------\n");
   //  for (i=0; i<10; i++)
   //  {
   //      printf("\n a[%d]:%d",i+1,a[i]);
   //  }
   //  printf("\n all element total:");
   //   for (i=0; i<10;i++)
   //   { 
   //      total=total+a[i];
   //   }  
   //   printf("%d",total);
}

/* output :-
 a[1]:12
 a[2]:52
 a[3]:36
 a[4]:95
 a[5]:84
 a[6]:75
 a[7]:69
 a[8]:28
 a[9]:69
 a[10]:37
 all element total:557            
*/



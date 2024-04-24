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
    printf("\n------------array is-----------\n");
    
    for (i=0; i<=10; i++)
    {
        printf("\n a[%d]:%d",i+1,a[i]);
    }
    printf("\n even no:");
    for (i=0; i<10; i++)
        if(a[i]%2==0)
        {
        printf("\n %d  %d",i+1,a[i]);
        }  
    printf("\n even no total:");
     for (i=0; i<10;i++)
     {   if(a[i]%2==0)
        total=total+a[i];
     }  
     printf("%d",total);
}

/* output :-

 a[1]:54
 a[2]:69
 a[3]:58
 a[4]:36
 a[5]:25
 a[6]:12
 a[7]:41
 a[8]:62
 a[9]:78
 a[10]:96
 even no:
 1  54
 3  58
 4  36
 6  12
 8  62
 9  78
 10  96
 even no total:396
*/
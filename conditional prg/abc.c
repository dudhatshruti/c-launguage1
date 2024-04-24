// enter 3 and find largest among them.//

#include<stdio.h>
int main()
{
    int a,b,c;
     printf("a:");
     scanf("%d",&a);

     printf("b:");
     scanf("%d",&b);

     printf("c:");
     scanf("%d",&c);

     
      if(a>b)
      {
        if(a<c)
        {
            printf("largest value a %d",a);
        }
        else{
            printf("largest no is c %d",c);
        }
      }
      if(b>a)
      {
        printf("largest no is b %d",b);
      }
      else{
        printf("largest no is c %d",a);
      }
      
}      
    
/* output :-

a:115
b:465
c:98
largest no is b 465

*/    




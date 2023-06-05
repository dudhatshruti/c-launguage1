// take a number and print its multiplication table up to 10. //
     //using scanf function //


#include<stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);

   printf("\n %d*1=%d",a,a*1);
   printf("\n %d*2=%d",a,a*2);
   printf("\n %d*3=%d",a,a*3);
   printf("\n %d*4=%d",a,a*4);
   printf("\n %d*5=%d",a,a*5);
   printf("\n %d*6=%d",a,a*6);
   printf("\n %d*7=%d",a,a*7);
   printf("\n %d*8=%d",a,a*8);
   printf("\n %d*9=%d",a,a*9);
   printf("\n %d*10=%d",a,a*10);
   return 0;
}

/* output :-

 5*1=5
 5*2=10
 5*3=15
 5*4=20
 5*5=25
 5*6=30
 5*7=35
 5*8=40
 5*9=45
 5*10=50

*/
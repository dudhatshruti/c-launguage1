// c programme to check wheather a person is eligible for voting or not //

#include<stdio.h>
int main()
{
      int a;
      printf("a:");
      scanf("%d",&a);

      if(a>=18)
      {
        printf("eligible for vote(year:%d)",a);
        
      }
      else
      {
        printf("not eligible for vote(year:%d)",a);
      }
}

/*  output :-

a:18
eligible for vote(year:18)

a:12
not eligible for vote(year:12)

a:23
eligible for vote(year:23)

*/
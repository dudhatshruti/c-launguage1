// assignment operator //

#include<stdio.h>
int main()
{
    int a=10;
    a=a+5;
    printf("\n a:%d",a);

    a = a-5;
    printf("\n a:%d",a);

    a = a*5;
    printf("\n a:%d",a);

      a = a/5;
      printf("\n a:%d",a);
    return 0;

}

/* output :-

 a:15
 a:10
 a:50
 a:10

*/
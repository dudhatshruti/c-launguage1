#include<stdio.h>
int main()
{
    int b[5];
    int i;
    for (i=0; i<5; i++)
    {
       printf("enter b[%d]:",i+1);
       scanf("%d",&b[i]);
    }

    printf("\n---------array is-----------\n");
    for(i=0; i<5; i++)
    {
        printf("\n b[%d]:%d",i+1,b[i]);
    }
}

 /* output :-
 b[1]:54
 b[2]:54
 b[3]:21
 b[4]:54
 b[5]:89
 */
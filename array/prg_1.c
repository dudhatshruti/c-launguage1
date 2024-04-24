// #include<stdio.h>
// int main()
// {
//     int a[10];
//     int i;
//     for (i=0; i<5; i++)
//     {
//        printf("enter a[%d]:",i+1);
//        scanf("%d",&a[i]);
//     }
//     printf("\n----------- array is----------\n");
//     for ( i=0; i<5; i++)
//     {
//        printf("\n a[%d]: %d",i+1,a[i]);
//     }
// }

/* output :-
 a[1]: 78
 a[2]: 12
 a[3]: 54
 a[4]: 58
 a[5]: 56
*/

#include<stdio.h>
int main(){
   int a[50],i;
   for ( i = 0; i < 5; i++)
   {
      printf("enter a[%d]:",i+1);
      scanf("%d",&a[i]);
   }
    printf("\n----------- array is----------\n");

   for ( i = 0; i < 5; i++)
   {
      printf("\n a[%d]: %d",i+1, a[i]);
   }
}
#include <stdio.h>
int main()
{
  int i=1, j;
 while (i<=5)
  {
    j=1;
    while (j<=i)
    {
      printf("\t %d", i);
      j++;
    }
    printf("\n", j);
    i++;
  }
  return 0;
}

// #include<stdio.h>
// int main()
// {
//     int i='A',j;
//     do{
//         j='A';
//         do
//         {
//             printf("\t %c",i);
//             j++;
//         }
//         while (j<='E');
//         printf("\n");
//         i++;        
//     }
//     while(j<=i);
//     return 0;
// }
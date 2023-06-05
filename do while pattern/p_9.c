// #include <stdio.h>
// int main()
// {
//   int i=1, j,z=11;
//  while (i<=6)
//   {
//     j=1;
//     while (j<=i)
//     {
//       z+=1;
//       printf("\t %d", z++);
//       j++;
//     }
//     printf("\n", j);
//     i++;
//   }
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,z=11;
//     for(i=1;i<=5;i++)
// {
//    for(j=1;j<=5;j++)
//    {
//    printf("\t %d",z++);
//    }
//    z+=5;
//    printf("\n");
// }
// }

#include<stdio.h>
int main()
{
  int i=1,j,z=11;
  while (i<=5)
  {
    j=1;
    while (j<=i)
    {
      printf("\t %d",i);
      j++;
    }
    printf("\n",j);
    i++;
  }
  return 0;
  
}
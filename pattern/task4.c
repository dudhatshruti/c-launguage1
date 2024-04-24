#include<stdio.h>
int main()
{
    int i,j,z=1; 
  for(i=1;i<=5;i++)
  {
    z = i;
    for(j=1;j<=i;j++)
    {
      printf("%d ", z);
      z +=5-j;
    }
    printf("\n");
  }
  return 0;
}

// output:-

// 1 
// 2 6       
// 3 7 10    
// 4 8 11 13 
// 5 9 12 14 15
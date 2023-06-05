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
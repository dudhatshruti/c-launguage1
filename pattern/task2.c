
// #include<stdio.h>
// int main()
// {	
//   int i,j;
//   for(i=1;i<=5;i++)
// {
//  for(j=5;j>=i;j--)
// {
//  printf("\t %d",i);
// }
//  printf("\n");
//   }
// return 0;
// }

#include <stdio.h>

int main() {
    int i,j ,k;
    int num = 1;
    
    for ( i = 1; i <=5; i++) {
        for ( j = 1; j<=i-1; j++) {
            printf("  ");
        }
        for ( k = 5; k >=i; k--) {
            printf("%d ", num++);
            
        }
        printf("\n ");
    }
    
    return 0;
}
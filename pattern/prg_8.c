#include<stdio.h>
int main()
{
    char z='A';
    int i,j;
    for(i='A';i<='E';i++)
{
   for(j='A';j<='E';j++)
   {
   printf("\t %C",z++);
   }
   printf("\n");
}
}
/*output:-
         A       B       C       D       E
         F       G       H       I       J
         K       L       M       N       O
         P       Q       R       S       T
         U       V       W       X       Y
*/
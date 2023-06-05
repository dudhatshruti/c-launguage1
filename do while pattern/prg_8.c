#include<stdio.h>
int main()
{
    char c='A';
    int i='A',j;
    do{
        j='A';
        do{
            printf("\t %c",c++);
            j++;
        }
        while (j<='E');
        printf("\n");
        i++;  
    }
    while (i<='E');
   return 0;
}
/* output :-
         A       B       C       D       E
         F       G       H       I       J
         K       L       M       N       O
         P       Q       R       S       T
         U       V       W       X       Y
*/
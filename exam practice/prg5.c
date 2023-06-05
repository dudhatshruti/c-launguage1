#include<stdio.h>
int main()
{
    int i,j;
    for (i='A'; i<='E'; i++)
    {
        for (j='A'; j<='E'; j++)
        {
            printf(" %c",i);
        }
        printf("\n");
    }
    
}

/*OUTPUT:-
 A A A A A
 B B B B B
 C C C C C
 D D D D D
 E E E E E
*/
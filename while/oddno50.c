#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        printf("\t %d",i);
        i=i+2;
    }
    while (i<=50);
    return 0;
    
}
/* output :-
    1       3       5       7       9       11      13      15      17      19      21      23      25      27
    29      31      33      35      37      39      41      43      45      47      49
*/
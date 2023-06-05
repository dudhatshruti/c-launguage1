#include <stdio.h>
int main()
{
    int i = 5, j;
    do{
        j=5;
        do
        {
            printf("\t %d", i);
            j--;
        }
        while (i>= 1);
        printf("\n");
        i--;
    }
    while(j>=i);
    return 0;
}


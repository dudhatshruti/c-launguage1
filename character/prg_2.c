// enter a char and convert its case --> a -> A?
#include<stdio.h>
int main()
{
    char small, capital,ascii;
    printf("Enter small character: ");
    scanf("%c", &small);
    capital = small-32;
    printf(" capital character = %c", capital);
   
}

/* output :-

small character:a          
capital character: A

small character:b
capital character: B

small character:t
capital character T


*/
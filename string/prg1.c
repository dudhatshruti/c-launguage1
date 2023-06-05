#include<stdio.h>
int main()
{
    char str[10];
    printf("enter your string:");
    // scanf("%s",&str);
    // scanf("%[^\n]s",str);
    gets(str);

    // printf("your string is:%s",str);
    puts(str);
    
}
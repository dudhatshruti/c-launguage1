
#include<stdio.h>
int main()
{
    char a[50];
    int i,j, length;
    printf("Enter String Value : ");
    gets(a);


    for(i=0; a[i] !='\0'; i++);
        
    
    length = i-1;
    
    for(j=0; j<i/2; j++)
{
        printf("%c%c", a[j] ,a[length-j]);
}

        if(i%2 != 0)
        
            printf("%c", a[i/2]);
           
   
}

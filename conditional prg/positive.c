// enter one value find its positive or negative //

#include<stdio.h>
int main()
{
    int a;
    printf("a:");
    scanf("%d",&a);

    if(a>=0){
        printf("\n value is positive:%d",a);
    }
    else{
        printf("\n value is negative:%d",a);
    }
}

/* output :- 

 value is negative:-90
 
*/
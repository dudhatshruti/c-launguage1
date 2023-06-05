//declare two variables x and y.assign value to these variables.number x should be printed only if it is less than 
//2000 or greater than 3000,and number y should be printed only if is between 100 and 500.//

#include<stdio.h>
int main()
{
    int x,y;
    printf("x:");
    scanf("%d",&x);

    printf("y:");
    scanf("%d",&y);

    if(x<2000 && x>3000)
    {
        printf("%d", x);
    }

    else if(y>100 && y<500)
    {
      printf("%d", y);
    }
    else{
      printf("please enter valid value");
    }
    
    
    
}
    
  
    
 


    

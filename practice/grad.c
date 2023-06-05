#include<stdio.h>
int main()
{
    int percentage,marks;
    printf("marks:");
    scanf("%d",&marks);
    // float a1,a2,a3,a4,a5,a6,total,percentage;

    
    // printf("\n marks of 6 subject:");
    // scanf("\n%f %f %f %f %f %f,",&a1,&a2,&a3,&a4,&a5,&a6);

    // total=a1+a2+a3+a4+a5+a6;
    // printf("\ntotal is :(%f)",total);

    // percentage=total/600*100;
    // printf("\npercentage is :(%f)",percentage);

    if(marks>=75)
    {
        printf("\n grade a:");
    }
    else if(marks>=60 && marks<=75)
    {
        printf("\n grade b:");
    }
    else if(marks>=45 && marks<=60)
    {
        printf("\n grade c:");
    }
    else if(marks>=35 && marks<=45)
    {
        printf("\n grade d:");
    }
    else
    {
        printf("\n fail");
    }
    
   

}    
/* output :-

 marks of 6 subject:
        23
        54
        87
        09
        87
        89

total is :  (349.000000)
percentage is :(58.166668)
grade c:



*/
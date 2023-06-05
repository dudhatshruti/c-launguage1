// 5.take a number of chair and their total cost, and print the cost ofeach chair //


#include<stdio.h>
int main()
{
    int totalchair,totalcost,eachchair;
    printf("totalchair:");
    scanf("%d",&totalchair);

    printf("totalcost:");
    scanf("%d",&totalcost);

    printf("chair:");
    scanf("%d",&eachchair);

    eachchair=totalcost/totalchair;
    printf("eachchair:%d",eachchair);

}

/*  output:-

chair:10
totalcost:4000
chair:1
eachchair:400

*/
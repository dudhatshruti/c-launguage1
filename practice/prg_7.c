#include<stdio.h>
int main()
{
    int price,qty,rate,dis,gst;
    printf("price:");
    scanf("%d",&price);
    printf("qty:");
    scanf("%d",&qty);

    rate=price*qty;
    printf("rate:(%d)",rate);

    if(rate<1000)
    {
        dis=rate*0.05;
        gst=rate+0.09;
        printf("price is(%d)",price);
    }
    else{
        printf("invalid");
    }
   

}
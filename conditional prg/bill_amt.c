#include<stdio.h>
int main()
{
    int productno=11, price=100,qty=5,rate,discount,ratead,gst,billamt;
    
    rate=price*qty;
    // printf("\trate:(%d)",rate);

    discount=rate*0.10;
    // printf("\tdiscount:(%d)",discount);

    ratead=rate-discount;
    // printf("\tratead:(%d)",ratead);

    gst=ratead*0.18;
    // printf("\tgst:(%d)",gst);

    billamt=ratead+gst;
    // printf("\tbillamt:(%d)",billamt);

    printf("\nprice,\tqty,\trate,\tdiscount,\tratead,\tgst,\tbillamt");
    printf("\n(%d) \t(%d) \t(%d) \t(%d) \t\t(%d) \t(%d) \t(%d) ",price,qty,rate,discount,ratead,gst,billamt);

    return 0;
}
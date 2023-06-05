#include<stdio.h>
int main()
{
    float basic,HRA,DA,gs;
    printf("basic:");
    scanf("%f",&basic);

    if(basic<5000)
    {
        HRA=(basic*8)/100;
        DA=(basic*20)/100;
        gs=basic+HRA+DA;
        printf("gross salary is:(%f)",gs);
    }
   if(basic>5000 && basic<10000)
    {
        HRA=(basic*12)/100;
        DA=(basic*30)/100;
        gs=basic+HRA+DA;
        printf("gross salary is:(%f)",gs);
    }
    if(basic>10000 && basic<15000)
    {
       HRA= (basic*15)/100;
       DA= (basic*40)/100;
       gs=basic+HRA+DA;
        printf("gross salary is:(%f)",gs);
    }
    if(basic>15000)                                               
      {
      HRA= (basic*20)/100;
      DA = (basic*50)/100;
      gs = basic+HRA+DA;
      printf("gross salary is:(%f)",gs);
    }

}

/* output :-

basic:13000
gross salary is:(20150.000000)


*/
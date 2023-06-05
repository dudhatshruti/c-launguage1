#include<stdio.h>
int six(){
    int c,d,g,h,l;
    printf("print c: d: g: h:");
    scanf("%d %d %d %d",&c,&d,&g,&h);
    l=(c+d)*(g+h);
    return l;
}
int main()
{
    int x;
    x=six();
    printf("answer is:%d",x);
}

/* output :-
print c: d: g: h:10
20
5
8
answer is:390  
*/
#include<stdio.h>
int ten(){
    int v,s,m,t;
    printf("enter v: s: m:");
    scanf("%d %d %d",&v,&s,&m);
    t=((v+s)+(1-m)*1);
    return t;
}
int main()
{
    int x;
    x=ten();
    printf("answer is:%d",x);

}
/* output :-
enter v: s: m:10
55
18
answer is:48
*/
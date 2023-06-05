#include<stdio.h>
int condition(){
    int a,b;
    printf("enter a: b:");
    scanf("%d %d",&a,&b);
     if(a>b){
    printf("\n a is highest value:%d",a);
    }
    else{
        printf("\n b is highest value is:%d",b);
    }
    return (a>b);
}
int main()
{
    int x;
    x=condition();

}
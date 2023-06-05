#include<stdio.h>
#define n 7
int disply(int a[])
{
    int i;
    for (i=0; i<n; i++)
        printf(" %d",a[i]);   
    
}
int main()
{
    int arr[n],i;
    for (i=0; i<n; i++)
    {
        printf("enter arr[%d]:",i);
        scanf(" %d",&arr[i]);
    }
    disply(arr);
    
}

/*output :-
enter arr[0]:12
enter arr[1]:32
enter arr[2]:26
enter arr[3]:48
enter arr[4]:59
enter arr[5]:78
enter arr[6]:36
 12 32 26 48 59 78 36
*/
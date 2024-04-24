#include<stdio.h>
int new( int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        return new(n-1)+new(n-2);
    }        
}
int main()  
{
    int i;
    for (i=1; i<=10; i++)
    {
        printf(" %d",new(i));
    }
}

/*output:-
 1       1       2       3       5       8       13      21      34      55      89      144     233     377     
*/

// #include<stdio.h>
// int display(int arr[],int n){
// 	int i,min,max;
// 	min=max=0;
// 	for (i=1; i<n; i++)
// 	{
// 		if (min > arr[i])
// 		min=arr[i];
// 		if (max < arr[i])
// 		max=arr[i];	
// 	}
// 	printf("minimum number is:%d",min);
// 	printf("maximum number is:%d",max);
// }
// int main()
// {
// 	int arr[5],i,n;
// 	printf("enter size of array:");
// 	scanf("%d",&n);
// 	printf("enter number:");
// 	for (i=0; i<n; i++)
// 	{
// 		scanf("%d",arr[i]);
// 	}
	
// 	display(arr ,n);
	
// }
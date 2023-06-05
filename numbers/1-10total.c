#include<stdio.h>
int main()
{
    int a,total=0;
    for(a=1; a<=10; a++)
    {
        // total+=a;
        total=total+a;
        printf("\n total is:%d",total);
    }
    return 0;
}
/*output:-
 total is:1
 total is:3    
 total is:6    
 total is:10   
 total is:15   
 total is:21   
 total is:28   
 total is:36   
 total is:45   
 total is:55   
*/

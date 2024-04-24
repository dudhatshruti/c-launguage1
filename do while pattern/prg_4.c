// #include<stdio.h>
// int main()
// {
//     int i='A',j;
//     do{
//         j='A';
//         do
//         {
//             printf("\t %c",i);
//             j++;
//         }
//         while (j<='E');
//         printf("\n");
//         i++; 
//     }
//     while (i<='E');
//     return 0;  
// }

#include<stdio.h>
int main(){
    int i= 'A',j;
    do
    {
        j='A';
        do
        {
           printf("\t %c",i);
           j++;
        } 
        while (j<='E');
        printf("\n",i++);
    }
     while (i<='E');
}
/* output :-
         A       A       A       A       A
         B       B       B       B       B
         C       C       C       C       C
         D       D       D       D       D
         E       E       E       E       E
*/
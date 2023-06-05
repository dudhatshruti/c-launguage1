// enter a char and find char is vowel (a,e,i,o,u) or constant ? //
#include<stdio.h>
int main()
{
    char value;
    printf("enter value:");
    scanf("%c",&value);

    if(value=='a'|| value=='e'|| value=='i'|| value=='o'||value=='u'|| value=='A'||value=='E'|| value=='I'|| value=='O'||value=='U'){
        printf("this value is vowel");
    }
    else{
        printf("this value is consont");
    }
}

/* output :-
enter value:E
this value is vowel

enter value:S
this value is consont

enter value:o
this value is vowel

*/
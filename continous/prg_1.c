#include<stdio.h>
int main()
{
    int a;
    for(a=1; a<=10; a++)
    {
        printf("\n\t hello %d",a);
    }
    for(a=11; a<=20; a++)
    {
    printf("\n\t\t hello %d",a);
    }
    for(a=21; a<=30; a++){
        printf("\n\t\t\t hello %d",a);
    }
    for(a=31; a<=40; a++){
        printf("\n\t\t\t\t hello %d",a);
    }
    for(a=41; a<=50; a++){
        printf("\n\t\t\t\t\t hello %d",a);
    }
    for(a=50; a>=41; a--){
        printf("\n\t\t\t\t hello %d",a);
    }
    for(a=40; a>=31; a--){
        printf("\n\t\t\t hello %d",a);
    }
    for(a=30; a>=21; a--){
        printf("\n\t\t hello %d",a);
    }
    for(a=20; a>=11; a--){
        printf("\n\t hello %d",a);
    }
    for(a=10; a>=1; a--){
        printf("\n hello %d",a);
    }
    return 0;
}
/*output :-
         hello 1
         hello 2
         hello 3
         hello 4
         hello 5
         hello 6
         hello 7
         hello 8
         hello 9
         hello 10        
                 hello 11
                 hello 12
                 hello 13
                 hello 14
                 hello 15
                 hello 16
                 hello 17
                 hello 18
                 hello 19
                 hello 20
                         hello 21
                         hello 22
                         hello 23
                         hello 24
                         hello 25
                         hello 26
                         hello 27
                         hello 28
                         hello 29
                         hello 30
                                 hello 31
                                 hello 32
                                 hello 33
                                 hello 34
                                 hello 35
                                 hello 36
                                 hello 37
                                 hello 38
                                 hello 39
                                 hello 40
                                         hello 41
                                         hello 42
                                         hello 43
                                         hello 44
                                         hello 45
                                         hello 46
                                         hello 47
                                         hello 48
                                         hello 49
                                         hello 50
                                 hello 50
                                 hello 49
                                 hello 48
                                 hello 47
                                 hello 46
                                 hello 45
                                 hello 44
                                 hello 43
                                 hello 42
                                 hello 41
                         hello 40
                         hello 39
                         hello 38
                         hello 37
                         hello 36
                         hello 35
                         hello 34
                         hello 33
                         hello 32
                         hello 31
                 hello 30
                 hello 29
                 hello 28
                 hello 27
                 hello 26
                 hello 25
                 hello 24
                 hello 23
                 hello 22
                 hello 21
         hello 20
         hello 19
         hello 18
         hello 17
         hello 16
         hello 15
         hello 14
         hello 13
         hello 12
         hello 11
 hello 10
 hello 9
 hello 8
 hello 7
 hello 6
 hello 5
 hello 4
 hello 3
 hello 2
 hello 1

*/
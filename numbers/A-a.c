#include<stdio.h>
int main()
{
    int i,j;
    printf("\n character:A-a or Z-z");
    for(i=65; i<=90; i++)
    {
        j=i+32;
        printf("\n %c - %c",i,j);
    }
    

}

/* output :-
 A - a
 B - b
 C - c
 D - d
 E - e
 F - f
 G - g
 H - h
 I - i
 J - j
 K - k
 L - l
 M - m
 N - n
 O - o
 P - p
 Q - q
 R - r
 S - s
 T - t
 U - u
 V - v
 W - w
 X - x
 Y - y
 Z - z
*/
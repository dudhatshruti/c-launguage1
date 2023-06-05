#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        printf("\n  %c - %c",i+64,i+64+32);
        i++;
    } 
    while (i<=26);
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
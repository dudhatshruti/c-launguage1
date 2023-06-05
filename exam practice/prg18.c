#include<stdio.h>
struct student
{
    int rollno,m,s,e,total;
    float per;
    char sname[50];
};

int main()
{
    struct student a[5];
    int i;
    printf("enter data:---------------\n");
    for (i=0; i<2; i++)
    {
        printf("enter roll no:");
        scanf("%d",&a[i].rollno);
        printf("enter sname:");
        scanf("%s",&a[i].sname);
        printf("enter maths:");
        scanf("%d",&a[i].m);
        printf("enter sci:");
        scanf("%d",&a[i].s);
        printf("enter eng:");
        scanf("%d",&a[i].e);
    }
    printf("rollno \tsname \tmaths \tsci \teng \ttotal \tper");
    for (i=0; i<2; i++)
    {
        a[i].total= a[i].m + a[i].s + a[i].e;
        a[i].per =(float)a[i].total/3;
        printf("\n %d \t%s \t%d \t%d \t%d \t%d \t.2f",a[i].rollno,a[i].sname,a[i].m,a[i].s,a[i].e,a[i].total,a[i].per);
    }
    
}
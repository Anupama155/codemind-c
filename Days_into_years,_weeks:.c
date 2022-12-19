#include<stdio.h>
int main()
{
    int a,y,w;
    scanf("%d",&a);
    y=a/365;
    printf("%d
",y);
    w=(a%365)/7;
    printf("%d",w);
}
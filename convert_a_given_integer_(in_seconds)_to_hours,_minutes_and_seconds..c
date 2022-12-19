#include<stdio.h>
int hour(int a)
{
    int h;
    h=a/3600;
    return h;
}
int minut(int a) 
{
    int h,m;
    h=a/3600;
    m=(a-(3600*h))/60;
    return h,m;
}
int sec(int a)
{
    int h,m,s;
    h=a/3600;
    m=(a-(3600*h))/60;
    s=(a-(3600*h)-(m*60));
    return h,m,s;
}
int main()
{
    int a;
    scanf("%d",&a);
    int h1=hour(a);
    int m1=minut(a);
    int s1=sec(a);
    printf("H:M:S-%d:%d:%d",h1,m1,s1);
}
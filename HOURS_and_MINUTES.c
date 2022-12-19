#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h,m;
    h=a/60;
    m=a%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}
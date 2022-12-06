#include<stdio.h>
float avg(int a,int b)
{
    float x;
    x=(a+b)/2.0;
    return x;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c=avg(a,b);
    printf("Average of %d and %d is: %0.2f",a,b,c);
}
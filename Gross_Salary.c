#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    int da,hra;
    if(b<=10000)
    {
        da=.8*b,hra=.2*b;
    }
    else if(b<=20000)
    {
        da=.90*b,hra=.25*b;
    }
    else if(b>20000)
    {
        da=.95*b,hra=.3*b;
    }
    float s;
    s=b+da+hra;
    printf("%.2f",s);
}
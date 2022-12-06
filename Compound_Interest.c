#include<stdio.h>
#include<math.h>
float comp(int p,float r,float t)
{
    float c;
    c=p*pow((1+r/100),t)-p;
    return c;
}
int main()
{
    int p;
    float r,t;
    scanf("%d%f%f",&p,&r,&t);
    float x=comp(p,r,t);
    printf("%0.2f",x);
}
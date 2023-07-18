#include<stdio.h>
int main()
{
    int n,q,r,s=0,s1=0,sq1,sq2;
    scanf("%d",&n);
    sq1=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    sq2=s*s;
    q=sq2;
    while(q!=0)
    {
        r=q%10;
        s1=s1*10+r;
        q=q/10;
    }
    if(s1==sq1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
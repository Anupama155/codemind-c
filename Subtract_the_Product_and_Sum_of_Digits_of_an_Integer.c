#include<stdio.h>
int main()
{
    int i,n,q,r,s=0,p=1,a;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
        p=p*r;
        a=p-s;
    }
    printf("%d",a);
}
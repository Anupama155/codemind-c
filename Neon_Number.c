#include<stdio.h>
int main()
{
    int n,q,sq,s=0,r;
    scanf("%d",&n);
    sq=n*n;
    q=sq;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
    
}
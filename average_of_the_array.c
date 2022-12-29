#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float x,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        x=s/n;
    }
    //x=32/7.0;
    printf("%.2f",x);
}
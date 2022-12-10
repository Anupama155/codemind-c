#include<stdio.h>
int main()
{
    int N,s=0,c=0;
    scanf("%d",&N);
    int a[N],i;
    float ave;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        s=s+a[i];
    }
    ave=s/N;
    for(i=0;i<N;i++)
    {
        if(a[i]==ave)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
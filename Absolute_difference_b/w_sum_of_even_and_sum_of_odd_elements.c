#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);
    int a[N],i,es=0,os=0,d;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<N;i++)
    {
     if(a[i]%2==0) 
     es=es+a[i];
     else
     os=os+a[i];
     if(es>os)
     d=es-os;
     else
     d=os-es;
    }
    printf("%d ",d);
}

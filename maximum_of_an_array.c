#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);
    int a[N],i,max=-1;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<N;i++)
    {
     if(a[i]>max) 
     max=a[i];
    }
    printf("%d ",max);
}

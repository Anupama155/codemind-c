#include<stdio.h>
int cross(int x,int y,int z)
{
    int a;
    a=(z-y)/x;
    return a;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int p=cross(x,y,z);
    printf("%d",p);
}
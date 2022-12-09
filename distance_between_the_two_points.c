#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float dis;
    dis=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%.4f",dis);
}
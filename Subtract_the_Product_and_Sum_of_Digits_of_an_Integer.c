#include<stdio.h>
int main()
{
	int n,q,r,s=0,p=1,a;
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		r=q%10;
		p=p*r;
		s=s+r;
		q=q/10;
		a=p-s;
	}
	printf("%d",a);
}
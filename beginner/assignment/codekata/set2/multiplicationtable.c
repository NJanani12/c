#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	a=n*i;
	printf("%d*%d=%d\n",n,i,a);
	}
	return 0;
}

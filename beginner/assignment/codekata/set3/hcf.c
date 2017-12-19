#include<stdio.h>
int main()
{
	int n,m,i,gcd;
	scanf("%d %d",&n,&m);
	
	for(i=2;i<=n&&i<=m;i++)
	{
              if(n%i==0&&m%i==0)
              gcd=i;
	}
	printf("%d %d",gcd,gcd);
	return 0;
}

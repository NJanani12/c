#include<stdio.h>
int main()
{
	int n,m,i,gcd,lcm;
	scanf("%d %d",&n,&m);
	
	for(i=2;i<=n&&i<=m;i++)
	{
              if(n%i==0&&m%i==0)
              gcd=i;
	}
	lcm=(n*m)/gcd;
	printf("%d",lcm);
	return 0;
}

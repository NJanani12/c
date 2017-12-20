#include <stdio.h>

int main(void) {
	int a[10];
	int n,k,i,t,m,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1;j++)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

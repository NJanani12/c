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
		t=a[0];
		for(j=0;j<n;j++)
		{
			
			a[j]=a[j+1];
			
		}
		a[j]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

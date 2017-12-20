#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char s[5]="IVXL";
	char c[10];
	int n,a[5]={1,5,10,50},b,i,j;
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<=n;i++)
    {
     for(j=0;j<=n;j++)
     {
     	if(c[i]==s[j])
     	{
     		c[i]=a[j];
     	}
     	
     }
    }
    b=c[n];
    for(i=n;i>=0;i--)
    {
    if(c[i]>c[i-1])
    {
    	b-=c[i-1];
    }
    else
    {
    	b+=c[i-1];
    }
    }
	printf("%d\n",b);
  
	return 0;
}
     

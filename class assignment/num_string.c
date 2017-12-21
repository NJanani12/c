#include <stdio.h>

int main(void) {
	char s[10];
	int i,j,n,k;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
			count++;
			k=j+1;
			while(s[k]!='\0')
			{
			s[k-1]=s[k];
			k++;
			}
			s[k-1]='\0';
			}
		}
		printf("%c -%d\n",s[i],count);
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	char s[10];
	int i,j,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(s[i]==s[j])
			{
			count++;
			}
		}
		printf("%c -%d\n",s[i],count);
		i++;
	}
	return 0;
}

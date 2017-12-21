#include <stdio.h>
#define max 123
int main(void) {
	char s[100],f[max];
	int i,j,n,ascii,m;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<max;i++)
	{
		f[i]=0;
	}
	for(i=0;s[i]!='\0';i++)
	{
	ascii=(int)s[i];
	f[ascii]+=1;
	}
	m=0;
	for(i=0;i<max;i++)
	{
		if(f[i]>m)
		m=i;
	}
	printf("%c",m);
	return 0;
}

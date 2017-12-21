#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10],p[10],t;
	int i,n,j,m;
	scanf("%s",s);
	n=strlen(s);
	m=n;
            for(i=0;s[i]!='\0';i++)
            {
            p[n]=s[i];
            n--;
            }
           for(i=1;i<=m;i++)
           {
           	printf("%c",p[i]);
           }
           printf("\n");
	for(i=1;i<=m;i++)
	{
		
	if(p[i]!='a'&&p[i]!='e'&&p[i]!='i'&&p[i]!='o'&&p[i]!='u')
	{
	printf("%c",p[i]);	
	}
	}
	
	return 0;
}

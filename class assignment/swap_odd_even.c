#include<stddio.h>
int main(void)
{
char s[10],t;
int i,n;
scanf("%s",&s);
n=strlen(s);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
return 0;
}


#include<stdio.h>
int main()
{
int n,m,i,p;
scanf("%d %d",&n,&m);
p=n;
for(i=1;i<m;i++)
{
p=p*n;
}
printf("%d",p);
return 0;
}

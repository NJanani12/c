#include<stdio.h>
int main()
{
int n,m,sum=0,p,i;
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%10;
sum=(sum*10)+m;
n=n/10;
}
printf("%d",sum);
return 0;
}

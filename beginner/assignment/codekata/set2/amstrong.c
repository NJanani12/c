#include<stdio.h>
int main()
{
int n,m,sum=0,p,i;
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%10;
sum=sum+m*m*m;
n=n/10;
}
if(sum==p)
printf("amstrong number");
else
printf("not amstrong number");
return 0;
}

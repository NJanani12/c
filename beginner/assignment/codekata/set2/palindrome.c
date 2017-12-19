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
if(sum==p)
printf("palindrome");
else
printf("not palindrome");
return 0;
}



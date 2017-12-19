#include<stdio.h>
int main()
{
int n,m;
scanf("%d",&n);
m=n%2;
switch(m)
{
case 0:
printf("even");
break;
default:
printf("odd");
}
return 0;
}

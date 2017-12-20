#include <stdio.h>

int main(void) {
	int a[2],b[2],c[2],i,d;
    scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);
    printf("%d:%d\n%d:%d\n",a[0],a[1],b[0],b[1]);
    for(i=0;i<2;i++)
    {
    if(a[i]>b[i])
    c[i]=a[i]-b[i];
    else
    c[i]=b[i]-a[i];
    }
    d=(c[0]*60)+c[1];
    printf("%dminutes",d);
    return 0;
}

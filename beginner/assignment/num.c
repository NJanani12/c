#include <stdio.h>

int main(void) {
    int number;
    scanf("%d",&number);
    if(number>0)
    {
    	printf("positive");
    }
    else if(number<0)
    {
    	printf("negative");
    }
    else
    {
    	printf("zero");
    }
	return 0;
}

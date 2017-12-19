#include<stdio.h>

int main(void)
{
	int a[10],i;
	a[0]=0;
	a[1]=0;
	a[2]=0;
	
	for (i=0;i<6;i++) {
		printf("a[%d] = %d\n",i,a[i]+i*20);
	}
	return 0;
	}


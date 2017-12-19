#include<stdio.h>

int main(void)
{
	int a[3],i;

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	for (i=0;i<3;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}

	return 0;
}

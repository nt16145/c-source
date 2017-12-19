#include<stdio.h>

int main(void)
{
	int i;
	int point[5];

	point[0] = 4;
	point[1] = 0;
	point[2] = 2;
	point[3] = 5;
	point[4] = 1;

	for (i = 0; i<5; i++) {
		printf("point[%d]: %d\n",i,point[i]);
	}

	return 0;
}

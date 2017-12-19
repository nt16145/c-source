#include<stdio.h>

int main(void)
{
	int i;

	for ( i = 1; i <= 20; i++) {
		printf("%d",i);

		if (i % 2 == 0) {
			printf("\n");
		} else {
			printf(" (奇数) \n");
		}
	}
	return 0;
}

#include<stdio.h>

int main(void)
{
		int i;
		int j;

		for (i = 1; i <= 9; i++) {
			for (j = 1; j <=9; j++){
			printf("%d*%d = %02d\n",i, j, i*j);

		}
	}
	return 0;
}

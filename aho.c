#include<stdio.h>

int main(void)
{
	int a;

	for (a = 1;a <= 100; a++) {
		printf("%d",a);

		if (a % 3 == 0) {

			printf("アホ～!\n",a);
		} else {
			printf("\n");
		}
	}
	return 0;
}

#include<stdio.h>

int main(void)
{
	int a,b,i;
	while (i<5) {
		scanf("%d",&a);
		b=a+b;
		i++;
	}
	printf("%d\n",b);
	return 0;
}


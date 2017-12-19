#include<stdio.h>

int main()
{
	int x;
	int y;

	printf("整数値xを入力\n");
	printf("-->");

	scanf("%d",&x);

	y = f(x);

	printf("y = %d\n",y);

	return 0;
}

int f(int x)
{
	int a;
	a=3;
	return a*x;
}



#include<stdio.h>

int sum(int x, int y)
{
	return x+y;
}

int main(void)
{
	int x,y,a;
	printf("整数を2つ入力してくださいw\n");
	scanf("%d",&x);
	scanf("%d",&y);
	a=sum(x,y);
	printf("sum(%d.%d)の結果は、%dです。\n",x,y,a);

	return 0;
}

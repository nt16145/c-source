#include<stdio.h>

void func(int x)
{
	int y;
	int a=2;

	printf("fnuc()関数にて、引数としてx=%dを受け取りました。\n",x);

	printf("xを2乗します。\n");

	x=x*x;

	printf("func()関数ないでのxは、%dになりました。\n",x);

	printf("y=a*xを計算します。");
	y=a*x;
	printf("yは、%dになりました。\n",y);
}
int main()
{
	int x=10;
	printf("main()関数内でのxは%dです。\n",x);

	func(x);
	printf("main()関数内のxは%dのままです。\n",x);

	return 0;
}

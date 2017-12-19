#include<stdio.h>

int main(void)
{
	int x;
	int h;
	int area_int;
	float area_float;

	x= 5;
	h= 3;

	area_float=x*h/2.0;
	printf("三角形の面積その1:%f\n",area_float);
	area_float=x*h/2;
	printf("三角形の面積その2:%f\n",area_float);
	area_int=x*h/2.0;
	printf("三角形の面積その3:%d\n",area_int);

	return 0;
}
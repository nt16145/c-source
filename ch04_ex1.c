#include<stdio.h>

int main(void)
{
	int kokugo;
	int suugaku;
	int eigo;

	kokugo=80;
	suugaku=90;
	eigo=70;

	printf("国語は%d点、数学は%d点、英語%d点です。\n",kokugo,eigo,suugaku);
	printf("合計点は%d点です。\n",kokugo+eigo+suugaku);
	printf("平均点は%d点です。\n",(kokugo+eigo+suugaku)/3);
	
	return 0;
}
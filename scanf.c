#include<stdio.h>

int main(void)
{
	int age;
	printf("年齢を入力してください。\n");
	printf("-->");
	scanf("%d",&age);

	printf("あなたの年齢は、%d歳です。\n",age);
	printf("来年のあなたの年齢は、%d歳です。\n",age+1);

	return 0;
}
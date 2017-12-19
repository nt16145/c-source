#include<stdio.h>

int main(void)
{
	char gender;
	int age;

	printf("性別を入力してください。（男：m,女：f)\n");
	printf("-->");
	scanf("%c",&gender);

	printf("年齢を入力してください。\n");
	printf("-->");
	scanf("%d",&age);

	if (age <= 18 && gender == 'f'){
		printf("18歳以下の女子です。\n");
		printf("JK割引!\n");
	}

	if (age >= 60) {
		printf("60歳以上です。\n");
		printf("シニア割引!\n");
	}
	return 0;
}
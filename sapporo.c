#include<stdio.h>

int main(void)
{
	char gender;
	int age;

	printf("性別を入力してください。（男:m,女:f)\n");
	printf("-->");
	scanf("%c",&gender);
	printf("年齢を入力してください。\n");
	printf("-->");
	scanf("%d",&age);
	if (age>120) {
		printf("Error!!\n");
	} else if { (gender == 'f')
		printf("女性と子供の安心車両に乗れます\n!");
	} else if { (age <= 12)
		printf("女性と子供の安心車両に乗れます\n");
	} else {
		printf("乗れないよ～\n");
	}

	return 0;
}

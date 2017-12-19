#include<stdio.h>

int main(void)
{
	int a;
	printf("整数値を入力してください。\n");
	printf("-->");
	scanf("%d",&a);

	if (a<5) {
		printf("aは5歳未満です。\n");
	}

	if (a >= 3) {
		printf("aは3以上です。\n");
	} else {
		printf("aは3未満です。\n");
	}

	if (a >= 1) {
		printf("aは正の数です。\n");
	} else if ( a== 0) {
		printf("aはゼロです。\n");
	} else {
		printf("aは負の数です。\n");
	}

	return 0;
}
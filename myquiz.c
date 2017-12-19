#include<stdio.h>

int main(void)
{
	int a;

	printf("しまじろうのおかあさんがたべたいおにぎりは?\n");
	printf("\t1. しお\n");
	printf("\t2. さけ\n");
	printf("\t3. うめ\n");

	printf("答えを入力（1～3）　--> ");
	scanf("%d", &a);

	switch(a) {
		case 1:
			printf("不正解\n");
			break;
		case 2:
			printf("正解\n");
			break;
		case 3:
			printf("不正解\n");
			break;
		defalut:
			printf("1から3までの整数を入力\n");
			break;
	}
	return 0;
}

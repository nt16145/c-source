#include<stdio.h>

int main(void)
{
	int answer;

	printf("【問題】\n次のうち、存在しない高専はどれ?\n");
	printf("\t1. 旭川高専\n");
	printf("\t2. 山梨高専\n");
	printf("\t3. 東京高専\n");
	printf("\t4. 北九州高専\n");

	printf("答えを入力（1～4）--> ");
	scanf("%d", &answer);

	switch(answer) {
		case 1:
			printf("不正解!旭川高専はあります!（北海道旭川市）\n");
			break;
		case 2:
			printf("正解!!\n");
			break;
		case 3:
			printf("不正解!東京高専はあります!　（東京都八王子市）\n");
			break;
		case 4:
			printf("不正解!北九州高専はあります!　（福岡県北九州市）\n");
			break;
		default:
			printf("1から4までの整数を入力してください。\n");
			break;
	}
	return 0;
}


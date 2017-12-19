#include<stdio.h>
int main()
{
	int s,m;
	float sum=0;
	printf("種目番号は?\n");
	scanf("%d",&s);
	printf("時間（分）は?\n");
	scanf("%d",&m);
	switch(s){
		case1: sum=8.6*m;break;
		case2: sum=6.25*m;break;
		case3: sum=4.41*m;break;
		case4: sum=2.25*m;break;
		default: printf("入力エラー\n");
	}
	printf("消費カロリー=%7.2fKcal\n",sum);
	return 0;
}

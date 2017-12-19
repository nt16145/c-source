#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b=0,i=0;

	srand((unsigned)time(NULL));
	a=rand() % 12 + 1;
	
	do {
	b=b++;
	printf("-->");
	scanf("%d" ,&i);

	if(a != i) {
		if(a<i) {
		printf("残念!iもっと小さいです\n");
		} if(a>i) {
			printf("残念!もっと大きいです\n");
		}
	}
	} while(a!=i); 
	if(a==i) {
		printf("正解!\n");
	}
	printf("正解までに%d回かかりました。\n",b);

	return 0;
}

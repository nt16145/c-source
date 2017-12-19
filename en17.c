#include<stdio.h>

int main()
{
	int a,b,c=1,i,z;
	printf("***** マダラ模様 *****\n");
	printf("縦の大きさは?\n");
	scanf("%d",&a);
	printf("横の大きさは?\n");
	scanf("%d",&b);
	for(z=1;z<=a;z++) {
		for(i=1;i<=b;i++) {
			if(c%2==1) {
				printf("■");
			} else {
				printf("□");
			}
			c=c+1;
		}
		printf("\n");
	} return 0;
}

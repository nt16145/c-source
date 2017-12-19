#include<stdio.h>
int main()
{
	int a,b,i=0;
	printf("1\n");
	for(a=2;a<=10000;a++);{
		for(b=1;b<a;b++){
			if(a%b==0){
				i++;
			}
		}
		if(i==2){
			printf("%d",a);
		}
	}
	return 0;
}

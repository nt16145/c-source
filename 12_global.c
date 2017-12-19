#include<stdio.h>

int sum;

void func(int x)
{
        sum = sum+x;
}
void func2(int x2)
{
        sum = sum+x2;
}

int main()
{
        sum = 0;
         printf("初期状態:");
         printf("sum = %d\n",sum);

         func(10);
         printf("func()実行後:");
         printf("sum = %d\n",sum);

        func2(200);
        printf("func2()実行後:");
        printf("sum = %d\n",sum);
}


#include<stdio.h>

void sayHello()
{
	printf("Hello!\n");
}
void say(char message[])
{
	printf("%s\n",message);
}

int main()
{
	sayHello();
	say("My name is Takuya");

	return 0;
}

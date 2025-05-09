#include <stdio.h>
int main()
{
	char a[100];
	printf("Enter your name=");
	gets(a);
	printf("Your name is ");
	puts(a);
	return 0;
}
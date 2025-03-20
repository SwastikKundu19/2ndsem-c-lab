//Write a program to find whether a given number is positive.

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number = ");
	scanf("%d",&a);
	if(a>0)
		printf("%d is positive",a);
	else if(a==0)
		printf("%d is zero",a);
	else
		printf("%d is negative",a);
	return 0;
}
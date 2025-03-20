//write a simple program that print the result of all the operators available in c (including pre/ post incriment)

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a value=");
	scanf("%d",&a);
	printf("pre incriment %d \n post incriment %d",++a,a++);
	return 0;
}
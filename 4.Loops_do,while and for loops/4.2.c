//Write a program to print table of any number.

#include <stdio.h>
int main()
{
	int i,a,n;
	printf("Enter a number=");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		n=a*i;
		printf("%d X %d = %d\n",a,i,n);
	}
	return 0;
}
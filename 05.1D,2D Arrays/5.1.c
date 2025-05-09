//Write a program to insert 5 elements into array and print elements of array.

#include <stdio.h>
int main()
{
	int a[5],i;
	for(i=1;i<=5;i++)
	{
		printf("Enter %d element = ",i);
		scanf("%d",&a[i-1]);
	}
	printf("Array elements are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
} 
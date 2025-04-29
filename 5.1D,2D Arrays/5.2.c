// Write a program to merge two sorted array in one sorted array.

#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("1st array \n");
	for(i=1;i<=5;i++)
	{
		printf("Enter %d element = ",i);
		scanf("%d",&a[i-1]);
	}
	printf("1st array value:-\n");
	for(i=1;i<=5;i++)
	{
		printf(" %d  \n",a[i-1]);
	}
	printf("\n");
	printf("2nd array \n");
	for(i=1;i<=5;i++)
	{
		printf("Enter %d element = ",i);
		scanf("%d",&b[i-1]);
	}
	printf("2nd array value:-\n");
	for(i=1;i<=5;i++)
	{
		printf(" %d  \n",b[i-1]);
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		c[i-1]=a[i-1]+b[i-1];
	}
	printf(" Addition of both array each element by element is :\n");
	for(i=1;i<=5;i++)
	{
		printf(" %d \n",c[i-1]);
	}
	return 0;
}
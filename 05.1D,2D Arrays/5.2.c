// Write a program to merge two sorted array in one sorted array.

//code:-

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
		printf(" %d  \t",a[i-1]);
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
		printf(" %d  \t",b[i-1]);
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		c[i-1]=a[i-1]+b[i-1];
	}
	printf(" Addition of both array each element by element is :\n");
	for(i=1;i<=5;i++)
	{
		printf(" %d \t",c[i-1]);
	}
	return 0;
}

//output:-

/*

1st array
Enter 1 element = 1
Enter 2 element = 2
Enter 3 element = 3
Enter 4 element = 4
Enter 5 element = 5
1st array value:-
 1       2       3       4       5
2nd array
Enter 1 element = 10
Enter 2 element = 20
Enter 3 element = 30
Enter 4 element = 40
Enter 5 element = 50
2nd array value:-
 10      20      30      40      50
 Addition of both array each element by element is :
 11      22      33      44      55

*/
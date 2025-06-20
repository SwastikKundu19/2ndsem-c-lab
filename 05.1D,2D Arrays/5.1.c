//Write a program to insert 5 elements into array and print elements of array.

//code:-

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

//Output:-

/*

Enter 1 element = 1
Enter 2 element = 2
Enter 3 element = 3
Enter 4 element = 4
Enter 5 element = 5
Array elements are
1
2
3
4
5

*/ 
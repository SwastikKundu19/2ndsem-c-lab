//Write a program to insert 5 elements into array and print search elements of array.

#include <stdio.h>
int main()
{
	int a[5],i,se,b=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter %d element = ",i);
		scanf("%d",&a[i-1]);
	}
	printf("Enter search element = ");
	scanf("%d",&se);
	for(i=0;i<5;i++)
	{
		if(a[i]==se)
		{
			b=1;
			break;
	    }
	}
	if(b==1)
	{
		printf("%d element is exist",se);
		
	}
	else
	{
		printf("%d element is not exist",se);
	}
	return 0;
} 
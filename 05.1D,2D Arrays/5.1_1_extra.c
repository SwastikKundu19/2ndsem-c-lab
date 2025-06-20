//Write a program to insert 5 elements into array and print search elements of array.

//code:-

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


//Output:-
/*

Enter 1 element = 10
Enter 2 element = 20
Enter 3 element = 30
Enter 4 element = 40
Enter 5 element = 40
Enter search element = 30
30 element is exist

*/
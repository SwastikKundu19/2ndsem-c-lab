//Write a c program to create function to add two number

//code
#include <stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("Enter 1st number=");
	scanf("%d",&a);
	printf("Enter 2nd number=");
	scanf("%d",&b);
	printf("Addition of %d and %d = %d",a,b,add(a,b));
	return 0;
}
int add(c,d)
{
	return c+d;
}

//Output

/*
Enter 1st number=2
Enter 2nd number=3
Addition of 2 and 3 = 5
*/
//Write a program to find greatest of three numbers using nested if/else if statements only.

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number = ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is greatest",a);
        else
        	printf("%d is greatest",c);
	}
	else
	{
		if(b>c)
		printf("%d is greatest",b);
	    else
		printf("%d is greatest",c);
	}
	return 0;
}
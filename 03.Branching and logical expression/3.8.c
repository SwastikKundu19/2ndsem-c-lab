//Write a program to print day of a week using switch case statement.

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a day =");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednessday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Friday");
		    break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;	
	    default:printf("press 1 to 7");
	}
	return 0;
}
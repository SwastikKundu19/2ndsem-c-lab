//Given the value of three variable entered by user, write a program to compute and display the value of X,where X=a/(b-c).

//Code:-

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value a=");
	scanf("%d",&a);
	printf("Enter a value b=");
	scanf("%d",&b);
	printf("Enter a value c=");
	scanf("%d",&c);
	printf("the value of X =%d",a/(b-c));
	return 0;
}

//
/*

Enter a value a=2
Enter a value b=4
Enter a value c=6
the value of X =-1

*/
//Given the value of three variable entered by user, write a program to compute and display the value of X,where X=a/(b-c).

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
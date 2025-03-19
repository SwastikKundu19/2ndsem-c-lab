//WAP to perform simple arithmetic operation in c(addition , substraction , multiplacation , division , modulo)

#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	printf("Enter 1st number=");
	scanf("%d",&a);
	printf("Enter 2nd number=");
	scanf("%d",&b);
	printf("Addition of %d and %d = %d\n",a,b,a+b);
	printf("Substraction of %d and %d = %d\n",a,b,a-b);
	printf("Multiplacation of %d and %d = %d\n",a,b,a*b);
	printf("Division of %d and %d = %d\n",a,b,a/b);
	printf("Modulus of %d and %d = %d",a,b,a%b);
	return 0;
}
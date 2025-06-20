//WAP to perform simple arithmetic operation in c(addition , substraction , multiplacation , division , modulo)

//Code:-

#include <stdio.h>
int main()
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

//Output:-

/*

Enter 1st number=4
Enter 2nd number=2
Addition of 4 and 2 = 6
Substraction of 4 and 2 = 2
Multiplacation of 4 and 2 = 8
Division of 4 and 2 = 2
Modulus of 4 and 2 = 0

*/
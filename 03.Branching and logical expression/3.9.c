//Write a design of a simple calculater using switch case statement.

#include <stdio.h>
int main()
{
	int a,b;
	char i;
	printf("You press:-\n Addition = + \n Substraction = - \n Multiplacation = * \n Division = / \n  Modulo = %\n\n");
	printf("press any symbol =");
	scanf("%c",&i);
	switch(i)
	{
		case '+':
			printf("Enter 1st number=");
	        scanf("%d",&a);
	        printf("Enter 2nd number=");
	        scanf("%d",&b);
	        printf("Addition of %d and %d = %d\n",a,b,a+b);
			break;
		case '-':
			printf("Enter 1st number=");
	        scanf("%d",&a);
	        printf("Enter 2nd number=");
            scanf("%d",&b);		
            printf("Substraction of %d and %d = %d\n",a,b,a-b);
			break;
		case '*':
			printf("Enter 1st number=");
	        scanf("%d",&a);
	        printf("Enter 2nd number=");
            scanf("%d",&b);
            printf("Multiplacation of %d and %d = %d\n",a,b,a*b);
			break;
		case '/':
			printf("Enter 1st number=");
	        scanf("%d",&a);
	        printf("Enter 2nd number=");
            scanf("%d",&b);
            printf("Division of %d and %d = %d\n",a,b,a/b);
			break;
		case '%':
			printf("Enter 1st number=");
	        scanf("%d",&a);
	        printf("Enter 2nd number=");
            scanf("%d",&b);
            printf("Modulus of %d and %d = %d",a,b,a%b);
			break;
	    default:printf("press correct symbol");
	}
	return 0;
}
//Write a program to convert one data type to another using auto conversion and casting.take the value for user input.

//Code:-
#include <stdio.h>
int main()
{
	float a;
	printf("Enter a value = ");
	scanf("%f",&a);
	printf("Ascii value of %f =%c\n",a,(char)a);
	printf("Integer value of %f = %d",a,(int)a);
	return 0;
}

//Output:-
/*
Enter a value = 65
Ascii value of 65.000000 =A
Integer value of 65.000000 = 65
*/
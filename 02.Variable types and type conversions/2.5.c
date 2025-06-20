//WAP to find area and perimeter of a circle.

//Code:-

#include <stdio.h>
int main()
{
	float pi=3.14,r;
	printf("Enter radious of a circle=");
	scanf("%f",&r);
	printf("Area of a circle=%f\n",pi*r*r);
	printf("Perimeter of a circle=%f",2*pi*r);
	return 0;
}

//Output:-

/*

Enter radious of a circle=10
Area of a circle=314.000010
Perimeter of a circle=62.800002

*/
//WAP to find area and perimeter of a circle.

#include <stdio.h>
int main(int argc, char** argv)
{
	float pi=3.14,r;
	printf("Enter radious of a circle=");
	scanf("%f",&r);
	printf("Area of a circle=%f\n",pi*r*r);
	printf("Perimeter of a circle=%f",2*pi*r);
	return 0;
}
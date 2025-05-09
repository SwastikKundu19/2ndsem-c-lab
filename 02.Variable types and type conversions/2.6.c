
// WAP to find area and perimeter of a rectangle.

#include <stdio.h>
int main()
{
	float l,w;
	printf("Enter length of a rectangle=");
	scanf("%f",&l);
	printf("Enter length of a rectangle=");
	scanf("%f",&w);
	printf("Area of a rectangle=%f\n",l*w);
	printf("Perimeter of a rectangle=%f",2*(l+w));
	return 0;
}
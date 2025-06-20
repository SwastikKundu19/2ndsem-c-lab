// WAP to find area and perimeter of a rectangle.

//Code:-

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

//Output:-

/*

Enter length of a rectangle=29
Enter length of a rectangle=17
Area of a rectangle=493.000000
Perimeter of a rectangle=92.000000

*/
//write a simple program that print the result of all the operators available in c (including pre/ post incriment)

//Code:-

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a value=");
	scanf("%d",&a);
	printf("pre incriment %d \n post incriment %d",++a,a++);
	return 0;
}

//Output:-

/*

Enter a value=5
pre incriment 7
 post incriment 5

*/
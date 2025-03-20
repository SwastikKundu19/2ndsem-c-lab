//Write a program to print counting 1 to 10 using all loop.

#include <stdio.h>
int main()
{
	int i,w=1,d=1;
	//for loop
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	//while loop 
	while(w<=10)
	{
		printf("%d\n",w);
		w++;	
	}
	//do while loop
	do
	{
		printf("%d\n",d);
		d++;
	}while(d<=10);
	return 0;
}
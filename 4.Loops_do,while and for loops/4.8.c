//Write a program to find whethwr the given number is prime or not.

#include <stdio.h>
int main()
{
	int n,m=0,i;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%10==0)
		{
			printf("%d is prime",n);  
			m=1;
			break;
			
		}
	}
	if(m==0)
		printf("%d is not prime",n);
	return 0;
}
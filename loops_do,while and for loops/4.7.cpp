#include <stdio.h>
int main(int argc, char** argv)
{
	int n,tem,rev=0,rem;
	printf("Enter a number=");
	scanf("%d",&n);
	tem=n;
	while(n>0)
	{
		rem=n%10;
	    rev=(rev*10)+rem;
		n=n/10;
	}
	if(tem==rev)
		printf("%d is palindrom",tem);
	else
		printf("%d is not palindrom",tem);
	return 0;
}
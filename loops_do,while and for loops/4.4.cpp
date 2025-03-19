#include <stdio.h>
int main()
{
	int i,n,sum=0,d;
	printf("Enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
	    sum=sum+d;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
#include <stdio.h>
int main()
{
	int i,n,a=1;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;i--)
	{
		a=a*i;
	}
	printf("%d",n);
	return 0;
}
//not run
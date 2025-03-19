#include <stdio.h>
int main(int argc, char** argv)
{
	int n,a=0,b=1,c,i;
	printf("Enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
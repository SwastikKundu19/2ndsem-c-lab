             /*       1
                      12
                      123
                      1234
                      12345    */

#include <stdio.h>
int main(int argc, char** argv)
{
	int r,i,j;
	printf("enter the number of row = ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	} 
	return 0;
}
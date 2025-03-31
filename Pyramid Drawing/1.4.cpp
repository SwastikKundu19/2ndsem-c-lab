                  /*      *****
                          ****
                          ***
                          **
                          *        */
                          
#include <stdio.h>
int main()
{
	int r,i,j;
	printf("enter the number of row = ");
	scanf("%d",&r);
	for(i=r;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	} 
	return 0;
}
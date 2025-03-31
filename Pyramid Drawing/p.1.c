                     /*          *
                                 **
                                 ***
                                 ****
                                 *****     */
#include <stdio.h>
int main()
{
	int r,i,j;
	printf("enter the number of row = ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	} 
	return 0;
}
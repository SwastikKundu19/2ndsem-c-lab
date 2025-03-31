            /*        A
                      BB
                      CCC
                      DDDD
                      EEEEE    */
                      
#include <stdio.h>
int main()
{
	int r,a,d,i,j;
	char ch;
	printf("Enter the number of row=");
	scanf("%d",&r);
	a=1;
    for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			d=a+64;
			ch=(char)d;
			printf("%c",ch);
		}
		a++;
		printf("\n");
	} 
	return 0;
}
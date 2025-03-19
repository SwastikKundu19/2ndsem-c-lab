            /*        A
                      BB
                      CCC
                      DDDD
                      EEEEE    */
                      
#include <stdio.h>
int main(int argc, char** argv)
{
	int r,a,d,i,j,b;
	char ch;
	printf("Enter the number of row=");
	scanf("%d",&r);
		for(i=1;i<=r;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			d=a+64;
			ch=(char)d;
			for(b=0;b<=i-1;b++)
			{
			printf("%c",ch);	
			}
			a++;
		}
		printf("\n");
	} 
	return 0;
}
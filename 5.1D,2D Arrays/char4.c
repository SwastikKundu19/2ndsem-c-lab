// String length
#include <stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	char a[100],i;
	printf("Enter your name=");
	scanf("%[^\n]s",a);
	printf("Your name is ");
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\nLength is = %d",i);
	printf("\nLength is = %d\n",strlen(a));
    return 0;
}
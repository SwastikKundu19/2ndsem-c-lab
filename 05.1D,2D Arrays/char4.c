// String length
#include <stdio.h>
#include<string.h>
int main()
{
	char a[100],i;
	printf("Enter your name=");
	gets(a);
	printf("Your name is ");
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\nLength is = %d",i);
	printf("\nLength is = %d",strlen(a));
    return 0;
}
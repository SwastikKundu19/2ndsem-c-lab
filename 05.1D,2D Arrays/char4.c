// String length

//Code:-

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
	printf("\nLength is = %d",strlen(a)); // use string function
    return 0;
}

//Output:-

/*

Enter your name=SWASTIK KUNDU
Your name is SWASTIK KUNDU
Length is = 13
Length is = 13

*/
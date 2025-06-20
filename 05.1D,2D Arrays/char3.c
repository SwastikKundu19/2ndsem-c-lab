//Code:-

#include <stdio.h>
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
    return 0;
}

//Output:-

/*

Enter your name=SWASTIK KUNDU
Your name is SWASTIK KUNDU

*/
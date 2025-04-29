 // String Compare

#include<string.h>
int main()
{
	char str1[]="Swastik";
	char str2[]="swastik";
	int i;
	i=strcmp(str1,str2);
	if(i==0)
		printf("Same");
	else
		printf("Not same");
    return 0;
}
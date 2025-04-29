//Write a program for user defined data type namely book and implement it using Structure.

#include <stdio.h>
struct student
{
	char name[30];
	char writer_name[30];
	int price;	
};
int main(int argc, char** argv)
{
	int i;
	struct student s[5];
	for(i=1;i<=5;i++)
	{
		printf("Enter %d Book name = ",i);
		gets(s[i-1].name);
		printf("Enter %d Writer name = ",i);
		gets(s[i-1].writer_name);
		printf("Enter %d Price = ",i);
		scanf("%d",&s[i-1].price);
		fflush(stdin);
		printf("\n");
	}
	printf("\n-------------- STUDENT INFOTMATION --------------\n");
	for(i=1;i<=5;i++)
	{
		printf("%d student name = ",i);
		puts(s[i-1].name);
		printf("%d Writer name = ",i);
		puts(s[i-1].writer_name);
		printf("%d Price = %d ",i,s[i-1].price);
		printf("\n\n");
	}
	return 0;
}
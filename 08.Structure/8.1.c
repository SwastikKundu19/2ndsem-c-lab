//Write a program for user defined data type namely student and implement it using Structure.


#include <stdio.h>
struct student
{
	char name[30];
	char dept[30];
	int class_roll;	
	int uni_roll;
};
int main(int argc, char** argv)
{
	int i;
	struct student s[5];
	for(i=1;i<=5;i++)
	{
		printf("Enter %d student name = ",i);
		gets(s[i-1].name);
		printf("Enter %d student dept = ",i);
		gets(s[i-1].dept);
		printf("Enter %d student Class roll number = ",i);
		scanf("%d",&s[i-1].class_roll);
		printf("Enter %d student university roll number = ",i);
		scanf("%d",&s[i-1].uni_roll);
		fflush(stdin);
		printf("\n");
	}
	printf("\n-------------- STUDENT INFOTMATION --------------\n");
	for(i=1;i<=5;i++)
	{
		printf("%d student name = ",i);
		puts(s[i-1].name);
		printf("%d student dept = ",i);
		puts(s[i-1].dept);
		printf("%d student Class roll number = %d ",i,s[i-1].class_roll);
		printf("\n%d student university roll number = %d ",i,s[i-1].uni_roll);
		printf("\n\n");
	}
	return 0;
}
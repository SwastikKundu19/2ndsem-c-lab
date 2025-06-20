//Write a program for user defined data type namely student and implement it using Structure.


#include <stdio.h>
struct student
{
	char name[30];
	char dept[30];
	int class_roll;	
	int uni_roll;
};
int main()
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

//Output:-

/*

Enter 1 student name = Swastik Kundu
Enter 1 student dept = cse
Enter 1 student Class roll number = 13
Enter 1 student university roll number = 1051
Enter 2 student name = Saikat Ghose
Enter 2 student dept = cse
Enter 2 student Class roll number = 32
Enter 2 student university roll number = 1052
Enter 3 student name = Rudranil Patra
Enter 3 student dept = cse
Enter 3 student Class roll number = 08
Enter 3 student university roll number = 1053
Enter 4 student name = Suryadeep dey
Enter 4 student dept = IT
Enter 4 student Class roll number = 34
Enter 4 student university roll number = 1055
Enter 5 student name = Jit karmakar
Enter 5 student dept = cse
Enter 5 student Class roll number = 14
Enter 5 student university roll number = 1054

-------------- STUDENT INFOTMATION --------------
1 student name = Swastik Kundu
1 student dept = cse
1 student Class roll number = 13
1 student university roll number = 1051 2 student name = Saikat Ghose
2 student dept = cse
2 student Class roll number = 32
2 student university roll number = 1052 3 student name = Rudranil Patra
3 student dept = cse
3 student Class roll number = 8
3 student university roll number = 1053 4 student name = Suryadeep dey
4 student dept = IT
4 student Class roll number = 34
4 student university roll number = 1055 5 student name = Jit karmakar
5 student dept = cse
5 student Class roll number = 14
5 student university roll number = 1054

*/
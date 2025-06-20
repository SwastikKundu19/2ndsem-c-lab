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

//Output:-

/*

Enter 1 Book name = abc
Enter 1 Writer name = ABC
Enter 1 Price = 123

Enter 2 Book name = def
Enter 2 Writer name = DEF
Enter 2 Price = 456

Enter 3 Book name = ghi
Enter 3 Writer name = GHI
Enter 3 Price = 789

Enter 4 Book name = jkl
Enter 4 Writer name = JKL
Enter 4 Price = 123

Enter 5 Book name = mno
Enter 5 Writer name = MNO
Enter 5 Price = 456


-------------- STUDENT INFOTMATION --------------
1 student name = abc
1 Writer name = ABC
1 Price = 123

2 student name = def
2 Writer name = DEF
2 Price = 456

3 student name = ghi
3 Writer name = GHI
3 Price = 789

4 student name = jkl
4 Writer name = JKL
4 Price = 123

5 student name = mno
5 Writer name = MNO
5 Price = 456

*/
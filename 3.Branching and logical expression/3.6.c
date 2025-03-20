//Given the marks os a student studying five different subject. Calculate average and grade.

#include <stdio.h>
int main()
{
	int m,c,p,g,e,avg;
	printf("Marks of Engineering mathematic=");
	scanf("%d",&m);
    printf("Marks of chemistry=");
	scanf("%d",&c);
    printf("Marks of programming=");
	scanf("%d",&p);
    printf("Marks of Engineering graphics=");
	scanf("%d",&g);
    printf("Marks of English=");
	scanf("%d",&e);
	avg=(m+c+p+g+e)/5;
	if(avg>=90)
		printf("Grade = A \t Average = %d",avg);
	else if(avg>=75&&avg<90)
		printf("Grade = B \t Average = %d",avg);
    else if(avg>=60&&avg<75)
		printf("Grade = C \t Average = %d",avg);
	else if(avg>=50&&avg<60)
		printf("Grade = D \t Average = %d",avg);
	else
		printf("Grade = F \t Average = %d",avg);
	
	return 0;
}
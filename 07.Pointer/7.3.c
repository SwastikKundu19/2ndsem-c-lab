//WAP to calculate factorial of a number using recursion. 


//Code:-

#include <stdio.h>
void fact(int n, int *result)
 {
    if (n == 0 || n == 1) 
	{
        *result = 1;
    } else 
	{
        int temp;
        fact(n - 1,&temp);
        *result = n * temp;
    }
}
int main() 
{
    int num;
    int result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{
        fact(num, &result);
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}


//Output:-
/*
Enter a positive integer: 5
Factorial of 5 is 120
*/

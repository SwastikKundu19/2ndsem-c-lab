//Write a program to print the following numbers in reverse order using array.

#include <stdio.h>
int main() 
{
    int n[10],i; 
    printf("Enter 10 numbers:\n");
    for ( i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("The numbers in reverse order are:\n");
    for ( i = 9; i >= 0; i--) 
	{
        printf("%d\n ", n[i]);
    }
    return 0;
}


//Write a program to print the following numbers in reverse order using array.

//Code:-

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
        printf("%d\t ", n[i]);
    }
    return 0;
}

//Output:-

/*

Enter 10 numbers:
Number 1: 0
Number 2: 1
Number 3: 2
Number 4: 3
Number 5: 4
Number 6: 5
Number 7: 6
Number 8: 7
Number 9: 8
Number 10: 9
The numbers in reverse order are:
9        8       7       6       5       4       3       2       1       0

*/
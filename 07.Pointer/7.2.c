// WAP to implement call by reference for swapping of two numbers. 

//Code:-
#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

//Output:-
/*
Enter two numbers: 2
3
Before swapping:
x = 2, y = 3
After swapping:
x = 3, y = 2
*/
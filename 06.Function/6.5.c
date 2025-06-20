//Write a c program to swip two integers using call by value and call by reference method of passing arguments to a function. 

//code:-

#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}
int main() 
{
    int x = 10, y = 20;
    printf("Original values: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap By Value: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap By Reference: x = %d, y = %d\n", x, y);
    return 0;
}


//output:-
/*
Original values: x = 10, y = 20
Inside swapByValue: a = 20, b = 10
After swap By Value: x = 10, y = 20
Inside swapByReference: a = 20, b = 10
After swap By Reference: x = 20, y = 10
*/
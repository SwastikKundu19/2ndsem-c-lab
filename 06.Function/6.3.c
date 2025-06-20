//Write a c program to create function to swap two numbes using call by value.

//code:-

#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Swap function: a = %d, b = %d\n", a, b);
}
int main() 
{
    int x = 10, y = 20;

    printf("Before swap function: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap function: x = %d, y = %d\n", x, y);

    return 0;
}


//Output:-
/*
Before swap function: x = 10, y = 20
Swap function: a = 20, b = 10
After swap function: x = 10, y = 20
*/                                      

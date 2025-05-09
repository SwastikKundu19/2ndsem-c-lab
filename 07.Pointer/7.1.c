 //WAP to understand basic use of pointers. 
 
 //code:-
 
 #include <stdio.h>
int main() {
    int a = 10;         
    int *ptr;           
    ptr = &a;           
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in ptr (address of a): %p\n", ptr);
    printf("Value pointed to by ptr (value of a): %d\n", *ptr);
    *ptr = 20;
    printf("Value of a after change value pointer: %d\n", a);
    return 0;
}

// Output:-
/*
Value of a: 10
Address of a: 0060FEF8
Value stored in ptr (address of a): 0060FEF8
Value pointed to by ptr (value of a): 10
Value of a after change value pointer: 20
*/
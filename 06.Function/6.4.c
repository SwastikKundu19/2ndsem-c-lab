//Write a c program to generate fibonacci series using recursive function

//code:-
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0)
        return 0; 
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n, i;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

//output:-
/*
Enter the number of terms in Fibonacci series: 10
Fibonacci series up to 10 terms:
0 1 1 2 3 5 8 13 21 34
*/
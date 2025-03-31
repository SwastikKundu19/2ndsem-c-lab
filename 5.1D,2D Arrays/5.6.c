//Write a program to find average of 10 numbers using array.

#include <stdio.h>

int main() {
    int n[10],i,sum = 0; 
    float avg;   
    printf("Enter 10 numbers:\n");
    for ( i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for ( i = 0; i < 10; i++) {
        sum += n[i];
    }
    avg = sum / 10.0;
    printf("The average of the 10 numbers is: %.2f\n", avg);

    return 0;
}

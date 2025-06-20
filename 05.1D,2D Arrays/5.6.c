//Write a program to find average of 10 numbers using array.

//code:-

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
    printf("The average of the 10 numbers is: %f\n", avg);

    return 0;
}

//Output:-

/*

Enter 10 numbers:
Number 1: 10
Number 2: 33
Number 3: 55
Number 4: 44
Number 5: 20
Number 6: 40
Number 7: 98
Number 8: 79
Number 9: 66
Number 10: 96
The average of the 10 numbers is: 54.099998

*/
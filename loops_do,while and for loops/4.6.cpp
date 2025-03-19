#include <stdio.h>

int main()
 {
    int num, originalNum, remainder, result = 0, n = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Compute sum of nth power of each digit
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        // Compute remainder^n using a loop (instead of pow function)
        power = 1;
        for (i = 0; i < n; i++)
            power *= remainder;

        result += power;
        temp /= 10;
    }

    // Check if Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
//Write a program to multiply matrices in 2-D array.

// code:-

#include <stdio.h>

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Cannot multiply, columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//output:-

/*
Enter rows and columns for first matrix: 3
3
Enter rows and columns for second matrix: 3
3
Enter elements of first matrix:
Enter element [0][0]: 1
Enter element [0][1]:2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
Enter elements of second matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
Product of the two matrices:
30      36      42
66      81      96
102     126     150
*/
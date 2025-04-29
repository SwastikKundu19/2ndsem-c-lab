//Write a program to add matrices in 2-D array.

//code:-

#include <stdio.h>
int main() {
    int rows, cols, i, j,matrix1[100][100], matrix2[100][100], sum[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//output:
/*
Enter number of rows: 2
Enter number of columns: 3
Enter elements of first matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter elements of second matrix:
Enter element [0][0]: 7
Enter element [0][1]: 8
Enter element [0][2]: 9
Enter element [1][0]: 1
Enter element [1][1]: 2
Enter element [1][2]: 3
Sum of the two matrices:
8       10      12
5       7       9
*/
//Write a program to find transpose of a matrix.

//code:-

#include <stdio.h>

int main() {
    int matrix[100][100], transpose[100][100];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//output:-

/* 
Enter number of rows: 3
Enter number of columns: 4
Enter elements of the matrix:
Enter element [0][0]: 1
Enter element [0][1]: 1
Enter element [0][2]: 1
Enter element [0][3]: 1
Enter element [1][0]: 2
Enter element [1][1]: 2
Enter element [1][2]: 2
Enter element [1][3]: 2
Enter element [2][0]: 3
Enter element [2][1]: 3
Enter element [2][2]: 3
Enter element [2][3]: 3
Transpose of the matrix:
1       2       3
1       2       3
1       2       3
1       2       3
*/ 
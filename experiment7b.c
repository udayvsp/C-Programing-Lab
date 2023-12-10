#include <stdio.h>

// Function to perform matrix multiplication
void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][3], int result[][3], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    // Initializing elements of result matrix to 0
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            for (int k = 0; k < colFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][3], int row, int col) {
    printf("Matrix:\n");

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    int rowFirst = 3, colFirst = 3;
    int rowSecond = 3, colSecond = 3;

    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible.\n");
    } else {
        multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, rowSecond, colSecond);

        // Displaying the multiplication result
        printf("Result of matrix multiplication:\n");
        displayMatrix(resultMatrix, rowFirst, colSecond);
    }

    return 0;
}

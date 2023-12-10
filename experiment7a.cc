#include <stdio.h>

// Function to read elements into a 2D array
void readArray(int arr[][3], int rows, int cols) {
    printf("Enter elements of the array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print elements of a 2D array
void printArray(int arr[][3], int rows, int cols) {
    printf("Elements of the array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Assuming a 3x3 array for this example
    int rows = 3;
    int cols = 3;

    int myArray[3][3];

    // Read elements into the array
    readArray(myArray, rows, cols);

    // Print elements of the array
    printArray(myArray, rows, cols);

    return 0;
}

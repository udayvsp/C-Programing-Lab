#include <stdio.h>

int main() {
    // Declare an array
    int arr[] = {10, 5, 8, 15, 7};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize variables to store maximum element and its index
    int maxElement = arr[0];
    int maxIndex = 0;

    // Loop through the array to find the maximum element and its index
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Print the maximum element and its index
    printf("Maximum Element: %d\n", maxElement);
    printf("Index of Maximum Element: %d\n", maxIndex);

    return 0;
}

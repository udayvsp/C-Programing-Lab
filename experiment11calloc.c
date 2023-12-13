#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for an integer array of 'size' elements
    arr = (int *)calloc(size, sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    // Input values into the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("Elements of the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Deallocate the allocated memory using free()
    free(arr);

    return 0;
}

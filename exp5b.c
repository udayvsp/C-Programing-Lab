//wap in c to calculate sum of digit of a number using a while loop
#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    // Read the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number in a variable
    originalNum = num;

    // Use a while loop to calculate the sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Print the sum of digits
    printf("Sum of digits of %d = %d\n", originalNum, sum);

    return 0;
}

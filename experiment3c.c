#include <stdio.h>
#include<math.h>

int main() {
    int choice;
    
    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Circle
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                double area = M_PI * radius * radius;
                double perimeter = 2 * M_PI * radius;
                printf("Area of the circle: %lf\n", area);
                printf("Perimeter of the circle: %lf\n", perimeter);
            }
            break;
        case 2:
            // Square
            {
                double side;
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                double area = side * side;
                double perimeter = 4 * side;
                printf("Area of the square: %lf\n", area);
                printf("Perimeter of the square: %lf\n", perimeter);
            }
            break;
        case 3:
            // Rectangle
            {
                double length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                double area = length * width;
                double perimeter = 2 * (length + width);
                printf("Area of the rectangle: %lf\n", area);
                printf("Perimeter of the rectangle: %lf\n", perimeter);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

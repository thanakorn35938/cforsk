#include <stdio.h>

int main() {
    int choice;
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Square\n");
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius;
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Area of circle: %.2f\n", 3.14 * radius * radius);
            break;
        }
        case 2: {
            float base, height;
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of triangle: %.2f\n", 0.5 * base * height);
            break;
        }
        case 3: {
            float length, width;
            printf("Enter length of square: ");
            scanf("%f %f", &length, &width);
            printf("Area of square: %.2f\n", (float)(length * width));
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
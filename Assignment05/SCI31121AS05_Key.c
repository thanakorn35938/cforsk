#include <stdio.h>

int main() {
    int choice;
    const float pi = 3.14;
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Square\n");
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int radius;
            printf("Enter radius: ");
            scanf("%d", &radius);
            printf("Area of circle: %.2f\n", 3.14 * radius * radius);
            break;
        }
        case 2: {
            int base, height;
            printf("Enter base and height of triangle: ");
            scanf("%d %d", &base, &height);
            printf("Area of triangle: %.2f\n", 0.5 * base * height);
            break;
        }
        case 3: {
            int length;
            printf("Enter length of square: ");
            scanf("%d", &length);
            printf("Area of square: %.2f\n", (float)(length * length));
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
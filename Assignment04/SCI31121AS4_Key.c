#include <stdio.h>

int main() {
    int unit;
    float price = 0.0;

    printf("Enter the number of units: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        price = unit * 20.00;
    } else {
        price = 50 * 20.00; // First 50 units
        unit -= 50; // Subtract the first 50 units

        // Calculate price for units beyond 50
        while (unit > 0) {
            if (unit <= 9) { // For units 51-59
                price += unit * 5.25;
                unit -= unit; // Subtract processed units
            } else { // For units 60 and beyond
                price += 10 * (5.25 + (unit / 10 - 1)); // Increment price for each 10-unit range
                unit -= 10; // Process next 10 units
            }
        }
    }

    printf("The total cost is: %.2f THB\n", price);

    // Check for water usage level
    if (unit > 100) {
        printf("OVERLOAD\n");
    } else {
        printf("NORMAL\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int unit;
    float price = 0.0;

    printf("Enter the number of units: ");
    scanf("%d", &unit);

    if(unit < 50){
        price = unit * 20;
    } else if (unit >= 50 && unit < 60){
        price = unit * 5.25;
    } else if (unit >= 60 && unit < 70){
        price = unit * 6.25;
    } else if (unit >= 70 && unit < 80){
        price = unit * 7.25;
    } else if (unit >= 80 && unit < 90){
        price = unit * 8.25;
    } else if (unit >= 90 && unit < 100){
        price = unit * 9.25;
    } else if (unit >= 100){
        price = unit * 10.25;
        printf("The price is %.2f\n", price);
        printf("OVERLOAD");
        return 0; // Ensure the function exits after handling the overload case
    }

    // Print the price for units less than 100
    printf("The price is %.2f\n", price);
    printf("NORMAL");
}
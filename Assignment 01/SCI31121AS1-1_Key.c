#include <stdio.h>

int main() {
    int amount, ten, five, one;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    ten = amount / 10;
    amount = amount % 10;

    five = amount / 5;
    amount = amount % 5;

    one = amount;

    printf("10 coins: %d\n", ten);
    printf("5 coins: %d\n", five);
    printf("1 coins: %d\n", one);
    return 0;
}

/**
 * @brief 
 * It takes two integers as input and returns the result of the calculation.
 *
 * @param num1 The first integer input for the calculation.
 * @param num2 The second integer input for the calculation.
 * @return The result of the calculation.
 *
 *  * 
 * This function performs a calculation based on the given input parameters. 
 **/

//This program is created by Thanakorn Buathongtanakarn.
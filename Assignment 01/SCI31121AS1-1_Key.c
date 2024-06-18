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

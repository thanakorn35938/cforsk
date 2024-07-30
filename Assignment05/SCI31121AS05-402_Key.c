#include <stdio.h>

int main() {
    float height1, height2, height3, height4, height5;
    int shortest;

    printf("Enter the height of person 1: ");
    scanf("%f", &height1);
    printf("Enter the height of person 2: ");
    scanf("%f", &height2);
    printf("Enter the height of person 3: ");
    scanf("%f", &height3);
    printf("Enter the height of person 4: ");
    scanf("%f", &height4);
    printf("Enter the height of person 5: ");
    scanf("%f", &height5);

    shortest = height1;

    if (height2 < shortest) {
        shortest = height2;
    }
    if (height3 < shortest) {
        shortest = height3;
    }
    if (height4 < shortest) {
        shortest = height4;
    }
    if (height5 < shortest) {
        shortest = height5;
    }

    printf("The shortest person has a height of %d\n", shortest);

    return 0;
}
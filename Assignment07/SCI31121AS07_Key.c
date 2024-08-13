#include <stdio.h>
int main() {
    //Write code here.
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d is %d\n", num, sum);
    return 0;
}

//This program is created by Thanakorn Buathongtanakarn.
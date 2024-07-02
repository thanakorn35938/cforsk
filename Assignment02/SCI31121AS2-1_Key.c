#include <stdio.h>

int main(){
    int celc, farhr, one, two, five, ten;
    printf("Section 1\n");
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celc);
    farhr = (celc * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %d\n", farhr);

    printf("Section 2\n");
    printf("Enter ones amount : ");
    scanf("%d", &one);
    printf("Enter twos amount : ");
    scanf("%d", &two);
    printf("Enter fives amount : ");
    scanf("%d", &five);
    printf("Enter tens amount : ");
    scanf("%d", &ten);
    printf("Total amount is : %d\n", (one + (two * 2) + (five * 5) + (ten * 10)));
}
#include <stdio.h>
int main() {
    //input
    float price;
    float options;
    printf("Enter teacher post-tax rate 0.93 or 1.07: ");
    scanf("%f", &options);
    printf("Enter the price include vat: ");
    scanf("%f", &price);

    //Processing
    float priceWithoutVat = price / options;

    //Output Handle Ex
    printf("The price without vat is: %.2f", priceWithoutVat);

}

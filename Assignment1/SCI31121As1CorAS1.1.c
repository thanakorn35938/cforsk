#include <stdio.h>
float main() {
    //input
    float price;
    printf("Enter the price include vat: ");
    scanf("%f", &price);

    //Processing
    float priceWithoutVat = price / 1.07;

    //Output Handle Ex
    printf("The price without vat is: %.2f", priceWithoutVat);

}

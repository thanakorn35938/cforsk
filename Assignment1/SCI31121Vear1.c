#include <stdio.h>
int main() {
    //input
    float price;
    printf("Enter the price: ");
    scanf("%f", &price);


    /**
     * @brief Processing
     * 
     */

    float vat = 0.07*price;
    price = price + vat;


    //Output Handle Ex
    printf("The price is: %.2f", price);
}
